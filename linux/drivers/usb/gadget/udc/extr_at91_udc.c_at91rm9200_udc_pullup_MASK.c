
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pullup_pin; int pullup_active_low; } ;
struct at91_udc {TYPE_1__ board; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct at91_udc *VAR_0, int VAR_1)
{
 int VAR_2 = !VAR_0->board.pullup_active_low;

 if (VAR_1)
  FUNC_0(VAR_0->board.pullup_pin, VAR_2);
 else
  FUNC_0(VAR_0->board.pullup_pin, !VAR_2);
}
