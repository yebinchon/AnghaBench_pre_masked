
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int enable_mask; } ;
struct xgene_pmu_dev_ctx {int name; struct xgene_pmu_dev* pmu_dev; TYPE_1__ inf; } ;
struct xgene_pmu_dev {int attr_groups; TYPE_1__* inf; struct xgene_pmu* parent; } ;
struct xgene_pmu {int l3c_active_mask; int mcb_active_mask; int mc_active_mask; int version; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 struct xgene_pmu_dev* FUNC_2 (struct device*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct xgene_pmu_dev*,int ) ;

__attribute__((used)) static int
FUNC_4(struct xgene_pmu *VAR_14, struct xgene_pmu_dev_ctx *VAR_15)
{
 struct device *VAR_16 = VAR_14->dev;
 struct xgene_pmu_dev *VAR_17;

 VAR_17 = FUNC_2(VAR_16, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;
 VAR_17->parent = VAR_14;
 VAR_17->inf = &VAR_15->inf;
 VAR_15->pmu_dev = VAR_17;

 switch (VAR_17->inf->type) {
 case 130:
  if (!(VAR_14->l3c_active_mask & VAR_17->inf->enable_mask))
   return -VAR_1;
  if (VAR_14->version == VAR_4)
   VAR_17->attr_groups = VAR_9;
  else
   VAR_17->attr_groups = VAR_8;
  break;
 case 132:
  if (VAR_14->version == VAR_4)
   VAR_17->attr_groups = VAR_5;
  else
   VAR_17->attr_groups = VAR_6;
  break;
 case 131:
  if (VAR_14->version == VAR_4)
   VAR_17->attr_groups = VAR_7;
  break;
 case 128:
  if (!(VAR_14->mcb_active_mask & VAR_17->inf->enable_mask))
   return -VAR_1;
  if (VAR_14->version == VAR_4)
   VAR_17->attr_groups = VAR_13;
  else
   VAR_17->attr_groups = VAR_12;
  break;
 case 129:
  if (!(VAR_14->mc_active_mask & VAR_17->inf->enable_mask))
   return -VAR_1;
  if (VAR_14->version == VAR_4)
   VAR_17->attr_groups = VAR_11;
  else
   VAR_17->attr_groups = VAR_10;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_3(VAR_17, VAR_15->name)) {
  FUNC_0(VAR_16, "%s PMU: Failed to init perf driver\n", VAR_15->name);
  return -VAR_1;
 }

 FUNC_1(VAR_16, "%s PMU registered\n", VAR_15->name);

 return 0;
}
