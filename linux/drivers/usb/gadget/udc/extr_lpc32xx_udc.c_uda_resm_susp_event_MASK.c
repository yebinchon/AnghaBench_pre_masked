
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct lpc32xx_udc {int suspended; TYPE_1__* board; } ;
struct TYPE_2__ {int (* susp_chgb ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct lpc32xx_udc *VAR_0, u32 VAR_1)
{

 if (VAR_0->board->susp_chgb != ((void*)0))
  VAR_0->board->susp_chgb(VAR_1);

 if (VAR_1)
  VAR_0->suspended = 0;
 else
  VAR_0->suspended = 1;
}
