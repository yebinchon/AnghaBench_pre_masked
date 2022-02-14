
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_inode_info {int ip_lock; int ip_open_count; int ip_blkno; int ip_flags; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_3__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_4__ {int name; int len; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*,TYPE_3__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct ocfs2_inode_info *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(&VAR_3->ip_lock);
 if (!--VAR_3->ip_open_count)
  VAR_3->ip_flags &= ~VAR_0;

 FUNC_4(VAR_1, VAR_2, VAR_2->f_path.dentry,
     VAR_3->ip_blkno,
     VAR_2->f_path.dentry->d_name.len,
     VAR_2->f_path.dentry->d_name.name,
     VAR_3->ip_open_count);
 FUNC_3(&VAR_3->ip_lock);

 FUNC_1(VAR_1, VAR_2);

 return 0;
}
