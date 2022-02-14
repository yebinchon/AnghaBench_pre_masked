
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_dev {int dummy; } ;
struct file {int private_data; } ;


 struct fuse_dev* FUNC_0 (int ) ;

__attribute__((used)) static struct fuse_dev *FUNC_1(struct file *VAR_0)
{




 return FUNC_0(VAR_0->private_data);
}
