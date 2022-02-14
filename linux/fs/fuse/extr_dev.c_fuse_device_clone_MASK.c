
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_dev {int dummy; } ;
struct fuse_conn {int dev_count; } ;
struct file {struct fuse_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct fuse_dev* FUNC_1 (struct fuse_conn*) ;

__attribute__((used)) static int FUNC_2(struct fuse_conn *VAR_2, struct file *VAR_3)
{
 struct fuse_dev *VAR_4;

 if (VAR_3->private_data)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_3->private_data = VAR_4;
 FUNC_0(&VAR_2->dev_count);

 return 0;
}
