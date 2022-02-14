
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct nvdimm_bus_descriptor {char* provider_name; int module; int attr_groups; } ;
struct nvdimm_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct nvdimm_bus* FUNC_1 (struct device*,struct nvdimm_bus_descriptor*) ;
 int FUNC_2 (struct nvdimm_bus*) ;
 int FUNC_3 (struct platform_device*,struct nvdimm_bus*) ;
 int FUNC_4 (int ,int ,int ,int,struct nvdimm_bus*,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_6)
{
 static struct nvdimm_bus_descriptor VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct nvdimm_bus *VAR_9;
 int VAR_10 = -VAR_0;

 VAR_7.attr_groups = VAR_4;
 VAR_7.provider_name = "e820";
 VAR_7.module = VAR_3;
 VAR_9 = FUNC_1(VAR_8, &VAR_7);
 if (!VAR_9)
  goto err;
 FUNC_3(VAR_6, VAR_9);

 VAR_10 = FUNC_4(VAR_2,
   VAR_1, 0, -1, VAR_9, VAR_5);
 if (VAR_10)
  goto err;
 return 0;
err:
 FUNC_2(VAR_9);
 FUNC_0(VAR_8, "failed to register legacy persistent memory ranges\n");
 return VAR_10;
}
