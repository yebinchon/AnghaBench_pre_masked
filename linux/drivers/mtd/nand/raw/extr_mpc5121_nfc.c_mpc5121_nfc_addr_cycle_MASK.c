
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int pagemask; } ;
struct mtd_info {int writesize; } ;


 int FUNC_0 (struct mtd_info*,int) ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0, int VAR_1, int VAR_2)
{
 struct nand_chip *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4 = VAR_3->pagemask;

 if (VAR_1 != -1) {
  FUNC_0(VAR_0, VAR_1);
  if (VAR_0->writesize > 512)
   FUNC_0(VAR_0, VAR_1 >> 8);
 }

 if (VAR_2 != -1) {
  do {
   FUNC_0(VAR_0, VAR_2 & 0xFF);
   VAR_2 >>= 8;
   VAR_4 >>= 8;
  } while (VAR_4);
 }
}
