
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_3__* trans_cfg; int status; } ;
struct iwl_rxq {int need_update; int write_actual; int id; int write; int lock; } ;
struct TYPE_6__ {scalar_t__ device_family; scalar_t__ mq_rx_supported; TYPE_2__* csr; TYPE_1__* base_params; } ;
struct TYPE_5__ {int flag_mac_access_req; } ;
struct TYPE_4__ {int shadow_reg_enable; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct iwl_trans *VAR_8,
        struct iwl_rxq *VAR_9)
{
 u32 VAR_10;

 FUNC_6(&VAR_9->lock);






 if (!VAR_8->trans_cfg->base_params->shadow_reg_enable &&
     FUNC_8(VAR_7, &VAR_8->status)) {
  VAR_10 = FUNC_3(VAR_8, VAR_1);

  if (VAR_10 & VAR_2) {
   FUNC_1(VAR_8, "Rx queue requesting wakeup, GP1 = 0x%x\n",
           VAR_10);
   FUNC_4(VAR_8, VAR_0,
        FUNC_0(VAR_8->trans_cfg->csr->flag_mac_access_req));
   VAR_9->need_update = 1;
   return;
  }
 }

 VAR_9->write_actual = FUNC_7(VAR_9->write, 8);
 if (VAR_8->trans_cfg->device_family == VAR_6)
  FUNC_5(VAR_8, VAR_5,
       (VAR_9->write_actual |
        ((VAR_4 + VAR_9->id) << 16)));
 else if (VAR_8->trans_cfg->mq_rx_supported)
  FUNC_5(VAR_8, FUNC_2(VAR_9->id),
       VAR_9->write_actual);
 else
  FUNC_5(VAR_8, VAR_3, VAR_9->write_actual);
}
