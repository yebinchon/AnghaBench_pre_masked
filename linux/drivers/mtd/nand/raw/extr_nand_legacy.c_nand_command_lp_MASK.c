
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip_delay; int dev_ready; int (* cmd_ctrl ) (struct nand_chip*,unsigned int const,int) ;} ;
struct nand_chip {int options; TYPE_1__ legacy; } ;
struct mtd_info {scalar_t__ writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 unsigned int VAR_3 ;
 unsigned int const VAR_4 ;



 unsigned int const VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (unsigned int) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nand_chip*,unsigned int,int) ;
 int FUNC_7 (struct nand_chip*,unsigned int const,int) ;
 int FUNC_8 (struct nand_chip*,unsigned int const,int) ;
 int FUNC_9 (struct nand_chip*,unsigned int const,int) ;
 int FUNC_10 (struct nand_chip*,unsigned int const,int) ;
 int FUNC_11 (struct nand_chip*,int,int) ;
 int FUNC_12 (struct nand_chip*,int,int) ;
 int FUNC_13 (struct nand_chip*,int,int) ;
 int FUNC_14 (struct nand_chip*,int,int) ;
 int FUNC_15 (struct nand_chip*,int,int) ;
 int FUNC_16 (struct nand_chip*,unsigned int,int) ;
 int FUNC_17 (struct nand_chip*,int const,int) ;
 int FUNC_18 (struct nand_chip*,unsigned int const,int) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(struct nand_chip *VAR_9, unsigned int VAR_10,
       int VAR_11, int VAR_12)
{
 struct mtd_info *VAR_13 = FUNC_2(VAR_9);


 if (VAR_10 == VAR_3) {
  VAR_11 += VAR_13->writesize;
  VAR_10 = 135;
 }


 if (VAR_10 != 137)
  VAR_9->legacy.cmd_ctrl(VAR_9, VAR_10,
          VAR_7 | VAR_2 | VAR_6);

 if (VAR_11 != -1 || VAR_12 != -1) {
  int VAR_14 = VAR_6 | VAR_7 | VAR_0;


  if (VAR_11 != -1) {

   if (VAR_9->options & VAR_1 &&
     !FUNC_1(VAR_10))
    VAR_11 >>= 1;
   VAR_9->legacy.cmd_ctrl(VAR_9, VAR_11, VAR_14);
   VAR_14 &= ~VAR_6;


   if (!FUNC_1(VAR_10))
    VAR_9->legacy.cmd_ctrl(VAR_9, VAR_11 >> 8, VAR_14);
  }
  if (VAR_12 != -1) {
   VAR_9->legacy.cmd_ctrl(VAR_9, VAR_12, VAR_14);
   VAR_9->legacy.cmd_ctrl(VAR_9, VAR_12 >> 8,
          VAR_7 | VAR_0);
   if (VAR_9->options & VAR_8)
    VAR_9->legacy.cmd_ctrl(VAR_9, VAR_12 >> 16,
            VAR_7 | VAR_0);
  }
 }
 VAR_9->legacy.cmd_ctrl(VAR_9, 137,
         VAR_7 | VAR_6);





 switch (VAR_10) {

 case 137:
 case 140:
 case 136:
 case 139:
 case 138:
 case 130:
 case 128:
 case 134:
 case 129:
  return;

 case 132:
  FUNC_0(VAR_9);
  return;

 case 133:
  if (VAR_9->legacy.dev_ready)
   break;
  FUNC_19(VAR_9->legacy.chip_delay);
  VAR_9->legacy.cmd_ctrl(VAR_9, 128,
          VAR_7 | VAR_2 | VAR_6);
  VAR_9->legacy.cmd_ctrl(VAR_9, 137,
          VAR_7 | VAR_6);

  FUNC_4(VAR_9, 250);
  return;

 case 131:

  VAR_9->legacy.cmd_ctrl(VAR_9, VAR_5,
          VAR_7 | VAR_2 | VAR_6);
  VAR_9->legacy.cmd_ctrl(VAR_9, 137,
          VAR_7 | VAR_6);

  FUNC_0(VAR_9);
  return;

 case 135:






  if (VAR_11 == -1 && VAR_12 == -1)
   return;

  VAR_9->legacy.cmd_ctrl(VAR_9, VAR_4,
          VAR_7 | VAR_2 | VAR_6);
  VAR_9->legacy.cmd_ctrl(VAR_9, 137,
          VAR_7 | VAR_6);


 default:




  if (!VAR_9->legacy.dev_ready) {
   FUNC_19(VAR_9->legacy.chip_delay);
   return;
  }
 }





 FUNC_5(100);

 FUNC_3(VAR_9);
}
