
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_driver {int (* remove ) (struct mmc_card*) ;} ;
struct mmc_card {int dummy; } ;
struct device {int driver; } ;


 struct mmc_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mmc_card*) ;
 struct mmc_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct mmc_driver *VAR_1 = FUNC_2(VAR_0->driver);
 struct mmc_card *VAR_2 = FUNC_0(VAR_0);

 VAR_1->remove(VAR_2);

 return 0;
}
