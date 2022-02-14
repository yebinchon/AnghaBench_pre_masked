
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lr_ret; } ;
struct TYPE_3__ {int res; int arg; scalar_t__ roc; } ;
struct nfs4_delegreturndata {int fattr; TYPE_2__ res; TYPE_1__ lr; struct inode* inode; } ;
struct inode {int dummy; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int *) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct nfs4_delegreturndata *VAR_1 = VAR_0;
 struct inode *VAR_2 = VAR_1->inode;

 if (VAR_2) {
  if (VAR_1->lr.roc)
   FUNC_3(&VAR_1->lr.arg, &VAR_1->lr.res,
     VAR_1->res.lr_ret);
  FUNC_2(VAR_2, &VAR_1->fattr);
  FUNC_1(VAR_2);
 }
 FUNC_0(VAR_0);
}
