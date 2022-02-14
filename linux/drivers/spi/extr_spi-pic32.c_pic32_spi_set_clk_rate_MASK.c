
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pic32_spi {TYPE_1__* regs; int clk; } ;
struct TYPE_2__ {int baud; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct pic32_spi *VAR_1, u32 VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_0(FUNC_1(VAR_1->clk), 2 * VAR_2) - 1;

 FUNC_2(VAR_3 & VAR_0, &VAR_1->regs->baud);
}
