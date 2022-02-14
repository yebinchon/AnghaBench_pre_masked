
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct TYPE_2__ {unsigned int corrected; int failed; } ;
struct mtd_info {int bitflip_threshold; TYPE_1__ ecc_stats; int oobsize; } ;
struct brcmnand_host {struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int nand_version; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct brcmnand_controller*) ;
 unsigned int FUNC_1 (struct brcmnand_controller*) ;
 int FUNC_2 (struct brcmnand_host*,scalar_t__,int *,unsigned int,int ) ;
 int FUNC_3 (struct mtd_info*,struct nand_chip*,scalar_t__,unsigned int,int *,int *,scalar_t__*) ;
 int FUNC_4 (struct mtd_info*,struct nand_chip*,int *,scalar_t__) ;
 int FUNC_5 (int ,char*,unsigned long long,...) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct brcmnand_controller*) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int *,int,int ) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 struct brcmnand_host* FUNC_13 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_14(struct mtd_info *VAR_3, struct nand_chip *VAR_4,
    u64 VAR_5, unsigned int VAR_6, u32 *VAR_7, u8 *VAR_8)
{
 struct brcmnand_host *VAR_9 = FUNC_13(VAR_4);
 struct brcmnand_controller *VAR_10 = VAR_9->ctrl;
 u64 VAR_11 = 0;
 int VAR_12;
 bool VAR_13 = 1;

 FUNC_5(VAR_10->dev, "read %llx -> %p\n", (unsigned long long)VAR_5, VAR_7);

try_dmaread:
 FUNC_0(VAR_10);

 if (FUNC_7(VAR_10) && !VAR_8 && FUNC_6(VAR_7)) {
  VAR_12 = FUNC_2(VAR_9, VAR_5, VAR_7, VAR_6 * VAR_2,
          VAR_0);
  if (VAR_12) {
   if (FUNC_11(VAR_12))
    VAR_11 = VAR_5;
   else
    return -VAR_1;
  }
 } else {
  if (VAR_8)
   FUNC_9(VAR_8, 0x99, VAR_3->oobsize);

  VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
            VAR_8, &VAR_11);
 }

 if (FUNC_12(VAR_12)) {
  if ((VAR_10->nand_version == 0x0700) ||
      (VAR_10->nand_version == 0x0701)) {
   if (VAR_13) {
    VAR_13 = 0;
    goto try_dmaread;
   }
  }





  if (VAR_10->nand_version < 0x0702) {
   VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_7,
             VAR_5);

   if (VAR_12 >= 0)
    return VAR_12;
  }

  FUNC_5(VAR_10->dev, "uncorrectable error at 0x%llx\n",
   (unsigned long long)VAR_11);
  VAR_3->ecc_stats.failed++;

  return 0;
 }

 if (FUNC_10(VAR_12)) {
  unsigned int VAR_14 = FUNC_1(VAR_10);

  FUNC_5(VAR_10->dev, "corrected error at 0x%llx\n",
   (unsigned long long)VAR_11);
  VAR_3->ecc_stats.corrected += VAR_14;

  return FUNC_8(VAR_3->bitflip_threshold, VAR_14);
 }

 return 0;
}
