
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* block_markbad ) (struct nand_chip*,unsigned int) ;} ;
struct nand_chip {unsigned int chip_shift; unsigned int phys_erase_shift; unsigned int page_shift; TYPE_1__ legacy; int base; } ;
struct mtd_info {int writesize; } ;
struct gpmi_nand_data {struct nand_chip nand; struct device* dev; } ;
struct device {int dummy; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 scalar_t__ FUNC_2 (struct gpmi_nand_data*) ;
 int FUNC_3 (struct gpmi_nand_data*) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int,int ,int*,int) ;
 int FUNC_6 (struct nand_chip*,int) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 unsigned int FUNC_8 (int *) ;
 int FUNC_9 (struct nand_chip*,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct gpmi_nand_data *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 struct nand_chip *VAR_2 = &VAR_0->nand;
 struct mtd_info *VAR_3 = FUNC_7(VAR_2);
 unsigned int VAR_4;
 unsigned int VAR_5;
 int VAR_6;
 int VAR_7;
 loff_t VAR_8;
 uint8_t VAR_9;
 int VAR_10 = 0;







 if (FUNC_2(VAR_0))
  return 0;





 FUNC_0(VAR_1, "Transcribing bad block marks...\n");


 VAR_4 = FUNC_8(&VAR_2->base);





 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {




  VAR_6 = VAR_5 >> (VAR_2->chip_shift - VAR_2->phys_erase_shift);
  VAR_7 = VAR_5 << (VAR_2->phys_erase_shift - VAR_2->page_shift);
  VAR_8 = VAR_5 << VAR_2->phys_erase_shift;


  FUNC_6(VAR_2, VAR_6);
  VAR_10 = FUNC_5(VAR_2, VAR_7, VAR_3->writesize, &VAR_9,
     1);
  FUNC_4(VAR_2);

  if (VAR_10)
   continue;






  if (VAR_9 != 0xff) {
   FUNC_0(VAR_1, "Transcribing mark in block %u\n", VAR_5);
   VAR_10 = VAR_2->legacy.block_markbad(VAR_2, VAR_8);
   if (VAR_10)
    FUNC_1(VAR_1,
     "Failed to mark block bad with ret %d\n",
     VAR_10);
  }
 }


 FUNC_3(VAR_0);
 return 0;
}
