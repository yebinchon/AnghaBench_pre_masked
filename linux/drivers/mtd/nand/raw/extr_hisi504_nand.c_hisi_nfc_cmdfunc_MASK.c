
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; } ;
struct hinfc_host {unsigned int command; int offset; int * cache_addr_value; int dev; int chipselect; int mmio; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,int,int) ;
 unsigned int FUNC_1 (struct hinfc_host*,int ) ;
 int FUNC_2 (struct hinfc_host*,unsigned int,int ) ;
 int FUNC_3 (struct hinfc_host*) ;
 int FUNC_4 (struct hinfc_host*) ;
 int FUNC_5 (struct hinfc_host*) ;
 int FUNC_6 (struct hinfc_host*) ;
 int FUNC_7 (struct hinfc_host*,int ) ;
 int FUNC_8 (struct hinfc_host*) ;
 int FUNC_9 (int ,int ,int) ;
 struct hinfc_host* FUNC_10 (struct nand_chip*) ;
 struct mtd_info* FUNC_11 (struct nand_chip*) ;
 int FUNC_12 (struct mtd_info*,int,int) ;

__attribute__((used)) static void FUNC_13(struct nand_chip *VAR_4, unsigned VAR_5,
        int VAR_6, int VAR_7)
{
 struct mtd_info *VAR_8 = FUNC_11(VAR_4);
 struct hinfc_host *VAR_9 = FUNC_10(VAR_4);
 int VAR_10 = 1;
 unsigned int VAR_11 = 0;

 VAR_9->command = VAR_5;

 switch (VAR_5) {
 case 133:
 case 131:
  if (VAR_5 == 133)
   VAR_9->offset = VAR_6;
  else
   VAR_9->offset = VAR_6 + VAR_8->writesize;

  VAR_10 = 0;
  FUNC_12(VAR_8, VAR_6, VAR_7);
  FUNC_6(VAR_9);
  break;

 case 129:
  VAR_9->offset = VAR_6;
  FUNC_12(VAR_8, VAR_6, VAR_7);
  break;

 case 136:
  FUNC_12(VAR_8, VAR_6, VAR_7);
  break;

 case 134:
  FUNC_4(VAR_9);
  break;

 case 135:
  FUNC_3(VAR_9);
  break;

 case 132:
  VAR_9->offset = VAR_6;
  FUNC_9(VAR_9->mmio, 0, 0x10);
  FUNC_5(VAR_9);
  break;

 case 128:
  VAR_11 = FUNC_1(VAR_9, VAR_0);
  if (VAR_4->ecc.mode == VAR_3)
   FUNC_2(VAR_9,
        VAR_11 & ~(VAR_1 <<
        VAR_2), VAR_0);

  VAR_9->offset = 0;
  FUNC_9(VAR_9->mmio, 0, 0x10);
  FUNC_8(VAR_9);
  FUNC_2(VAR_9, VAR_11, VAR_0);
  break;

 case 130:
  FUNC_7(VAR_9, VAR_9->chipselect);
  break;

 default:
  FUNC_0(VAR_9->dev, "Error: unsupported cmd(cmd=%x, col=%x, page=%x)\n",
   VAR_5, VAR_6, VAR_7);
 }

 if (VAR_10) {
  VAR_9->cache_addr_value[0] = ~0;
  VAR_9->cache_addr_value[1] = ~0;
 }
}
