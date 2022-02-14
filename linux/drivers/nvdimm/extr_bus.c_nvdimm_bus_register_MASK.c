
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nvdimm_bus_descriptor {int of_node; int attr_groups; } ;
struct TYPE_5__ {int of_node; int * bus; int groups; int release; struct device* parent; } ;
struct nvdimm_bus {scalar_t__ id; TYPE_1__ dev; struct nvdimm_bus_descriptor* nd_desc; int badrange; int reconfig_mutex; int wait; int mapping_list; int list; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nvdimm_bus*) ;
 struct nvdimm_bus* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (TYPE_1__*) ;

struct nvdimm_bus *FUNC_11(struct device *VAR_4,
  struct nvdimm_bus_descriptor *VAR_5)
{
 struct nvdimm_bus *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 FUNC_0(&VAR_6->list);
 FUNC_0(&VAR_6->mapping_list);
 FUNC_6(&VAR_6->wait);
 VAR_6->id = FUNC_5(&VAR_1, 0, 0, VAR_0);
 if (VAR_6->id < 0) {
  FUNC_7(VAR_6);
  return ((void*)0);
 }
 FUNC_9(&VAR_6->reconfig_mutex);
 FUNC_1(&VAR_6->badrange);
 VAR_6->nd_desc = VAR_5;
 VAR_6->dev.parent = VAR_4;
 VAR_6->dev.release = VAR_2;
 VAR_6->dev.groups = VAR_5->attr_groups;
 VAR_6->dev.bus = &VAR_3;
 VAR_6->dev.of_node = VAR_5->of_node;
 FUNC_3(&VAR_6->dev, "ndbus%d", VAR_6->id);
 VAR_7 = FUNC_4(&VAR_6->dev);
 if (VAR_7) {
  FUNC_2(&VAR_6->dev, "registration failed: %d\n", VAR_7);
  goto err;
 }

 return VAR_6;
 err:
 FUNC_10(&VAR_6->dev);
 return ((void*)0);
}
