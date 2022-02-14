
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {int dev; } ;
struct nvdimm {int dummy; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct nvdimm*,int ) ;
 int FUNC_1 (struct nvdimm_bus*,struct nd_mapping*) ;

__attribute__((used)) static int FUNC_2(struct nvdimm_bus *VAR_1,
  struct nd_mapping *VAR_2)
{
 struct nvdimm *VAR_3 = VAR_2->nvdimm;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_1->dev, VAR_3,
   VAR_0);
 if (VAR_4)
  FUNC_1(VAR_1, VAR_2);
 return VAR_4;
}
