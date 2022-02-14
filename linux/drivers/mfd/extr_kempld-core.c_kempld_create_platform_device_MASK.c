
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kempld_platform_data {int ioresource; } ;
struct dmi_system_id {struct kempld_platform_data* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct kempld_platform_data const*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct dmi_system_id *VAR_2)
{
 const struct kempld_platform_data *VAR_3 = VAR_2->driver_data;
 int VAR_4;

 VAR_1 = FUNC_3("kempld", -1);
 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_3, sizeof(*VAR_3));
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_2(VAR_1, VAR_3->ioresource, 1);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_4(VAR_1);
 return VAR_4;
}
