
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resources_ispif {int dummy; } ;
struct resources {int dummy; } ;
struct camss {scalar_t__ version; unsigned int csiphy_num; unsigned int csid_num; unsigned int vfe_num; int dev; int * vfe; int ispif; int * csid; int * csiphy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct resources* VAR_3 ;
 struct resources* VAR_4 ;
 struct resources* VAR_5 ;
 struct resources* VAR_6 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 struct resources_ispif VAR_7 ;
 struct resources_ispif VAR_8 ;
 int FUNC_1 (struct camss*,int *,struct resources const*,unsigned int) ;
 int FUNC_2 (struct camss*,int *,struct resources const*,unsigned int) ;
 int FUNC_3 (int *,struct resources_ispif const*) ;
 int FUNC_4 (struct camss*,int *,struct resources const*,unsigned int) ;
 struct resources* VAR_9 ;
 struct resources* VAR_10 ;

__attribute__((used)) static int FUNC_5(struct camss *VAR_11)
{
 const struct resources *VAR_12;
 const struct resources *VAR_13;
 const struct resources_ispif *VAR_14;
 const struct resources *VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 if (VAR_11->version == VAR_0) {
  VAR_12 = VAR_5;
  VAR_13 = VAR_3;
  VAR_14 = &VAR_7;
  VAR_15 = VAR_9;
 } else if (VAR_11->version == VAR_1) {
  VAR_12 = VAR_6;
  VAR_13 = VAR_4;
  VAR_14 = &VAR_8;
  VAR_15 = VAR_10;
 } else {
  return -VAR_2;
 }

 for (VAR_16 = 0; VAR_16 < VAR_11->csiphy_num; VAR_16++) {
  VAR_17 = FUNC_2(VAR_11, &VAR_11->csiphy[VAR_16],
          &VAR_12[VAR_16], VAR_16);
  if (VAR_17 < 0) {
   FUNC_0(VAR_11->dev,
    "Failed to init csiphy%d sub-device: %d\n",
    VAR_16, VAR_17);
   return VAR_17;
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_11->csid_num; VAR_16++) {
  VAR_17 = FUNC_1(VAR_11, &VAR_11->csid[VAR_16],
        &VAR_13[VAR_16], VAR_16);
  if (VAR_17 < 0) {
   FUNC_0(VAR_11->dev,
    "Failed to init csid%d sub-device: %d\n",
    VAR_16, VAR_17);
   return VAR_17;
  }
 }

 VAR_17 = FUNC_3(&VAR_11->ispif, VAR_14);
 if (VAR_17 < 0) {
  FUNC_0(VAR_11->dev, "Failed to init ispif sub-device: %d\n",
   VAR_17);
  return VAR_17;
 }

 for (VAR_16 = 0; VAR_16 < VAR_11->vfe_num; VAR_16++) {
  VAR_17 = FUNC_4(VAR_11, &VAR_11->vfe[VAR_16],
       &VAR_15[VAR_16], VAR_16);
  if (VAR_17 < 0) {
   FUNC_0(VAR_11->dev,
    "Fail to init vfe%d sub-device: %d\n", VAR_16, VAR_17);
   return VAR_17;
  }
 }

 return 0;
}
