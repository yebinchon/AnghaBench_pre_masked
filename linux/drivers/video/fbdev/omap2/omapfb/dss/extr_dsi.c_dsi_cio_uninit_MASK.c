
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {int module_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct platform_device*,int ,int ,int,int) ;
 int FUNC_1 (struct platform_device*,int ) ;
 int FUNC_2 (struct platform_device*) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_3(VAR_2);


 FUNC_0(VAR_2, VAR_0, 0, 13, 13);

 FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2);
 FUNC_5(VAR_3->module_id, FUNC_4(VAR_2));
}
