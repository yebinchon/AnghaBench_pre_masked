
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct TYPE_3__ {int IO_ADDR_W; } ;
struct TYPE_4__ {TYPE_1__ legacy; } ;
struct fsl_upm_nand {int wait_flags; TYPE_2__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsl_upm_nand*) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ,int const) ;
 struct fsl_upm_nand* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
 struct fsl_upm_nand *VAR_5 = FUNC_3(FUNC_1(VAR_2));
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_2(VAR_5->chip.legacy.IO_ADDR_W, VAR_3[VAR_6]);
  if (VAR_5->wait_flags & VAR_1)
   FUNC_0(VAR_5);
 }
 if (VAR_5->wait_flags & VAR_0)
  FUNC_0(VAR_5);
}
