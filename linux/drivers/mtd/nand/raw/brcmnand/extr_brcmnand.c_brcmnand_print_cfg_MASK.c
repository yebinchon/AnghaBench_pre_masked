
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmnand_host {int ctrl; } ;
struct brcmnand_cfg {int block_size; int page_size; int ecc_level; scalar_t__ sector_size_1k; int device_width; int spare_area_size; scalar_t__ device_size; } ;


 scalar_t__ FUNC_0 (int ,struct brcmnand_cfg*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct brcmnand_host *VAR_0,
          char *VAR_1, struct brcmnand_cfg *VAR_2)
{
 VAR_1 += FUNC_1(VAR_1,
  "%lluMiB total, %uKiB blocks, %u%s pages, %uB OOB, %u-bit",
  (unsigned long long)VAR_2->device_size >> 20,
  VAR_2->block_size >> 10,
  VAR_2->page_size >= 1024 ? VAR_2->page_size >> 10 : VAR_2->page_size,
  VAR_2->page_size >= 1024 ? "KiB" : "B",
  VAR_2->spare_area_size, VAR_2->device_width);


 if (FUNC_0(VAR_0->ctrl, VAR_2))
  FUNC_1(VAR_1, ", Hamming ECC");
 else if (VAR_2->sector_size_1k)
  FUNC_1(VAR_1, ", BCH-%u (1KiB sector)", VAR_2->ecc_level << 1);
 else
  FUNC_1(VAR_1, ", BCH-%u", VAR_2->ecc_level);
}
