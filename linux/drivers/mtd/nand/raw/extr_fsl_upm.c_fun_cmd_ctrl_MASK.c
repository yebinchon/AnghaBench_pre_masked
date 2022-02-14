
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int IO_ADDR_R; } ;
struct nand_chip {TYPE_1__ legacy; } ;
struct TYPE_6__ {int width; } ;
struct fsl_upm_nand {unsigned int last_ctrl; int* mchip_offsets; size_t mchip_number; int wait_flags; TYPE_2__ upm; int upm_cmd_offset; int upm_addr_offset; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct fsl_upm_nand*) ;
 int FUNC_4 (struct nand_chip*) ;
 struct fsl_upm_nand* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_5, int VAR_6, unsigned int VAR_7)
{
 struct fsl_upm_nand *VAR_8 = FUNC_5(FUNC_4(VAR_5));
 u32 VAR_9;

 if (!(VAR_7 & VAR_8->last_ctrl)) {
  FUNC_0(&VAR_8->upm);

  if (VAR_6 == VAR_3)
   return;

  VAR_8->last_ctrl = VAR_7 & (VAR_1 | VAR_2);
 }

 if (VAR_7 & VAR_4) {
  if (VAR_7 & VAR_1)
   FUNC_2(&VAR_8->upm, VAR_8->upm_addr_offset);
  else if (VAR_7 & VAR_2)
   FUNC_2(&VAR_8->upm, VAR_8->upm_cmd_offset);
 }

 VAR_9 = (VAR_6 << (32 - VAR_8->upm.width)) |
  VAR_8->mchip_offsets[VAR_8->mchip_number];
 FUNC_1(&VAR_8->upm, VAR_5->legacy.IO_ADDR_R, VAR_9);

 if (VAR_8->wait_flags & VAR_0)
  FUNC_3(VAR_8);
}
