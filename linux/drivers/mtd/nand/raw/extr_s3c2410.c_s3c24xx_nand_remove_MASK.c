
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_mtd {int chip; } ;
struct s3c2410_nand_info {int mtd_count; int clk; struct s3c2410_nand_mtd* mtds; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,struct s3c2410_nand_mtd*) ;
 int FUNC_3 (struct s3c2410_nand_info*,int ) ;
 int FUNC_4 (struct s3c2410_nand_info*) ;
 struct s3c2410_nand_info* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct s3c2410_nand_info *VAR_2 = FUNC_5(VAR_1);

 if (VAR_2 == ((void*)0))
  return 0;

 FUNC_4(VAR_2);





 if (VAR_2->mtds != ((void*)0)) {
  struct s3c2410_nand_mtd *VAR_3 = VAR_2->mtds;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_2->mtd_count; VAR_4++, VAR_3++) {
   FUNC_2("releasing mtd %d (%p)\n", VAR_4, VAR_3);
   FUNC_1(&VAR_3->chip);
  }
 }



 if (!FUNC_0(VAR_2->clk))
  FUNC_3(VAR_2, VAR_0);

 return 0;
}
