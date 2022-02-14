
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kempld_platform_data {int (* get_info ) (struct kempld_device_data*) ;} ;
struct TYPE_2__ {int major; int minor; int buildnr; int number; int version; } ;
struct kempld_device_data {TYPE_1__ info; int dev; } ;


 struct kempld_platform_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,int ,char,char,int ) ;
 int FUNC_2 (struct kempld_device_data*) ;

__attribute__((used)) static int FUNC_3(struct kempld_device_data *VAR_0)
{
 int VAR_1;
 const struct kempld_platform_data *VAR_2 = FUNC_0(VAR_0->dev);
 char VAR_3, VAR_4;

 VAR_1 = VAR_2->get_info(VAR_0);
 if (VAR_1)
  return VAR_1;
 if (VAR_0->info.major < 10)
  VAR_3 = VAR_0->info.major + '0';
 else
  VAR_3 = (VAR_0->info.major - 10) + 'A';
 if (VAR_0->info.minor < 10)
  VAR_4 = VAR_0->info.minor + '0';
 else
  VAR_4 = (VAR_0->info.minor - 10) + 'A';

 VAR_1 = FUNC_1(VAR_0->info.version, sizeof(VAR_0->info.version),
   "P%X%c%c.%04X", VAR_0->info.number, VAR_3, VAR_4,
   VAR_0->info.buildnr);
 if (VAR_1 < 0)
  return VAR_1;

 return 0;
}
