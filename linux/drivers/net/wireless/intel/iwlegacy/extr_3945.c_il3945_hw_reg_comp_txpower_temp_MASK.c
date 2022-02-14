
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_9__ {TYPE_3__* clip_groups; } ;
struct il_priv {int temperature; size_t channel_count; TYPE_5__* ops; TYPE_4__ _3945; struct il_channel_info* channel_info; int status; scalar_t__ disable_tx_power_cal; scalar_t__ eeprom; } ;
struct il_channel_info {size_t group_idx; TYPE_2__* power_info; } ;
struct il3945_eeprom {TYPE_1__* groups; } ;
typedef int s8 ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_10__ {int (* send_tx_power ) (struct il_priv*) ;} ;
struct TYPE_8__ {int * clip_powers; } ;
struct TYPE_7__ {int base_power_idx; size_t power_table_idx; int tpc; } ;
struct TYPE_6__ {scalar_t__ temperature; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct il_priv*,size_t,int ,int const*,struct il_channel_info*,size_t) ;
 size_t FUNC_3 (struct il_channel_info*) ;
 int ** VAR_5 ;
 int FUNC_4 (struct il_priv*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_6)
{
 struct il_channel_info *VAR_7 = ((void*)0);
 struct il3945_eeprom *VAR_8 = (struct il3945_eeprom *)VAR_6->eeprom;
 int VAR_9;
 const s8 *VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 int VAR_15;
 int VAR_16 = VAR_6->temperature;

 if (VAR_6->disable_tx_power_cal || FUNC_5(VAR_4, &VAR_6->status)) {

  return 0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_6->channel_count; VAR_14++) {
  VAR_7 = &VAR_6->channel_info[VAR_14];
  VAR_11 = FUNC_3(VAR_7);


  VAR_15 = (s16) VAR_8->groups[VAR_7->group_idx].temperature;



  VAR_9 =
      FUNC_0(VAR_16, VAR_15);


  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   int VAR_17 =
       VAR_7->power_info[VAR_12].base_power_idx;


   VAR_17 += VAR_9;


   VAR_17 = FUNC_1(VAR_17);
   VAR_7->power_info[VAR_12].power_table_idx =
       (u8) VAR_17;
   VAR_7->power_info[VAR_12].tpc =
       VAR_5[VAR_11][VAR_17];
  }


  VAR_10 =
      VAR_6->_3945.clip_groups[VAR_7->group_idx].clip_powers;


  for (VAR_13 = 0; VAR_13 < VAR_0;
       VAR_13++) {
   s32 VAR_18 =
       (VAR_13 ==
        0) ? VAR_1 : VAR_2;
   FUNC_2(VAR_6, VAR_13,
           VAR_18, VAR_10,
           VAR_7, VAR_11);
  }
 }


 return VAR_6->ops->send_tx_power(VAR_6);
}
