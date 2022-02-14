
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct atmel_pmecc_user {int eccbytes; struct atmel_pmecc* pmecc; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct atmel_pmecc {TYPE_1__ regs; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct atmel_pmecc_user *VAR_0,
     int VAR_1, void *VAR_2)
{
 struct atmel_pmecc *VAR_3 = VAR_0->pmecc;
 u8 *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->eccbytes; VAR_5++)
  VAR_4[VAR_5] = FUNC_1(VAR_3->regs.base +
           FUNC_0(VAR_1, VAR_5));
}
