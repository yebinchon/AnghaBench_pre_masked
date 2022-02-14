
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dmi_system_id {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dmi_system_id* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_6)
{
 int VAR_7;
 const struct dmi_system_id *VAR_8 =
  FUNC_0(VAR_5);

 if (!VAR_8)
  return -VAR_1;

 VAR_4 = FUNC_1(VAR_2, &VAR_6->dev,
     VAR_3,
     VAR_8->driver_data, ((void*)0));
 if (!VAR_4)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  goto fail;

 return 0;

fail:
 FUNC_2(VAR_4);
 return VAR_7;
}
