
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_nand {int chip; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct tmio_nand* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,struct tmio_nand*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct tmio_nand *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->chip);
 FUNC_2(VAR_0, VAR_1);
 return 0;
}
