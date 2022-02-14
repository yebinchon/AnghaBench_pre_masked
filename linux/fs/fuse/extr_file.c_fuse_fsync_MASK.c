
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_conn {int no_fsync; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct file*,int ,int ,int,int ) ;
 int FUNC_3 (struct inode*) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_3, loff_t VAR_4, loff_t VAR_5,
        int VAR_6)
{
 struct inode *VAR_7 = VAR_3->f_mapping->host;
 struct fuse_conn *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;

 if (FUNC_7(VAR_7))
  return -VAR_0;

 FUNC_5(VAR_7);






 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  goto out;

 FUNC_3(VAR_7);






 VAR_9 = FUNC_0(VAR_3);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_8(VAR_7, 1);
 if (VAR_9)
  goto out;

 if (VAR_8->no_fsync)
  goto out;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_2);
 if (VAR_9 == -VAR_1) {
  VAR_8->no_fsync = 1;
  VAR_9 = 0;
 }
out:
 FUNC_6(VAR_7);

 return VAR_9;
}
