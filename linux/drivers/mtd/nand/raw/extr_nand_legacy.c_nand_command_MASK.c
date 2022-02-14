
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip_delay; int dev_ready; int (* cmd_ctrl ) (struct nand_chip*,unsigned int const,int) ;} ;
struct nand_chip {int options; TYPE_1__ legacy; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;





 int VAR_1 ;

 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nand_chip*,int,int) ;
 int FUNC_6 (struct nand_chip*,unsigned int,int) ;
 int FUNC_7 (struct nand_chip*,int,int) ;
 int FUNC_8 (struct nand_chip*,int,int) ;
 int FUNC_9 (struct nand_chip*,int,int) ;
 int FUNC_10 (struct nand_chip*,int,int) ;
 int FUNC_11 (struct nand_chip*,unsigned int,int) ;
 int FUNC_12 (struct nand_chip*,int const,int) ;
 int FUNC_13 (struct nand_chip*,unsigned int const,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct nand_chip *VAR_8, unsigned int VAR_9,
    int VAR_10, int VAR_11)
{
 struct mtd_info *VAR_12 = FUNC_1(VAR_8);
 int VAR_13 = VAR_5 | VAR_4;


 if (VAR_9 == 130) {
  int VAR_14;

  if (VAR_10 >= VAR_12->writesize) {

   VAR_10 -= VAR_12->writesize;
   VAR_14 = VAR_2;
  } else if (VAR_10 < 256) {

   VAR_14 = 133;
  } else {
   VAR_10 -= 256;
   VAR_14 = VAR_1;
  }
  VAR_8->legacy.cmd_ctrl(VAR_8, VAR_14, VAR_13);
  VAR_13 &= ~VAR_4;
 }
 if (VAR_9 != 135)
  VAR_8->legacy.cmd_ctrl(VAR_8, VAR_9, VAR_13);


 VAR_13 = VAR_3 | VAR_4;

 if (VAR_10 != -1) {

  if (VAR_8->options & VAR_0 &&
    !FUNC_0(VAR_9))
   VAR_10 >>= 1;
  VAR_8->legacy.cmd_ctrl(VAR_8, VAR_10, VAR_13);
  VAR_13 &= ~VAR_4;
 }
 if (VAR_11 != -1) {
  VAR_8->legacy.cmd_ctrl(VAR_8, VAR_11, VAR_13);
  VAR_13 &= ~VAR_4;
  VAR_8->legacy.cmd_ctrl(VAR_8, VAR_11 >> 8, VAR_13);
  if (VAR_8->options & VAR_7)
   VAR_8->legacy.cmd_ctrl(VAR_8, VAR_11 >> 16, VAR_13);
 }
 VAR_8->legacy.cmd_ctrl(VAR_8, 135,
         VAR_6 | VAR_4);





 switch (VAR_9) {

 case 135:
 case 134:
 case 137:
 case 136:
 case 130:
 case 128:
 case 132:
 case 129:
  return;

 case 131:
  if (VAR_8->legacy.dev_ready)
   break;
  FUNC_14(VAR_8->legacy.chip_delay);
  VAR_8->legacy.cmd_ctrl(VAR_8, 128,
          VAR_5 | VAR_4);
  VAR_8->legacy.cmd_ctrl(VAR_8, 135,
          VAR_6 | VAR_4);

  FUNC_3(VAR_8, 250);
  return;


 case 133:






  if (VAR_10 == -1 && VAR_11 == -1)
   return;


 default:




  if (!VAR_8->legacy.dev_ready) {
   FUNC_14(VAR_8->legacy.chip_delay);
   return;
  }
 }




 FUNC_4(100);

 FUNC_2(VAR_8);
}
