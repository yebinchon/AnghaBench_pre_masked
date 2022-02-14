
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* clip_groups; } ;
struct il_priv {TYPE_2__ _3945; } ;
struct il_channel_info {size_t group_idx; struct il3945_channel_power_info* power_info; int curr_txpow; } ;
struct il3945_channel_power_info {int requested_power; scalar_t__ base_power_idx; } ;
typedef int s8 ;
struct TYPE_3__ {int * clip_powers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int const) ;

__attribute__((used)) static int
FUNC_1(struct il_priv *VAR_7, struct il_channel_info *VAR_8)
{
 struct il3945_channel_power_info *VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 const s8 *VAR_12;
 int VAR_13;


 VAR_12 = VAR_7->_3945.clip_groups[VAR_8->group_idx].clip_powers;


 VAR_9 = VAR_8->power_info;


 for (VAR_11 = VAR_6; VAR_11 <= VAR_5; VAR_11++, ++VAR_9) {
  int VAR_14;


  VAR_13 = FUNC_0(VAR_8->curr_txpow, VAR_12[VAR_11]);
  if (VAR_13 == VAR_9->requested_power)
   continue;



  VAR_14 = (VAR_13 - VAR_9->requested_power) * 2;
  VAR_9->base_power_idx -= VAR_14;


  VAR_9->requested_power = VAR_13;

  VAR_10 = 1;
 }



 if (VAR_10) {
  VAR_13 =
      VAR_8->power_info[VAR_3].requested_power +
      VAR_1;


  for (VAR_11 = VAR_4; VAR_11 <= VAR_2; VAR_11++) {
   VAR_9->requested_power = VAR_13;
   VAR_9->base_power_idx =
       VAR_8->power_info[VAR_3].
       base_power_idx + VAR_0;
   ++VAR_9;
  }
 }

 return 0;
}
