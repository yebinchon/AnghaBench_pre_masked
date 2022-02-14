
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lpc32xx_udc {TYPE_1__* board; } ;
struct TYPE_2__ {int (* conn_chgb ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct lpc32xx_udc *VAR_0, u32 VAR_1)
{

 if (VAR_0->board->conn_chgb != ((void*)0))
  VAR_0->board->conn_chgb(VAR_1);
}
