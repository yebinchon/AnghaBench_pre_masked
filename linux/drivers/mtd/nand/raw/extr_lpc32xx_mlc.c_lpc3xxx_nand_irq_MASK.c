
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lpc32xx_nand_host {int comp_controller; int comp_nand; int io_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, struct lpc32xx_nand_host *VAR_4)
{
 uint8_t VAR_5;


 VAR_5 = FUNC_2(FUNC_0(VAR_4->io_base));
 if (VAR_5 & VAR_2)
  FUNC_1(&VAR_4->comp_nand);
 if (VAR_5 & VAR_1)
  FUNC_1(&VAR_4->comp_controller);

 return VAR_0;
}
