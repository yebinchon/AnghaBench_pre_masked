
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {scalar_t__ end; scalar_t__ start; } ;
struct nd_region_data {int ns_active; int ns_count; } ;
struct TYPE_4__ {int sd; } ;
struct TYPE_5__ {TYPE_1__ kobj; } ;
struct nd_region {scalar_t__ num_lanes; int dax_seed; int pfn_seed; int btt_seed; int bb; scalar_t__ ndr_size; scalar_t__ ndr_start; TYPE_2__ dev; int bb_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 int FUNC_1 (struct device*,char*,int,char*) ;
 struct nd_region_data* FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (struct device*,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct nd_region*) ;
 int FUNC_7 (struct nd_region*) ;
 int FUNC_8 (struct nd_region*) ;
 int FUNC_9 (struct nd_region*) ;
 int FUNC_10 (struct nd_region*) ;
 int FUNC_11 (struct nd_region*,int*) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (struct nd_region*,int *,struct resource*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,unsigned long*) ;
 struct nd_region* FUNC_17 (struct device*) ;

__attribute__((used)) static int FUNC_18(struct device *VAR_1)
{
 int VAR_2, VAR_3;
 static unsigned long VAR_4;
 struct nd_region_data *VAR_5;
 struct nd_region *VAR_6 = FUNC_17(VAR_1);

 if (VAR_6->num_lanes > FUNC_12()
   && VAR_6->num_lanes < FUNC_13()
   && !FUNC_16(0, &VAR_4)) {
  FUNC_0(VAR_1, "online cpus (%d) < concurrent i/o lanes (%d) < possible cpus (%d)\n",
    FUNC_12(), VAR_6->num_lanes,
    FUNC_13());
  FUNC_0(VAR_1, "setting nr_cpus=%d may yield better libnvdimm device performance\n",
    VAR_6->num_lanes);
 }

 VAR_3 = FUNC_10(VAR_6);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_6(VAR_6);
 if (VAR_3)
  return VAR_3;

 if (FUNC_5(&VAR_6->dev)) {
  struct resource VAR_7;

  if (FUNC_4(VAR_1, &VAR_6->bb))
   return -VAR_0;
  VAR_6->bb_state = FUNC_15(VAR_6->dev.kobj.sd,
             "badblocks");
  if (!VAR_6->bb_state)
   FUNC_3(&VAR_6->dev,
     "'badblocks' notification disabled\n");
  VAR_7.start = VAR_6->ndr_start;
  VAR_7.end = VAR_6->ndr_start + VAR_6->ndr_size - 1;
  FUNC_14(VAR_6, &VAR_6->bb, &VAR_7);
 }

 VAR_3 = FUNC_11(VAR_6, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_5 = FUNC_2(VAR_1);
 VAR_5->ns_active = VAR_3;
 VAR_5->ns_count = VAR_3 + VAR_2;

 if (VAR_3 && VAR_2 && VAR_3 == VAR_2)
  return -VAR_0;

 VAR_6->btt_seed = FUNC_7(VAR_6);
 VAR_6->pfn_seed = FUNC_9(VAR_6);
 VAR_6->dax_seed = FUNC_8(VAR_6);
 if (VAR_2 == 0)
  return 0;
 FUNC_1(VAR_1, "failed to register %d namespace%s, continuing...\n",
   VAR_2, VAR_2 == 1 ? "" : "s");
 return 0;
}
