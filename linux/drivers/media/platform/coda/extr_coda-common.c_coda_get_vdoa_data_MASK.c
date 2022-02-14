
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdoa_data {int dummy; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct vdoa_data* FUNC_0 (int ) ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct vdoa_data* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static struct vdoa_data *FUNC_5(void)
{
 struct device_node *VAR_1;
 struct platform_device *VAR_2;
 struct vdoa_data *VAR_3 = ((void*)0);

 VAR_1 = FUNC_1(((void*)0), ((void*)0), "fsl,imx6q-vdoa");
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  goto out;

 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_0(-VAR_0);

out:
 FUNC_3(VAR_1);

 return VAR_3;
}
