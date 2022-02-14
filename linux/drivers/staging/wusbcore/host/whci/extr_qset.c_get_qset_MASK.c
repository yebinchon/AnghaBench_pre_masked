
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct whc_qset {TYPE_1__* ep; } ;
struct whc {int dummy; } ;
struct urb {TYPE_1__* ep; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct whc_qset* hcpriv; } ;


 struct whc_qset* FUNC_0 (struct whc*,int ) ;
 int FUNC_1 (struct whc*,struct whc_qset*,struct urb*) ;

struct whc_qset *FUNC_2(struct whc *VAR_0, struct urb *VAR_1,
     gfp_t VAR_2)
{
 struct whc_qset *VAR_3;

 VAR_3 = VAR_1->ep->hcpriv;
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  if (VAR_3 == ((void*)0))
   return ((void*)0);

  VAR_3->ep = VAR_1->ep;
  VAR_1->ep->hcpriv = VAR_3;
  FUNC_1(VAR_0, VAR_3, VAR_1);
 }
 return VAR_3;
}
