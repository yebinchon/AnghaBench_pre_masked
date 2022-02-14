
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_device {int dev; } ;
struct dell_wmi_priv {int interface_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wmi_device*) ;
 int FUNC_3 (int *,struct dell_wmi_priv*) ;
 struct dell_wmi_priv* FUNC_4 (int *,int,int ) ;

__attribute__((used)) static int FUNC_5(struct wmi_device *VAR_3, const void *VAR_4)
{
 struct dell_wmi_priv *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0();
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_4(
  &VAR_3->dev, sizeof(struct dell_wmi_priv), VAR_2);
 if (!VAR_5)
  return -VAR_0;
 FUNC_3(&VAR_3->dev, VAR_5);

 if (!FUNC_1(&VAR_5->interface_version))
  return -VAR_1;

 return FUNC_2(VAR_3);
}
