
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t3cdev {int dummy; } ;
struct cxgbi_sock {int * l2t; TYPE_1__* cdev; } ;
struct TYPE_2__ {scalar_t__ lldev; } ;


 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (struct t3cdev*,int *) ;

__attribute__((used)) static void FUNC_2(struct cxgbi_sock *VAR_0)
{
 struct t3cdev *VAR_1 = (struct t3cdev *)VAR_0->cdev->lldev;

 if (VAR_0->l2t) {
  FUNC_1(VAR_1, VAR_0->l2t);
  VAR_0->l2t = ((void*)0);
  FUNC_0(VAR_0);
 }
}
