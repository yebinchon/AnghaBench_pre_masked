
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct atmel_pmecc_user {int* partial_syn; TYPE_2__* pmecc; } ;
struct TYPE_3__ {scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct atmel_pmecc_user*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct atmel_pmecc_user *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_2(VAR_0->pmecc->regs.base +
          FUNC_0(VAR_1, VAR_4 / 2));
  if (VAR_4 & 1)
   VAR_3 >>= 16;

  VAR_0->partial_syn[(2 * VAR_4) + 1] = VAR_3;
 }
}
