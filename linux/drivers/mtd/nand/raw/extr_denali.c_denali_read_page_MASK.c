
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int writesize; } ;
struct denali_controller {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*,int *,unsigned long,int) ;
 int FUNC_1 (struct nand_chip*,unsigned long*) ;
 int FUNC_2 (struct nand_chip*,int *,int ,int,int) ;
 int FUNC_3 (struct nand_chip*,int) ;
 int FUNC_4 (struct nand_chip*,unsigned long*,int *) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 struct denali_controller* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_2, u8 *VAR_3,
       int VAR_4, int VAR_5)
{
 struct denali_controller *VAR_6 = FUNC_6(VAR_2);
 struct mtd_info *VAR_7 = FUNC_5(VAR_2);
 unsigned long VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_7->writesize, VAR_5, 0);
 if (VAR_10 && VAR_10 != -VAR_1)
  return VAR_10;

 if (VAR_6->caps & VAR_0)
  VAR_9 = FUNC_1(VAR_2, &VAR_8);
 else if (VAR_10 == -VAR_1)
  VAR_9 = FUNC_4(VAR_2, &VAR_8, VAR_3);

 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8) {
  VAR_10 = FUNC_3(VAR_2, VAR_5);
  if (VAR_10)
   return VAR_10;

  VAR_9 = FUNC_0(VAR_2, VAR_3,
      VAR_8, VAR_9);
 }

 return VAR_9;
}
