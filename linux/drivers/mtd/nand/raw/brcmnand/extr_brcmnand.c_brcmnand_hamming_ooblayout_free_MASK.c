
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int dummy; } ;
struct brcmnand_cfg {int spare_area_size; int sector_size_1k; int page_size; } ;
struct brcmnand_host {struct brcmnand_cfg hwcfg; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct brcmnand_host* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, int VAR_2,
        struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct brcmnand_host *VAR_5 = FUNC_1(VAR_4);
 struct brcmnand_cfg *VAR_6 = &VAR_5->hwcfg;
 int VAR_7 = VAR_6->spare_area_size << VAR_6->sector_size_1k;
 int VAR_8 = VAR_6->page_size / (512 << VAR_6->sector_size_1k);

 if (VAR_2 >= VAR_8 * 2)
  return -VAR_0;

 VAR_3->offset = (VAR_2 / 2) * VAR_7;

 if (VAR_2 & 1) {
  VAR_3->offset += 9;
  VAR_3->length = 7;
 } else {
  VAR_3->length = 6;


  if (!VAR_2) {




   if (VAR_6->page_size > 512)
    VAR_3->offset++;
   VAR_3->length--;
  }
 }

 return 0;
}
