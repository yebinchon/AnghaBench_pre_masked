
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_st_plat_data {int nshutdown_gpio; } ;
struct TYPE_2__ {int kobj; struct ti_st_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct kim_data_s {int core_data; int * kim_pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kim_data_s*) ;
 int VAR_0 ;
 struct kim_data_s* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{

 struct ti_st_plat_data *VAR_3 = VAR_2->dev.platform_data;
 struct kim_data_s *VAR_4;

 VAR_4 = FUNC_3(VAR_2);




 FUNC_1(VAR_3->nshutdown_gpio);
 FUNC_4("nshutdown GPIO Freed");

 FUNC_0(VAR_0);
 FUNC_6(&VAR_2->dev.kobj, &VAR_1);
 FUNC_4("sysfs entries removed");

 VAR_4->kim_pdev = ((void*)0);
 FUNC_5(VAR_4->core_data);

 FUNC_2(VAR_4);
 VAR_4 = ((void*)0);
 return 0;
}
