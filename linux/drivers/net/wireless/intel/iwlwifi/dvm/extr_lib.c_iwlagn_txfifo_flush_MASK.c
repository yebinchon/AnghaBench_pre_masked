
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iwl_txfifo_flush_cmd_v3 {int queue_control; int flush_control; } ;
struct iwl_txfifo_flush_cmd_v2 {int queue_control; int flush_control; } ;
struct iwl_priv {scalar_t__ valid_contexts; TYPE_2__* fw; TYPE_1__* nvm_data; } ;
typedef int flush_cmd_v3 ;
typedef int flush_cmd_v2 ;
struct TYPE_4__ {int ucode_ver; } ;
struct TYPE_3__ {scalar_t__ sku_cap_11n_enable; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct iwl_priv*,int ,int ,int,struct iwl_txfifo_flush_cmd_v3*) ;

int FUNC_6(struct iwl_priv *VAR_15, u32 VAR_16)
{
 struct iwl_txfifo_flush_cmd_v3 VAR_17 = {
  .flush_control = FUNC_3(VAR_1),
 };
 struct iwl_txfifo_flush_cmd_v2 VAR_18 = {
  .flush_control = FUNC_3(VAR_1),
 };

 u32 VAR_19 = VAR_13 | VAR_12 |
       VAR_9 | VAR_10 | VAR_11;

 if ((VAR_15->valid_contexts != FUNC_0(VAR_8)))
  VAR_19 |= VAR_7 | VAR_6 |
     VAR_2 | VAR_3 |
     VAR_4 |
     VAR_5;

 if (VAR_15->nvm_data->sku_cap_11n_enable)
  VAR_19 |= VAR_0;

 if (VAR_16)
  VAR_19 = VAR_16;

 FUNC_1(VAR_15, "queue control: 0x%x\n", VAR_19);
 VAR_17 = FUNC_4(VAR_19);
 VAR_18 = FUNC_3((u16)VAR_19);

 if (FUNC_2(VAR_15->fw->ucode_ver) > 2)
  return FUNC_5(VAR_15, VAR_14, 0,
         sizeof(VAR_17),
         &VAR_17);
 return FUNC_5(VAR_15, VAR_14, 0,
        sizeof(VAR_18), &VAR_18);
}
