
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u32 ;
struct nand_chip {int pagemask; } ;
struct mtd_info {int dummy; } ;
struct bcm47xxnflash {int curr_page_addr; int curr_column; int cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int,int) ;
 struct nand_chip* FUNC_6 (struct mtd_info*) ;
 struct bcm47xxnflash* FUNC_7 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_8(struct mtd_info *VAR_10, uint8_t *VAR_11,
        int VAR_12)
{
 struct nand_chip *VAR_13 = FUNC_6(VAR_10);
 struct bcm47xxnflash *VAR_14 = FUNC_7(VAR_13);

 u32 VAR_15;
 u32 *VAR_16 = (u32 *)VAR_11;
 int VAR_17;
 int VAR_18;

 FUNC_0(VAR_14->curr_page_addr & ~VAR_13->pagemask);



 while (VAR_12) {

  VAR_18 = FUNC_5(VAR_12, 0x200);


  FUNC_4(VAR_14->cc, VAR_0,
    VAR_14->curr_column);
  FUNC_4(VAR_14->cc, VAR_2,
    VAR_14->curr_page_addr);


  VAR_15 = VAR_7 | VAR_5 | VAR_9 | VAR_6 |
     VAR_4;
  VAR_15 |= VAR_3 << 8;
  if (FUNC_1(VAR_14->cc, VAR_15))
   return;
  if (FUNC_2(VAR_14->cc))
   return;


  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17 += 4, VAR_16++) {
   VAR_15 = VAR_7 | 0x30000000 | VAR_8;
   if (VAR_17 == VAR_18 - 4)
    VAR_15 &= ~VAR_7;
   if (FUNC_1(VAR_14->cc,
             VAR_15))
    return;
   *VAR_16 = FUNC_3(VAR_14->cc, VAR_1);
  }

  VAR_14->curr_column += VAR_18;
  VAR_12 -= VAR_18;
 }
}
