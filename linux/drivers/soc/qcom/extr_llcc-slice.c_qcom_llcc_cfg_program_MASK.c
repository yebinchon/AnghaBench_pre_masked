
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct llcc_slice_desc {int slice_id; } ;
struct llcc_slice_config {int cache_mode; int probe_target_ways; int fixed_size; int priority; int res_ways; int bonus_ways; int slice_id; scalar_t__ activate_on_init; int max_cap; } ;
struct TYPE_2__ {int cfg_size; int num_banks; int bcast_regmap; struct llcc_slice_config* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (struct llcc_slice_desc*) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;
 const struct llcc_slice_config *VAR_17;
 struct llcc_slice_desc VAR_18;

 VAR_15 = VAR_7->cfg_size;
 VAR_17 = VAR_7->cfg;

 for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++) {
  VAR_10 = FUNC_1(VAR_17[VAR_9].slice_id);
  VAR_11 = FUNC_0(VAR_17[VAR_9].slice_id);

  VAR_12 = VAR_17[VAR_9].cache_mode;
  VAR_12 |= VAR_17[VAR_9].probe_target_ways <<
    VAR_5;
  VAR_12 |= VAR_17[VAR_9].fixed_size <<
    VAR_2;
  VAR_12 |= VAR_17[VAR_9].priority <<
    VAR_4;

  VAR_14 = FUNC_2(VAR_17[VAR_9].max_cap);







  VAR_14 = VAR_14 / VAR_7->num_banks;
  VAR_14 >>= VAR_6;
  VAR_12 |= VAR_14 << VAR_3;

  VAR_13 = VAR_17[VAR_9].res_ways & VAR_1;
  VAR_13 |= VAR_17[VAR_9].bonus_ways << VAR_0;

  VAR_16 = FUNC_4(VAR_7->bcast_regmap, VAR_10,
     VAR_12);
  if (VAR_16)
   return VAR_16;
  VAR_16 = FUNC_4(VAR_7->bcast_regmap, VAR_11,
     VAR_13);
  if (VAR_16)
   return VAR_16;
  if (VAR_17[VAR_9].activate_on_init) {
   VAR_18.slice_id = VAR_17[VAR_9].slice_id;
   VAR_16 = FUNC_3(&VAR_18);
  }
 }
 return VAR_16;
}
