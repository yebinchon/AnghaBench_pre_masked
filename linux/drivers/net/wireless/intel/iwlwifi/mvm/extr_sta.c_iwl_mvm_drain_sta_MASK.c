
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_sta {int sta_id; int mac_id_n_color; } ;
struct iwl_mvm_add_sta_cmd {void* station_flags_msk; void* station_flags; int add_modify; int sta_id; void* mac_id_n_color; } ;
struct iwl_mvm {int mutex; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,struct iwl_mvm_add_sta_cmd*,int*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_mvm *VAR_5, struct iwl_mvm_sta *VAR_6,
        bool VAR_7)
{
 struct iwl_mvm_add_sta_cmd VAR_8 = {};
 int VAR_9;
 u32 VAR_10;

 FUNC_5(&VAR_5->mutex);

 VAR_8.mac_id_n_color = FUNC_2(VAR_6->mac_id_n_color);
 VAR_8.sta_id = VAR_6->sta_id;
 VAR_8.add_modify = VAR_4;
 VAR_8.station_flags = VAR_7 ? FUNC_2(VAR_3) : 0;
 VAR_8.station_flags_msk = FUNC_2(VAR_3);

 VAR_10 = 128;
 VAR_9 = FUNC_4(VAR_5, VAR_0,
       FUNC_3(VAR_5),
       &VAR_8, &VAR_10);
 if (VAR_9)
  return VAR_9;

 switch (VAR_10 & VAR_2) {
 case 128:
  FUNC_0(VAR_5, "Frames for staid %d will drained in fw\n",
          VAR_6->sta_id);
  break;
 default:
  VAR_9 = -VAR_1;
  FUNC_1(VAR_5, "Couldn't drain frames for staid %d\n",
   VAR_6->sta_id);
  break;
 }

 return VAR_9;
}
