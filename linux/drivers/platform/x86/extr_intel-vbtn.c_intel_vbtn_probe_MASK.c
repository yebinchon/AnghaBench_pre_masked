
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct intel_vbtn_priv {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int *,int *) ;
 int FUNC_4 (int ,int ,int ,struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *,struct intel_vbtn_priv*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int) ;
 struct intel_vbtn_priv* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (struct platform_device*) ;
 int VAR_5 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 acpi_handle VAR_7 = FUNC_1(&VAR_6->dev);
 struct intel_vbtn_priv *VAR_8;
 acpi_status VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_7, "VBDL", ((void*)0), ((void*)0));
 if (FUNC_0(VAR_9)) {
  FUNC_7(&VAR_6->dev, "failed to read Intel Virtual Button driver\n");
  return -VAR_2;
 }

 VAR_8 = FUNC_9(&VAR_6->dev, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_3;
 FUNC_6(&VAR_6->dev, VAR_8);

 VAR_10 = FUNC_10(VAR_6);
 if (VAR_10) {
  FUNC_11("Failed to setup Intel Virtual Button\n");
  return VAR_10;
 }

 FUNC_5(VAR_6);

 VAR_9 = FUNC_4(VAR_7,
          VAR_0,
          VAR_5,
          VAR_6);
 if (FUNC_0(VAR_9))
  return -VAR_1;

 FUNC_8(&VAR_6->dev, 1);





 FUNC_2();
 return 0;
}
