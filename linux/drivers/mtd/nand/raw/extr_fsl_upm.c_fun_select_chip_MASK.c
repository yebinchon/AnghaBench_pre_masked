
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ IO_ADDR_R; scalar_t__ IO_ADDR_W; int (* cmd_ctrl ) (struct nand_chip*,int ,int) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;
struct fsl_upm_nand {int mchip_number; scalar_t__* mchip_offsets; scalar_t__ io_base; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int ,int) ;
 struct fsl_upm_nand* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_3, int VAR_4)
{
 struct fsl_upm_nand *VAR_5 = FUNC_3(FUNC_1(VAR_3));

 if (VAR_4 == -1) {
  VAR_3->legacy.cmd_ctrl(VAR_3, VAR_0, 0 | VAR_1);
 } else if (VAR_4 >= 0 && VAR_4 < VAR_2) {
  VAR_5->mchip_number = VAR_4;
  VAR_3->legacy.IO_ADDR_R = VAR_5->io_base + VAR_5->mchip_offsets[VAR_4];
  VAR_3->legacy.IO_ADDR_W = VAR_3->legacy.IO_ADDR_R;
 } else {
  FUNC_0();
 }
}
