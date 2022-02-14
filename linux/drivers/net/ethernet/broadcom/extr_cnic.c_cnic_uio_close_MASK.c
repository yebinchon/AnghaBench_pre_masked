
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {struct cnic_uio_dev* priv; } ;
struct inode {int dummy; } ;
struct cnic_uio_dev {int uio_dev; } ;



__attribute__((used)) static int FUNC_0(struct uio_info *VAR_0, struct inode *VAR_1)
{
 struct cnic_uio_dev *VAR_2 = VAR_0->priv;

 VAR_2->uio_dev = -1;
 return 0;
}
