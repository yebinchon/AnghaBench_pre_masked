
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void const* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int *,int *,int,int ) ;
 int FUNC_2 (int *,int **) ;
 struct platform_device* FUNC_3 (struct device_node*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static const void *FUNC_5(struct device_node *VAR_4)
{
 int VAR_5;
 const void *VAR_6;
 u8 VAR_7[VAR_2];
 struct platform_device *VAR_8 = FUNC_3(VAR_4);

 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(&VAR_8->dev, &VAR_7);
 if (VAR_5) {
  FUNC_4(&VAR_8->dev);
  return FUNC_0(VAR_5);
 }

 VAR_6 = FUNC_1(&VAR_8->dev, VAR_7, VAR_2, VAR_3);
 FUNC_4(&VAR_8->dev);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 return VAR_6;
}
