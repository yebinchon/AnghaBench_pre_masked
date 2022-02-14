
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_dev {int regbase; int lock; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct pmc_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct pmc_dev*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct pmc_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_1);
 FUNC_3(VAR_0, ((void*)0));
 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1->regbase);
 return 0;
}
