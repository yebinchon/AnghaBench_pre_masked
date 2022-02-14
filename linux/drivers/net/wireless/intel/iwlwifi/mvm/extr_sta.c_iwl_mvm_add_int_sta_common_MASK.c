
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_mvm_int_sta {int tfd_queue_msk; int type; int sta_id; } ;
struct iwl_mvm_add_sta_cmd {int addr; int tid_disable_tx; void* tfd_queue_msk; int station_type; void* mac_id_n_color; int sta_id; } ;
struct iwl_mvm {TYPE_1__* fw; int mutex; } ;
typedef int cmd ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int FUNC_2 (struct iwl_mvm*,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,int ,int ,struct iwl_mvm_add_sta_cmd*,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int const*,int ) ;
 int FUNC_11 (struct iwl_mvm_add_sta_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct iwl_mvm *VAR_5,
          struct iwl_mvm_int_sta *VAR_6,
          const u8 *VAR_7,
          u16 VAR_8, u16 VAR_9)
{
 struct iwl_mvm_add_sta_cmd VAR_10;
 int VAR_11;
 u32 VAR_12 = 128;

 FUNC_9(&VAR_5->mutex);

 FUNC_11(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.sta_id = VAR_6->sta_id;
 VAR_10.mac_id_n_color = FUNC_4(FUNC_0(VAR_8,
            VAR_9));
 if (FUNC_5(&VAR_5->fw->ucode_capa, VAR_4))
  VAR_10.station_type = VAR_6->type;

 if (!FUNC_7(VAR_5))
  VAR_10.tfd_queue_msk = FUNC_4(VAR_6->tfd_queue_msk);
 VAR_10.tid_disable_tx = FUNC_3(0xffff);

 if (VAR_7)
  FUNC_10(VAR_10.addr, VAR_7, VAR_2);

 VAR_11 = FUNC_8(VAR_5, VAR_0,
       FUNC_6(VAR_5),
       &VAR_10, &VAR_12);
 if (VAR_11)
  return VAR_11;

 switch (VAR_12 & VAR_3) {
 case 128:
  FUNC_1(VAR_5, "Internal station added.\n");
  return 0;
 default:
  VAR_11 = -VAR_1;
  FUNC_2(VAR_5, "Add internal station failed, status=0x%x\n",
   VAR_12);
  break;
 }
 return VAR_11;
}
