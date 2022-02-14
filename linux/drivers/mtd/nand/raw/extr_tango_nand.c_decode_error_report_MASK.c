
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tango_nfc {scalar_t__ mem_base; scalar_t__ reg_base; } ;
struct nand_chip {int controller; } ;
struct TYPE_2__ {int corrected; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (scalar_t__) ;
 struct tango_nfc* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_4)
{
 u32 VAR_5, VAR_6;
 struct mtd_info *VAR_7 = FUNC_5(VAR_4);
 struct tango_nfc *VAR_8 = FUNC_7(VAR_4->controller);

 VAR_5 = FUNC_6(VAR_8->reg_base + VAR_2);
 if (VAR_5 & VAR_3)
  return 0;

 VAR_6 = FUNC_6(VAR_8->mem_base + VAR_1);

 if (FUNC_0(VAR_6) || FUNC_1(VAR_6))
  return -VAR_0;


 VAR_7->ecc_stats.corrected +=
  FUNC_2(VAR_6) + FUNC_3(VAR_6);

 return FUNC_4(FUNC_2(VAR_6), FUNC_3(VAR_6));
}
