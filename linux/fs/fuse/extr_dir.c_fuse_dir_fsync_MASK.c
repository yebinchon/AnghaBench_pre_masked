
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_conn {int no_fsyncdir; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int ,int ,int,int ) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, loff_t VAR_4, loff_t VAR_5,
     int VAR_6)
{
 struct inode *VAR_7 = VAR_3->f_mapping->host;
 struct fuse_conn *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;

 if (FUNC_4(VAR_7))
  return -VAR_0;

 if (VAR_8->no_fsyncdir)
  return 0;

 FUNC_2(VAR_7);
 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_2);
 if (VAR_9 == -VAR_1) {
  VAR_8->no_fsyncdir = 1;
  VAR_9 = 0;
 }
 FUNC_3(VAR_7);

 return VAR_9;
}
