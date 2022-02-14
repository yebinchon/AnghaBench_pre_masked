
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {int dummy; } ;
struct platform_device {int dummy; } ;
struct kim_data_s {struct st_data_s* core_data; } ;


 struct kim_data_s* FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (int) ;

void FUNC_2(struct st_data_s **VAR_0, int VAR_1)
{
 struct platform_device *VAR_2;
 struct kim_data_s *VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  goto err;
 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  goto err;

 *VAR_0 = VAR_3->core_data;
 return;
err:
 *VAR_0 = ((void*)0);
}
