
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nand_chip {int page_shift; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ sector_size_1k; } ;
struct brcmnand_host {unsigned int last_cmd; int last_addr; TYPE_1__ hwcfg; scalar_t__ last_byte; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int soc; scalar_t__ flash_cache; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct brcmnand_host*) ;
 int FUNC_2 (struct brcmnand_host*,int ,int,int) ;
 int FUNC_3 (struct brcmnand_controller*,int) ;
 int FUNC_4 (struct brcmnand_host*,int) ;
 int FUNC_5 (struct mtd_info*,int) ;
 int FUNC_6 (struct brcmnand_host*,scalar_t__) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct mtd_info*,int) ;
 int FUNC_11 (int ,char*,unsigned int,unsigned long long) ;
 struct brcmnand_host* FUNC_12 (struct nand_chip*) ;
 struct mtd_info* FUNC_13 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_14(struct nand_chip *VAR_11, unsigned VAR_12,
        int VAR_13, int VAR_14)
{
 struct mtd_info *VAR_15 = FUNC_13(VAR_11);
 struct brcmnand_host *VAR_16 = FUNC_12(VAR_11);
 struct brcmnand_controller *VAR_17 = VAR_16->ctrl;
 u64 VAR_18 = (u64)VAR_14 << VAR_11->page_shift;
 int VAR_19 = 0;

 if (VAR_12 == 133 || VAR_12 == 134 ||
   VAR_12 == 130)
  VAR_18 = (u64)VAR_13;

 else if (VAR_14 < 0)
  VAR_18 = 0;

 FUNC_11(VAR_17->dev, "cmd 0x%x addr 0x%llx\n", VAR_12,
  (unsigned long long)VAR_18);

 VAR_16->last_cmd = VAR_12;
 VAR_16->last_byte = 0;
 VAR_16->last_addr = VAR_18;

 switch (VAR_12) {
 case 131:
  VAR_19 = VAR_2;
  break;
 case 128:
  VAR_19 = VAR_6;
  break;
 case 133:
  VAR_19 = VAR_1;
  break;
 case 132:
  VAR_19 = VAR_5;
  break;
 case 136:
  VAR_19 = VAR_0;
  FUNC_10(VAR_15, 0);
  break;
 case 134:
  VAR_19 = VAR_4;
  break;
 case 129:
 case 135:
  FUNC_2(VAR_16, VAR_10, VAR_12, 0);
  FUNC_2(VAR_16, VAR_9, VAR_13, 0);
  break;
 case 130:
  VAR_19 = VAR_3;
  VAR_18 &= ~((u64)(VAR_7 - 1));




  if (FUNC_1(VAR_16)) {
   VAR_16->hwcfg.sector_size_1k =
    FUNC_1(VAR_16);
   FUNC_6(VAR_16, 0);
  }
  break;
 }

 if (!VAR_19)
  return;

 FUNC_5(VAR_15, VAR_18);
 FUNC_4(VAR_16, VAR_19);
 FUNC_9(VAR_11);

 if (VAR_19 == VAR_4 ||
   VAR_19 == VAR_3) {

  u32 *VAR_20 = (u32 *)VAR_17->flash_cache;
  int VAR_21;

  FUNC_7(VAR_17->soc, 1);





  for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++)




   VAR_20[VAR_21] = FUNC_0(FUNC_3(VAR_17, VAR_21));

  FUNC_8(VAR_17->soc, 1);


  if (VAR_16->hwcfg.sector_size_1k)
   FUNC_6(VAR_16,
          VAR_16->hwcfg.sector_size_1k);
 }


 if (VAR_12 == 136)
  FUNC_10(VAR_15, 1);
}
