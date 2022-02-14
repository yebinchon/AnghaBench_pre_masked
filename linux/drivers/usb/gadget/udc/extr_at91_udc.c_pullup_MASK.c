
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at91_udc {TYPE_1__* caps; int vbus; int enabled; } ;
struct TYPE_2__ {int (* pullup ) (struct at91_udc*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct at91_udc*,int ,int ) ;
 int FUNC_2 (struct at91_udc*) ;
 int FUNC_3 (struct at91_udc*) ;
 int FUNC_4 (struct at91_udc*) ;
 int FUNC_5 (struct at91_udc*,int) ;

__attribute__((used)) static void FUNC_6(struct at91_udc *VAR_5, int VAR_6)
{
 if (!VAR_5->enabled || !VAR_5->vbus)
  VAR_6 = 0;
 FUNC_0("%sactive\n", VAR_6 ? "" : "in");

 if (VAR_6) {
  FUNC_3(VAR_5);
  FUNC_1(VAR_5, VAR_0, VAR_2);
  FUNC_1(VAR_5, VAR_3, 0);
 } else {
  FUNC_4(VAR_5);
  FUNC_1(VAR_5, VAR_1, VAR_2);
  FUNC_1(VAR_5, VAR_3, VAR_4);
  FUNC_2(VAR_5);
 }

 if (VAR_5->caps && VAR_5->caps->pullup)
  VAR_5->caps->pullup(VAR_5, VAR_6);
}
