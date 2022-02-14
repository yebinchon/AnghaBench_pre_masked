
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharpsl_nand {int io; int chip; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sharpsl_nand*) ;
 int FUNC_2 (int *) ;
 struct sharpsl_nand* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct sharpsl_nand *VAR_1 = FUNC_3(VAR_0);


 FUNC_2(&VAR_1->chip);

 FUNC_0(VAR_1->io);


 FUNC_1(VAR_1);

 return 0;
}
