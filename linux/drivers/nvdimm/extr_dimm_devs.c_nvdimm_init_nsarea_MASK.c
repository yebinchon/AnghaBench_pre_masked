
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_cmd_get_config_size {scalar_t__ config_size; } ;
struct nvdimm_drvdata {int dev; struct nd_cmd_get_config_size nsarea; } ;
struct nvdimm_bus_descriptor {int (* ndctl ) (struct nvdimm_bus_descriptor*,int ,int ,struct nd_cmd_get_config_size*,int,int*) ;} ;
struct nvdimm_bus {struct nvdimm_bus_descriptor* nd_desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct nd_cmd_get_config_size*,int ,int) ;
 int FUNC_1 (struct nvdimm_bus_descriptor*,int ,int ,struct nd_cmd_get_config_size*,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvdimm_drvdata*) ;
 struct nvdimm_bus* FUNC_4 (int ) ;

int FUNC_5(struct nvdimm_drvdata *VAR_1)
{
 struct nd_cmd_get_config_size *VAR_2 = &VAR_1->nsarea;
 struct nvdimm_bus *VAR_3 = FUNC_4(VAR_1->dev);
 struct nvdimm_bus_descriptor *VAR_4;
 int VAR_5 = FUNC_3(VAR_1);
 int VAR_6 = 0;

 if (VAR_5)
  return VAR_5;

 if (VAR_2->config_size)
  return 0;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_4 = VAR_3->nd_desc;
 VAR_5 = VAR_4->ndctl(VAR_4, FUNC_2(VAR_1->dev),
   VAR_0, VAR_2, sizeof(*VAR_2), &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;
 return VAR_6;
}
