
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct TYPE_3__ {int IO_ADDR_R; } ;
struct TYPE_4__ {TYPE_1__ legacy; } ;
struct fsl_upm_nand {TYPE_2__ chip; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 struct fsl_upm_nand* FUNC_2 (int ) ;

__attribute__((used)) static uint8_t FUNC_3(struct nand_chip *VAR_0)
{
 struct fsl_upm_nand *VAR_1 = FUNC_2(FUNC_1(VAR_0));

 return FUNC_0(VAR_1->chip.legacy.IO_ADDR_R);
}
