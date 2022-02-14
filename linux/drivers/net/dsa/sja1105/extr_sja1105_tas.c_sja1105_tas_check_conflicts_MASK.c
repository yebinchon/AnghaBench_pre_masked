
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_taprio_qopt_offload {scalar_t__ cycle_time; scalar_t__ base_time; int num_entries; TYPE_1__* entries; } ;
struct sja1105_tas_data {struct tc_taprio_qopt_offload** offload; } ;
struct sja1105_private {TYPE_2__* ds; struct sja1105_tas_data tas_data; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ interval; } ;


 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4(struct sja1105_private *VAR_0, int VAR_1,
       const struct tc_taprio_qopt_offload *VAR_2)
{
 struct sja1105_tas_data *VAR_3 = &VAR_0->tas_data;
 const struct tc_taprio_qopt_offload *VAR_4;
 s64 VAR_5, VAR_6;
 s64 VAR_7, VAR_8;
 s64 VAR_9, VAR_10;
 s64 VAR_11;
 s64 VAR_12, VAR_13;
 int VAR_14, VAR_15;
 s32 VAR_16;

 VAR_4 = VAR_3->offload[VAR_1];
 if (!VAR_4)
  return 0;




 VAR_5 = FUNC_2(VAR_4->cycle_time, VAR_2->cycle_time);
 VAR_6 = FUNC_3(VAR_4->cycle_time, VAR_2->cycle_time);
 FUNC_1(VAR_5, VAR_6, &VAR_16);
 if (VAR_16)
  return 1;





 FUNC_1(VAR_4->base_time, VAR_4->cycle_time, &VAR_16);
 VAR_9 = VAR_16;

 FUNC_1(VAR_2->base_time, VAR_2->cycle_time, &VAR_16);
 VAR_10 = VAR_16;

 VAR_11 = VAR_5 + FUNC_2(VAR_9, VAR_10);




 for (VAR_14 = 0, VAR_7 = 0;
      VAR_14 < VAR_4->num_entries;
      VAR_7 += VAR_4->entries[VAR_14].interval, VAR_14++) {



  for (VAR_15 = 0, VAR_8 = 0;
       VAR_15 < VAR_2->num_entries;
       VAR_8 += VAR_2->entries[VAR_15].interval, VAR_15++) {




   for (VAR_12 = VAR_9 + VAR_7;
        VAR_12 <= VAR_11;
        VAR_12 += VAR_4->cycle_time) {




    for (VAR_13 = VAR_10 + VAR_8;
         VAR_13 <= VAR_11;
         VAR_13 += VAR_2->cycle_time) {
     if (VAR_12 == VAR_13) {
      FUNC_0(VAR_0->ds->dev,
        "GCL entry %d collides with entry %d of port %d\n",
        VAR_15, VAR_14, VAR_1);
      return 1;
     }
    }
   }
  }
 }

 return 0;
}
