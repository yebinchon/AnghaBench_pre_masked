
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ device_family; scalar_t__ mq_rx_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct iwl_trans*,int ,int ,int) ;
 int FUNC_1 (struct iwl_trans*,int ,int ,int ,int) ;
 int FUNC_2 (struct iwl_trans*,int ,int ,int ,int) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*,int ,int ) ;

int FUNC_6(struct iwl_trans *VAR_9)
{
 if (VAR_9->trans_cfg->device_family >= VAR_3) {

  FUNC_5(VAR_9, VAR_7, 0);
  return FUNC_2(VAR_9, VAR_5,
           VAR_8, VAR_8, 1000);
 } else if (VAR_9->trans_cfg->mq_rx_supported) {
  FUNC_4(VAR_9, VAR_6, 0);
  return FUNC_1(VAR_9, VAR_4,
        VAR_8, VAR_8, 1000);
 } else {
  FUNC_3(VAR_9, VAR_0, 0);
  return FUNC_0(VAR_9, VAR_1,
        VAR_2,
        1000);
 }
}
