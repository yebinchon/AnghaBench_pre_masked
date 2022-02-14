
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_device {int dev; } ;
struct dell_wmi_priv {int input_dev; } ;


 struct dell_wmi_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wmi_device *VAR_0)
{
 struct dell_wmi_priv *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1->input_dev);
}
