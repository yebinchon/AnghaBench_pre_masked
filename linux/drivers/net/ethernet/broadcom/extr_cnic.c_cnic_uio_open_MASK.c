
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {struct cnic_uio_dev* priv; } ;
struct inode {int dummy; } ;
struct cnic_uio_dev {int uio_dev; struct cnic_dev* dev; } ;
struct cnic_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cnic_dev*) ;
 int FUNC_2 (struct cnic_dev*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct uio_info *VAR_5, struct inode *VAR_6)
{
 struct cnic_uio_dev *VAR_7 = VAR_5->priv;
 struct cnic_dev *VAR_8;

 if (!FUNC_0(VAR_0))
  return -VAR_4;

 if (VAR_7->uio_dev != -1)
  return -VAR_2;

 FUNC_4();
 VAR_8 = VAR_7->dev;

 if (!VAR_8 || !FUNC_6(VAR_1, &VAR_8->flags)) {
  FUNC_5();
  return -VAR_3;
 }

 VAR_7->uio_dev = FUNC_3(VAR_6);

 FUNC_2(VAR_8);
 FUNC_1(VAR_8);
 FUNC_5();

 return 0;
}
