
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dmi_system_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (char*,int) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(const struct dmi_system_id *VAR_1)
{
 struct platform_device *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1("tqmx86", -1);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  FUNC_2(VAR_2);

 return VAR_3;
}
