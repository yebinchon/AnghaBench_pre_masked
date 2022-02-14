
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int num_resources; char* resource; int dev; int name; } ;
struct TYPE_2__ {struct device_node* of_node; int module; int provider_name; int attr_groups; } ;
struct of_pmem_private {TYPE_1__ bus_desc; struct nvdimm_bus* bus; } ;
struct nvdimm_bus {int dummy; } ;
struct nd_region_desc {char* res; int flags; struct device_node* of_node; int numa_node; int target_node; int attr_groups; } ;
struct nd_region {int dummy; } ;
struct device_node {int dummy; } ;
typedef int ndr_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,char*,struct device_node*) ;
 struct device_node* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*,struct device_node*) ;
 int FUNC_4 (struct of_pmem_private*) ;
 int FUNC_5 (int ,int ) ;
 struct of_pmem_private* FUNC_6 (int,int ) ;
 int FUNC_7 (struct nd_region_desc*,int ,int) ;
 struct nvdimm_bus* FUNC_8 (int *,TYPE_1__*) ;
 struct nd_region* FUNC_9 (struct nvdimm_bus*,struct nd_region_desc*) ;
 struct nd_region* FUNC_10 (struct nvdimm_bus*,struct nd_region_desc*) ;
 int FUNC_11 (struct device_node*,char*,int *) ;
 int FUNC_12 (struct platform_device*,struct of_pmem_private*) ;
 int VAR_7 ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct of_pmem_private *VAR_9;
 struct device_node *VAR_10;
 struct nvdimm_bus *VAR_11;
 bool VAR_12;
 int VAR_13;

 VAR_10 = FUNC_1(&VAR_8->dev);
 if (!VAR_10)
  return -VAR_2;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->bus_desc.attr_groups = VAR_6;
 VAR_9->bus_desc.provider_name = FUNC_5(VAR_8->name, VAR_3);
 VAR_9->bus_desc.module = VAR_5;
 VAR_9->bus_desc.of_node = VAR_10;

 VAR_9->bus = VAR_11 = FUNC_8(&VAR_8->dev, &VAR_9->bus_desc);
 if (!VAR_11) {
  FUNC_4(VAR_9);
  return -VAR_0;
 }
 FUNC_12(VAR_8, VAR_9);

 VAR_12 = !!FUNC_11(VAR_10, "volatile", ((void*)0));
 FUNC_0(&VAR_8->dev, "Registering %s regions from %pOF\n",
   VAR_12 ? "volatile" : "non-volatile", VAR_10);

 for (VAR_13 = 0; VAR_13 < VAR_8->num_resources; VAR_13++) {
  struct nd_region_desc VAR_14;
  struct nd_region *VAR_15;





  FUNC_7(&VAR_14, 0, sizeof(VAR_14));
  VAR_14.attr_groups = VAR_7;
  VAR_14.numa_node = FUNC_2(&VAR_8->dev);
  VAR_14.target_node = VAR_14.numa_node;
  VAR_14.res = &VAR_8->resource[VAR_13];
  VAR_14.of_node = VAR_10;
  FUNC_13(VAR_4, &VAR_14.flags);

  if (VAR_12)
   VAR_15 = FUNC_10(VAR_11, &VAR_14);
  else
   VAR_15 = FUNC_9(VAR_11, &VAR_14);

  if (!VAR_15)
   FUNC_3(&VAR_8->dev, "Unable to register region %pR from %pOF\n",
     VAR_14.res, VAR_10);
  else
   FUNC_0(&VAR_8->dev, "Registered region %pR from %pOF\n",
     VAR_14.res, VAR_10);
 }

 return 0;
}
