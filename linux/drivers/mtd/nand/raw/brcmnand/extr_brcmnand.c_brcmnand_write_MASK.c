
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct mtd_info {unsigned int writesize; unsigned int oobsize; } ;
struct TYPE_2__ {int sector_size_1k; } ;
struct brcmnand_host {TYPE_1__ hwcfg; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {unsigned int max_oob; int dev; int soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct brcmnand_host*,scalar_t__,int*,unsigned int,int ) ;
 int FUNC_1 (struct brcmnand_host*,int ) ;
 int FUNC_2 (struct mtd_info*,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct mtd_info*,int) ;
 int FUNC_7 (struct brcmnand_controller*,unsigned int,int const) ;
 int FUNC_8 (int ,char*,unsigned long long,int const*) ;
 int FUNC_9 (int ,char*,unsigned long long) ;
 int FUNC_10 (int ,char*,int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (struct brcmnand_controller*) ;
 struct brcmnand_host* FUNC_13 (struct nand_chip*) ;
 int FUNC_14 (struct brcmnand_controller*,unsigned int,int) ;
 scalar_t__ FUNC_15 (unsigned long) ;
 int FUNC_16 (struct brcmnand_controller*,unsigned int,int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_17(struct mtd_info *VAR_6, struct nand_chip *VAR_7,
     u64 VAR_8, const u32 *VAR_9, u8 *VAR_10)
{
 struct brcmnand_host *VAR_11 = FUNC_13(VAR_7);
 struct brcmnand_controller *VAR_12 = VAR_11->ctrl;
 unsigned int VAR_13, VAR_14, VAR_15 = VAR_6->writesize >> VAR_3;
 int VAR_16, VAR_17 = 0;

 FUNC_8(VAR_12->dev, "write %llx <- %p\n", (unsigned long long)VAR_8, VAR_9);

 if (FUNC_15((unsigned long)VAR_9 & 0x03)) {
  FUNC_10(VAR_12->dev, "unaligned buffer: %p\n", VAR_9);
  VAR_9 = (u32 *)((unsigned long)VAR_9 & ~0x03);
 }

 FUNC_6(VAR_6, 0);

 for (VAR_13 = 0; VAR_13 < VAR_12->max_oob; VAR_13 += 4)
  FUNC_14(VAR_12, VAR_13, 0xffffffff);

 if (FUNC_12(VAR_12) && !VAR_10 && FUNC_11(VAR_9)) {
  if (FUNC_0(VAR_11, VAR_8, (u32 *)VAR_9,
     VAR_6->writesize, VAR_0))
   VAR_17 = -VAR_1;
  goto out;
 }

 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++, VAR_8 += VAR_2) {

  FUNC_2(VAR_6, VAR_8);

  if (VAR_9) {
   FUNC_3(VAR_12->soc, 0);

   for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++, VAR_9++)
    FUNC_7(VAR_12, VAR_14, *VAR_9);

   FUNC_4(VAR_12->soc, 0);
  } else if (VAR_10) {
   for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
    FUNC_7(VAR_12, VAR_14, 0xffffffff);
  }

  if (VAR_10) {
   VAR_10 += FUNC_16(VAR_12, VAR_13, VAR_10,
     VAR_6->oobsize / VAR_15,
     VAR_11->hwcfg.sector_size_1k);
  }


  FUNC_1(VAR_11, VAR_0);
  VAR_16 = FUNC_5(VAR_7);

  if (VAR_16 & VAR_5) {
   FUNC_9(VAR_12->dev, "program failed at %llx\n",
    (unsigned long long)VAR_8);
   VAR_17 = -VAR_1;
   goto out;
  }
 }
out:
 FUNC_6(VAR_6, 1);
 return VAR_17;
}
