
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_device {int dev; } ;
struct huawei_wmi_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct huawei_wmi_priv*) ;
 struct huawei_wmi_priv* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct wmi_device*) ;
 int FUNC_3 (struct wmi_device*) ;

__attribute__((used)) static int FUNC_4(struct wmi_device *VAR_2, const void *VAR_3)
{
 struct huawei_wmi_priv *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(&VAR_2->dev, sizeof(struct huawei_wmi_priv), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_2->dev, VAR_4);

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return VAR_5;

 return FUNC_3(VAR_2);
}
