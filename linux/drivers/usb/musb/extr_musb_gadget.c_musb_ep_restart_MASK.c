
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb_request {scalar_t__ tx; int epnum; } ;
struct musb {int mregs; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct musb*,struct musb_request*) ;
 int FUNC_2 (struct musb_request*) ;
 int FUNC_3 (struct musb*,struct musb_request*) ;

void FUNC_4(struct musb *VAR_0, struct musb_request *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_0(VAR_0->mregs, VAR_1->epnum);
 if (VAR_1->tx)
  FUNC_3(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
