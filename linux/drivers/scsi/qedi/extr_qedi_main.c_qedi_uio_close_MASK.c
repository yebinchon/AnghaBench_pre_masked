
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {struct qedi_uio_dev* priv; } ;
struct qedi_uio_dev {int uio_dev; struct qedi_ctx* qedi; } ;
struct qedi_ctx {int flags; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qedi_ctx*) ;

__attribute__((used)) static int FUNC_2(struct uio_info *VAR_1, struct inode *VAR_2)
{
 struct qedi_uio_dev *VAR_3 = VAR_1->priv;
 struct qedi_ctx *VAR_4 = VAR_3->qedi;

 VAR_3->uio_dev = -1;
 FUNC_0(VAR_0, &VAR_4->flags);
 FUNC_1(VAR_4);
 return 0;
}
