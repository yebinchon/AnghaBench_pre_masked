
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pxa25x_udc {scalar_t__ ep0state; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pxa25x_udc* VAR_5 ;
 struct pxa25x_udc* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct pxa25x_udc*) ;
 int VAR_6 ;
 int FUNC_5 (struct pxa25x_udc*) ;
 int FUNC_6 (struct pxa25x_udc*,int) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_7)
{
 struct pxa25x_udc *VAR_8 = FUNC_1(VAR_8, VAR_7, VAR_6);

 FUNC_2();
 if (VAR_8->ep0state == VAR_1
   && (FUNC_5(VAR_8) & VAR_2) == 0
   && (FUNC_5(VAR_8) & VAR_4) == 0) {
  FUNC_6(VAR_8, VAR_2|VAR_3);
  FUNC_0(VAR_0, "ep0 re-stall\n");
  FUNC_4(VAR_8);
 }
 FUNC_3();
}
