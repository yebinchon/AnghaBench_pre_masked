
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct visor_device {struct device device; } ;
struct visor_busdev {int dev_no; int bus_no; } ;


 struct device* FUNC_0 (int *,struct device*,void*,int ) ;
 int VAR_0 ;
 struct visor_device* FUNC_1 (struct device*) ;
 int VAR_1 ;

struct visor_device *FUNC_2(u32 VAR_2, u32 VAR_3,
            struct visor_device *VAR_4)
{
 struct device *VAR_5;
 struct device *VAR_6 = ((void*)0);
 struct visor_busdev VAR_7 = {
  .bus_no = VAR_2,
  .dev_no = VAR_3
 };

 if (VAR_4)
  VAR_6 = &VAR_4->device;
 VAR_5 = FUNC_0(&VAR_1, VAR_6, (void *)&VAR_7,
         VAR_0);
 if (!VAR_5)
  return ((void*)0);
 return FUNC_1(VAR_5);
}
