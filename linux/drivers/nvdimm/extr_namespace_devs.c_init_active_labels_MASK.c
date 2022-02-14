
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvdimm_drvdata {int dev; } ;
struct nvdimm {int flags; int busy; int dev; } ;
struct nd_region {int ndr_mappings; int dev; struct nd_mapping* mapping; } ;
struct nd_namespace_label {int flags; } ;
struct nd_mapping {int lock; int labels; struct nvdimm_drvdata* ndd; struct nvdimm* nvdimm; } ;
struct nd_label_ent {int list; struct nd_namespace_label* label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nd_region*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,char*,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int (*) (struct nd_region*),struct nd_region*) ;
 int FUNC_8 (struct nvdimm_drvdata*) ;
 struct nd_label_ent* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct nd_namespace_label* FUNC_13 (struct nvdimm_drvdata*,int) ;
 int FUNC_14 (struct nvdimm_drvdata*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 struct nvdimm_drvdata* FUNC_16 (struct nd_mapping*) ;

__attribute__((used)) static int FUNC_17(struct nd_region *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_7->ndr_mappings; VAR_8++) {
  struct nd_mapping *VAR_9 = &VAR_7->mapping[VAR_8];
  struct nvdimm_drvdata *VAR_10 = FUNC_16(VAR_9);
  struct nvdimm *VAR_11 = VAR_9->nvdimm;
  struct nd_label_ent *VAR_12;
  int VAR_13, VAR_14;





  if (!VAR_10) {
   if (FUNC_15(VAR_4, &VAR_11->flags))
                                            ;
   else if (FUNC_15(VAR_3, &VAR_11->flags))
                                                 ;
   else
    return 0;

   FUNC_5(&VAR_7->dev, "%s: is %s, failing probe\n",
     FUNC_6(&VAR_9->nvdimm->dev),
     FUNC_15(VAR_4, &VAR_11->flags)
     ? "locked" : "disabled");
   return -VAR_1;
  }
  VAR_9->ndd = VAR_10;
  FUNC_2(&VAR_11->busy);
  FUNC_8(VAR_10);

  VAR_13 = FUNC_14(VAR_10);
  FUNC_4(VAR_10->dev, "count: %d\n", VAR_13);
  if (!VAR_13)
   continue;
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   struct nd_namespace_label *VAR_15;

   VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_2);
   if (!VAR_12)
    break;
   VAR_15 = FUNC_13(VAR_10, VAR_14);
   if (FUNC_15(VAR_5, &VAR_11->flags)) {
    u32 VAR_16 = FUNC_1(VAR_15->flags);

    VAR_16 &= ~VAR_6;
    VAR_15->flags = FUNC_0(VAR_16);
   }
   VAR_12->label = VAR_15;

   FUNC_11(&VAR_9->lock);
   FUNC_10(&VAR_12->list, &VAR_9->labels);
   FUNC_12(&VAR_9->lock);
  }

  if (VAR_14 < VAR_13)
   break;
 }

 if (VAR_8 < VAR_7->ndr_mappings) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 return FUNC_7(&VAR_7->dev, FUNC_3,
   VAR_7);
}
