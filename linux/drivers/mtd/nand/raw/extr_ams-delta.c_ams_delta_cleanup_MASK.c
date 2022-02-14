
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mtd_info {int dummy; } ;
struct ams_delta_nand {int nand_chip; } ;


 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int ) ;
 struct mtd_info* FUNC_2 (int *) ;
 struct ams_delta_nand* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ams_delta_nand *VAR_1 = FUNC_3(VAR_0);
 struct mtd_info *VAR_2 = FUNC_2(&VAR_1->nand_chip);


 FUNC_1(FUNC_0(VAR_2));

 return 0;
}
