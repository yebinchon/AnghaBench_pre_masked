
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpc32xx_udc {int dev_status; TYPE_1__* board; } ;
struct TYPE_2__ {int (* rmwk_chgb ) (int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct lpc32xx_udc *VAR_1)
{
 if (VAR_1->board->rmwk_chgb != ((void*)0))
  VAR_1->board->rmwk_chgb(VAR_1->dev_status &
          (1 << VAR_0));
}
