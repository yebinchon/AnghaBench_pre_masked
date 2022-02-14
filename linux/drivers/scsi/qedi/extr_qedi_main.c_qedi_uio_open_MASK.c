
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {struct qedi_uio_dev* priv; } ;
struct qedi_uio_dev {int uio_dev; struct qedi_ctx* qedi; } ;
struct qedi_ctx {int flags; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct qedi_uio_dev*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct uio_info *VAR_4, struct inode *VAR_5)
{
 struct qedi_uio_dev *VAR_6 = VAR_4->priv;
 struct qedi_ctx *VAR_7 = VAR_6->qedi;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (VAR_6->uio_dev != -1)
  return -VAR_1;

 FUNC_3();
 VAR_6->uio_dev = FUNC_1(VAR_5);
 FUNC_2(VAR_6);
 FUNC_5(VAR_3, &VAR_7->flags);
 FUNC_4();

 return 0;
}
