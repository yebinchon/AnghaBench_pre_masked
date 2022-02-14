
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {int id; int dev; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 struct device* FUNC_5 (int ,int *,int ,struct nvdimm_bus*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_6(struct nvdimm_bus *VAR_2)
{
 dev_t VAR_3 = FUNC_1(VAR_1, VAR_2->id);
 struct device *VAR_4;

 VAR_4 = FUNC_5(VAR_0, &VAR_2->dev, VAR_3, VAR_2,
   "ndctl%d", VAR_2->id);

 if (FUNC_0(VAR_4))
  FUNC_4(&VAR_2->dev, "failed to register ndctl%d: %ld\n",
    VAR_2->id, FUNC_2(VAR_4));
 return FUNC_3(VAR_4);
}
