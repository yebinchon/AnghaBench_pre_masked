
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct nvdimm_drvdata {int dev; } ;
struct nd_region {int dev; struct nd_interleave_set* nd_set; struct nd_mapping* mapping; } ;
struct nd_namespace_label {scalar_t__ isetcookie; scalar_t__ lbasize; char* uuid; scalar_t__ dpa; int name; int abstraction_guid; int type_guid; } ;
struct device {int * parent; int * type; } ;
struct TYPE_2__ {int claim_class; struct device dev; } ;
struct nd_namespace_blk {int id; void* alt_name; void* uuid; TYPE_1__ common; int * lbasize; } ;
struct nd_mapping {int dummy; } ;
struct nd_interleave_set {int * cookie2; int type_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (char*,int,int ) ;
 struct nd_namespace_blk* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int ,int) ;
 int VAR_7 ;
 int FUNC_8 (struct device*) ;
 scalar_t__ FUNC_9 (struct nvdimm_drvdata*,int ) ;
 int FUNC_10 (struct nd_region*,struct nvdimm_drvdata*,struct resource*,char*,int) ;
 struct resource* FUNC_11 (struct nd_region*,struct nvdimm_drvdata*,struct nd_namespace_blk*,int *) ;
 struct nvdimm_drvdata* FUNC_12 (struct nd_mapping*) ;
 int FUNC_13 (int *) ;
 int VAR_8 ;

__attribute__((used)) static struct device *FUNC_14(struct nd_region *VAR_9,
  struct nd_namespace_label *VAR_10, int VAR_11)
{

 struct nd_mapping *VAR_12 = &VAR_9->mapping[0];
 struct nd_interleave_set *VAR_13 = VAR_9->nd_set;
 struct nvdimm_drvdata *VAR_14 = FUNC_12(VAR_12);
 struct nd_namespace_blk *VAR_15;
 char VAR_16[VAR_4];
 struct device *VAR_17 = ((void*)0);
 struct resource *VAR_18;

 if (FUNC_9(VAR_14, VAR_8)) {
  if (!FUNC_4(&VAR_13->type_guid, &VAR_10->type_guid)) {
   FUNC_3(VAR_14->dev, "expect type_guid %pUb got %pUb\n",
     &VAR_13->type_guid,
     &VAR_10->type_guid);
   return FUNC_0(-VAR_0);
  }

  if (VAR_10->isetcookie != FUNC_1(VAR_13->cookie2)) {
   FUNC_3(VAR_14->dev, "expect cookie %#llx got %#llx\n",
     VAR_13->cookie2,
     FUNC_2(VAR_10->isetcookie));
   return FUNC_0(-VAR_0);
  }
 }

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return FUNC_0(-VAR_1);
 VAR_17 = &VAR_15->common.dev;
 VAR_17->type = &VAR_7;
 VAR_17->parent = &VAR_9->dev;
 VAR_15->id = -1;
 VAR_15->lbasize = FUNC_2(VAR_10->lbasize);
 VAR_15->uuid = FUNC_5(VAR_10->uuid, VAR_5,
   VAR_3);
 if (FUNC_9(VAR_14, VAR_6))
  VAR_15->common.claim_class
   = FUNC_13(&VAR_10->abstraction_guid);
 if (!VAR_15->uuid)
  goto blk_err;
 FUNC_7(VAR_16, VAR_10->name, VAR_4);
 if (VAR_16[0]) {
  VAR_15->alt_name = FUNC_5(VAR_16, VAR_4,
    VAR_3);
  if (!VAR_15->alt_name)
   goto blk_err;
 }
 VAR_18 = FUNC_11(VAR_9, VAR_14, VAR_15,
   FUNC_2(VAR_10->dpa));
 if (!VAR_18)
  goto blk_err;
 FUNC_10(VAR_9, VAR_14, VAR_18, "%d: assign\n", VAR_11);
 return VAR_17;
 blk_err:
 FUNC_8(VAR_17);
 return FUNC_0(-VAR_2);
}
