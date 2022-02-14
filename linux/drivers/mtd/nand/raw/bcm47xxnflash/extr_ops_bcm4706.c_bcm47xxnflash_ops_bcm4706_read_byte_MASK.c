
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct bcma_drv_cc {int dummy; } ;
struct bcm47xxnflash {int curr_command; int curr_column; int* id_data; struct bcma_drv_cc* cc; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (struct bcma_drv_cc*,int ) ;
 int FUNC_2 (struct mtd_info*,int*,int) ;
 int FUNC_3 (struct bcma_drv_cc*,int ) ;
 struct bcm47xxnflash* FUNC_4 (struct nand_chip*) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static u8 FUNC_7(struct nand_chip *VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_5(VAR_2);
 struct bcm47xxnflash *VAR_4 = FUNC_4(VAR_2);
 struct bcma_drv_cc *VAR_5 = VAR_4->cc;
 u32 VAR_6 = 0;

 switch (VAR_4->curr_command) {
 case 130:
  if (VAR_4->curr_column >= FUNC_0(VAR_4->id_data)) {
   FUNC_6("Requested invalid id_data: %d\n",
          VAR_4->curr_column);
   return 0;
  }
  return VAR_4->id_data[VAR_4->curr_column++];
 case 128:
  if (FUNC_1(VAR_5, VAR_1))
   return 0;
  return FUNC_3(VAR_5, VAR_0) & 0xff;
 case 129:
  FUNC_2(VAR_3, (u8 *)&VAR_6, 4);
  return VAR_6 & 0xFF;
 }

 FUNC_6("Invalid command for byte read: 0x%X\n", VAR_4->curr_command);
 return 0;
}
