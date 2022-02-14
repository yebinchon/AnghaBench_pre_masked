
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tc_taprio_qopt_offload {int num_entries; TYPE_3__* entries; } ;
struct sja1105_tas_data {struct tc_taprio_qopt_offload** offload; } ;
struct sja1105_table {int entry_count; struct sja1105_schedule_params_entry* entries; TYPE_2__* ops; } ;
struct sja1105_schedule_params_entry {int actsubsch; int subschindx; int delta; int address; int* subscheind; int resmedia_en; int resmedia; int destports; int clksrc; } ;
struct sja1105_schedule_entry_points_params_entry {int actsubsch; int subschindx; int delta; int address; int* subscheind; int resmedia_en; int resmedia; int destports; int clksrc; } ;
struct sja1105_schedule_entry_points_entry {int actsubsch; int subschindx; int delta; int address; int* subscheind; int resmedia_en; int resmedia; int destports; int clksrc; } ;
struct sja1105_schedule_entry {int actsubsch; int subschindx; int delta; int address; int* subscheind; int resmedia_en; int resmedia; int destports; int clksrc; } ;
struct TYPE_4__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ static_config; struct sja1105_tas_data tas_data; } ;
typedef int s64 ;
struct TYPE_6__ {int interval; int gate_mask; } ;
struct TYPE_5__ {int unpacked_entry_size; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct sja1105_schedule_params_entry*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sja1105_private *VAR_11)
{
 struct sja1105_schedule_entry_points_entry *VAR_12;
 struct sja1105_schedule_entry_points_params_entry
     *VAR_13;
 struct sja1105_schedule_params_entry *VAR_14;
 struct sja1105_tas_data *VAR_15 = &VAR_11->tas_data;
 struct sja1105_schedule_entry *VAR_16;
 struct sja1105_table *VAR_17;
 int VAR_18;
 s64 VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24, VAR_25 = 0;
 int VAR_26;


 VAR_17 = &VAR_11->static_config.tables[VAR_0];
 if (VAR_17->entry_count) {
  FUNC_2(VAR_17->entries);
  VAR_17->entry_count = 0;
 }


 VAR_17 = &VAR_11->static_config.tables[VAR_2];
 if (VAR_17->entry_count) {
  FUNC_2(VAR_17->entries);
  VAR_17->entry_count = 0;
 }


 VAR_17 = &VAR_11->static_config.tables[VAR_3];
 if (VAR_17->entry_count) {
  FUNC_2(VAR_17->entries);
  VAR_17->entry_count = 0;
 }


 VAR_17 = &VAR_11->static_config.tables[VAR_1];
 if (VAR_17->entry_count) {
  FUNC_2(VAR_17->entries);
  VAR_17->entry_count = 0;
 }


 for (VAR_26 = 0; VAR_26 < VAR_9; VAR_26++) {
  if (VAR_15->offload[VAR_26]) {
   VAR_21 += VAR_15->offload[VAR_26]->num_entries;
   VAR_22++;
  }
 }


 if (!VAR_22)
  return 0;




 VAR_17 = &VAR_11->static_config.tables[VAR_0];
 VAR_17->entries = FUNC_1(VAR_21, VAR_17->ops->unpacked_entry_size,
     VAR_5);
 if (!VAR_17->entries)
  return -VAR_4;
 VAR_17->entry_count = VAR_21;
 VAR_16 = VAR_17->entries;


 VAR_17 = &VAR_11->static_config.tables[VAR_2];
 VAR_17->entries = FUNC_1(VAR_7,
     VAR_17->ops->unpacked_entry_size, VAR_5);
 if (!VAR_17->entries)




  return -VAR_4;
 VAR_17->entry_count = VAR_7;
 VAR_13 = VAR_17->entries;


 VAR_17 = &VAR_11->static_config.tables[VAR_3];
 VAR_17->entries = FUNC_1(VAR_8,
     VAR_17->ops->unpacked_entry_size, VAR_5);
 if (!VAR_17->entries)
  return -VAR_4;
 VAR_17->entry_count = VAR_8;
 VAR_14 = VAR_17->entries;


 VAR_17 = &VAR_11->static_config.tables[VAR_1];
 VAR_17->entries = FUNC_1(VAR_22, VAR_17->ops->unpacked_entry_size,
     VAR_5);
 if (!VAR_17->entries)
  return -VAR_4;
 VAR_17->entry_count = VAR_22;
 VAR_12 = VAR_17->entries;


 VAR_13->clksrc = VAR_10;
 VAR_13->actsubsch = VAR_22 - 1;

 for (VAR_26 = 0; VAR_26 < VAR_9; VAR_26++) {
  const struct tc_taprio_qopt_offload *VAR_27;

  VAR_27 = VAR_15->offload[VAR_26];
  if (!VAR_27)
   continue;

  VAR_18 = VAR_25;
  VAR_20 = VAR_25 + VAR_27->num_entries - 1;
  VAR_19 = 1;

  VAR_12[VAR_23].subschindx = VAR_23;
  VAR_12[VAR_23].delta = VAR_19;
  VAR_12[VAR_23].address = VAR_18;




  for (VAR_24 = VAR_23; VAR_24 < 8; VAR_24++)
   VAR_14->subscheind[VAR_24] = VAR_20;

  for (VAR_24 = 0; VAR_24 < VAR_27->num_entries; VAR_24++, VAR_25++) {
   s64 VAR_28 = VAR_27->entries[VAR_24].interval;

   VAR_16[VAR_25].delta = FUNC_3(VAR_28);
   VAR_16[VAR_25].destports = FUNC_0(VAR_26);
   VAR_16[VAR_25].resmedia_en = 1;
   VAR_16[VAR_25].resmedia = VAR_6 &
     ~VAR_27->entries[VAR_24].gate_mask;
  }
  VAR_23++;
 }

 return 0;
}
