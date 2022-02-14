
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct nand_chip {int bbt_options; TYPE_1__ ecc; int options; } ;
struct mtd_info {int bitflip_threshold; } ;
struct TYPE_4__ {scalar_t__ sector_size_1k; } ;
struct brcmnand_host {TYPE_2__ hwcfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct brcmnand_host*) ;
 int FUNC_1 (struct brcmnand_host*) ;
 struct brcmnand_host* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_3(VAR_5);
 struct brcmnand_host *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 VAR_5->options |= VAR_3;





 VAR_5->options |= VAR_4;

 if (VAR_5->bbt_options & VAR_2)
  VAR_5->bbt_options |= VAR_1;

 if (FUNC_0(VAR_7))
  return -VAR_0;

 VAR_5->ecc.size = VAR_7->hwcfg.sector_size_1k ? 1024 : 512;


 VAR_6->bitflip_threshold = 1;

 VAR_8 = FUNC_1(VAR_7);

 return VAR_8;
}
