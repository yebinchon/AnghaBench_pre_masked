
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_inode_info {int ip_flags; int ip_lock; int ip_open_count; scalar_t__ ip_blkno; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_3__* dentry; } ;
struct file {int f_flags; int f_mode; TYPE_2__ f_path; } ;
struct TYPE_4__ {int name; int len; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct file*,TYPE_3__*,unsigned long long,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_6, struct file *VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_7->f_flags;
 struct ocfs2_inode_info *VAR_10 = FUNC_0(VAR_6);

 FUNC_5(VAR_6, VAR_7, VAR_7->f_path.dentry,
         (unsigned long long)VAR_10->ip_blkno,
         VAR_7->f_path.dentry->d_name.len,
         VAR_7->f_path.dentry->d_name.name, VAR_9);

 if (VAR_7->f_mode & VAR_2) {
  VAR_8 = FUNC_1(VAR_6);
  if (VAR_8)
   goto leave;
 }

 FUNC_3(&VAR_10->ip_lock);




 if (VAR_10->ip_flags & VAR_3) {
  FUNC_4(&VAR_10->ip_lock);

  VAR_8 = -VAR_0;
  goto leave;
 }

 if (VAR_9 & VAR_5)
  VAR_10->ip_flags |= VAR_4;

 VAR_10->ip_open_count++;
 FUNC_4(&VAR_10->ip_lock);

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_8) {




  FUNC_3(&VAR_10->ip_lock);
  VAR_10->ip_open_count--;
  FUNC_4(&VAR_10->ip_lock);
 }

 VAR_7->f_mode |= VAR_1;

leave:
 return VAR_8;
}
