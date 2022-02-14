
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct onenand_chip {struct bbm_info* bbm; } ;
struct mtd_info {struct onenand_chip* priv; } ;
struct bbm_info {int* bbt; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct onenand_chip*,scalar_t__) ;
 int FUNC_1 (char*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_0->priv;
 struct bbm_info *VAR_4 = VAR_3->bbm;
 int VAR_5;
 uint8_t VAR_6;


 VAR_5 = (int) (FUNC_0(VAR_3, VAR_1) << 1);
 VAR_6 = (VAR_4->bbt[VAR_5 >> 3] >> (VAR_5 & 0x06)) & 0x03;

 FUNC_1("onenand_isbad_bbt: bbt info for offs 0x%08x: (block %d) 0x%02x\n",
  (unsigned int) VAR_1, VAR_5 >> 1, VAR_6);

 switch ((int) VAR_6) {
 case 0x00: return 0;
 case 0x01: return 1;
 case 0x02: return VAR_2 ? 0 : 1;
 }

 return 1;
}
