
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct mtd_info {unsigned int oobsize; } ;
struct TYPE_2__ {int sector_size_1k; } ;
struct brcmnand_host {TYPE_1__ hwcfg; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmnand_controller*) ;
 int FUNC_1 (struct brcmnand_controller*) ;
 int FUNC_2 (struct brcmnand_controller*) ;
 int FUNC_3 (struct brcmnand_controller*,int) ;
 int FUNC_4 (struct brcmnand_host*,int ) ;
 int FUNC_5 (struct mtd_info*,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct nand_chip*) ;
 scalar_t__ FUNC_9 (int *) ;
 struct brcmnand_host* FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (struct brcmnand_controller*,int,int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_12(struct mtd_info *VAR_5, struct nand_chip *VAR_6,
    u64 VAR_7, unsigned int VAR_8, u32 *VAR_9,
    u8 *VAR_10, u64 *VAR_11)
{
 struct brcmnand_host *VAR_12 = FUNC_10(VAR_6);
 struct brcmnand_controller *VAR_13 = VAR_12->ctrl;
 int VAR_14, VAR_15, VAR_16 = 0;

 FUNC_0(VAR_13);

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++, VAR_7 += VAR_3) {
  FUNC_5(VAR_5, VAR_7);

  FUNC_4(VAR_12, VAR_0);
  FUNC_8(VAR_6);

  if (FUNC_9(VAR_9)) {
   FUNC_6(VAR_13->soc, 0);

   for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++, VAR_9++)
    *VAR_9 = FUNC_3(VAR_13, VAR_15);

   FUNC_7(VAR_13->soc, 0);
  }

  if (VAR_10)
   VAR_10 += FUNC_11(VAR_13, VAR_14, VAR_10,
     VAR_5->oobsize / VAR_8,
     VAR_12->hwcfg.sector_size_1k);

  if (!VAR_16) {
   *VAR_11 = FUNC_2(VAR_13);

   if (*VAR_11)
    VAR_16 = -VAR_1;
  }

  if (!VAR_16) {
   *VAR_11 = FUNC_1(VAR_13);

   if (*VAR_11)
    VAR_16 = -VAR_2;
  }
 }

 return VAR_16;
}
