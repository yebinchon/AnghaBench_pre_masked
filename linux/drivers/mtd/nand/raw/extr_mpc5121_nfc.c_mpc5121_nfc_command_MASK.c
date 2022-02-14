
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; } ;
struct mtd_info {int writesize; } ;
struct mpc5121_nfc_prv {int column; int spareonly; } ;


 int VAR_0 ;







 unsigned int VAR_1 ;


 int FUNC_0 (struct mtd_info*,int,int) ;
 int FUNC_1 (struct mtd_info*,unsigned int) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*) ;
 int FUNC_4 (struct mtd_info*) ;
 int FUNC_5 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_6 (struct nand_chip*) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_8(struct nand_chip *VAR_2, unsigned VAR_3,
    int VAR_4, int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_7(VAR_2);
 struct mpc5121_nfc_prv *VAR_7 = FUNC_6(VAR_2);

 VAR_7->column = (VAR_4 >= 0) ? VAR_4 : 0;
 VAR_7->spareonly = 0;

 switch (VAR_3) {
 case 134:
  FUNC_2(VAR_6);
  break;




 case 133:
  VAR_4 = 0;
  break;

 case 132:
  VAR_7->column += 256;
  VAR_3 = 133;
  VAR_4 = 0;
  break;

 case 130:
  VAR_7->spareonly = 1;
  VAR_3 = 133;
  VAR_4 = 0;
  break;

 case 129:
  FUNC_8(VAR_2, 133, VAR_4, VAR_5);
  VAR_4 = 0;
  break;

 case 136:
 case 135:
 case 131:
 case 128:
  break;

 default:
  return;
 }

 FUNC_1(VAR_6, VAR_3);
 FUNC_0(VAR_6, VAR_4, VAR_5);

 switch (VAR_3) {
 case 133:
  if (VAR_6->writesize > 512)
   FUNC_1(VAR_6, VAR_1);
  FUNC_4(VAR_6);
  break;

 case 131:
  FUNC_3(VAR_6);
  break;

 case 128:
  FUNC_5(VAR_6);
  if (VAR_2->options & VAR_0)
   VAR_7->column = 1;
  else
   VAR_7->column = 0;
  break;
 }
}
