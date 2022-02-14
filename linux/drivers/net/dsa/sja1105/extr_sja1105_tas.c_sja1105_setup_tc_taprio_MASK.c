
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_taprio_qopt_offload {int enable; scalar_t__ base_time; int num_entries; TYPE_1__* entries; scalar_t__ cycle_time_extension; } ;
struct sja1105_tas_data {int ** offload; } ;
struct sja1105_private {TYPE_2__* ds; struct sja1105_tas_data tas_data; } ;
struct dsa_switch {int dev; struct sja1105_private* priv; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sja1105_private*) ;
 int FUNC_3 (struct sja1105_private*) ;
 scalar_t__ FUNC_4 (struct sja1105_private*,int,struct tc_taprio_qopt_offload*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (struct tc_taprio_qopt_offload*) ;

int FUNC_7(struct dsa_switch *VAR_5, int VAR_6,
       struct tc_taprio_qopt_offload *VAR_7)
{
 struct sja1105_private *VAR_8 = VAR_5->priv;
 struct sja1105_tas_data *VAR_9 = &VAR_8->tas_data;
 int VAR_10, VAR_11, VAR_12;




 if (!!VAR_9->offload[VAR_6] == VAR_7->enable)
  return -VAR_0;

 if (!VAR_7->enable) {
  FUNC_5(VAR_9->offload[VAR_6]);
  VAR_9->offload[VAR_6] = ((void*)0);

  VAR_11 = FUNC_2(VAR_8);
  if (VAR_11 < 0)
   return VAR_11;

  return FUNC_3(VAR_8);
 }
 if (VAR_7->cycle_time_extension)
  return -VAR_1;

 if (!FUNC_1(VAR_7->base_time)) {
  FUNC_0(VAR_5->dev, "A base time of zero is not hardware-allowed\n");
  return -VAR_2;
 }

 for (VAR_12 = 0; VAR_12 < VAR_7->num_entries; VAR_12++) {
  s64 VAR_13 = VAR_7->entries[VAR_12].interval;
  s64 VAR_14 = FUNC_1(VAR_13);
  bool VAR_15, VAR_16;

  VAR_15 = (VAR_14 >= VAR_4);
  VAR_16 = (VAR_14 == 0);
  if (VAR_15 || VAR_16) {
   FUNC_0(VAR_8->ds->dev,
    "Interval %llu too %s for GCL entry %d\n",
    VAR_13, VAR_15 ? "long" : "short", VAR_12);
   return -VAR_2;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_10 == VAR_6)
   continue;

  if (FUNC_4(VAR_8, VAR_10, VAR_7))
   return -VAR_2;
 }

 VAR_9->offload[VAR_6] = FUNC_6(VAR_7);

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_3(VAR_8);
}
