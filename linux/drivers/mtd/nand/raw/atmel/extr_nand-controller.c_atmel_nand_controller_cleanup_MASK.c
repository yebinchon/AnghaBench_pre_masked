
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_nand_controller {int mck; scalar_t__ dmac; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atmel_nand_controller *VAR_0)
{
 if (VAR_0->dmac)
  FUNC_1(VAR_0->dmac);

 FUNC_0(VAR_0->mck);
}
