
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned int ubrc; unsigned int uprc; unsigned int ubtc; unsigned int uptc; int dpc; } ;
struct hw_atl_utils_mbox {TYPE_2__ stats; } ;
struct aq_hw_s {int dpc; TYPE_1__* aq_nic_cfg; int mbox_addr; } ;
struct TYPE_3__ {unsigned int mtu; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct aq_hw_s*) ;
 int FUNC_3 (struct aq_hw_s*,int ,int *,int) ;

void FUNC_4(struct aq_hw_s *VAR_1,
     struct hw_atl_utils_mbox *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_3(VAR_1,
         VAR_1->mbox_addr,
         (u32 *)(void *)VAR_2,
         sizeof(*VAR_2) / sizeof(u32));
 if (VAR_3 < 0)
  goto err_exit;

 if (FUNC_0(VAR_0)) {
  unsigned int VAR_4 = VAR_1->aq_nic_cfg ?
     VAR_1->aq_nic_cfg->mtu : 1514U;
  VAR_2->stats.ubrc = VAR_2->stats.uprc * VAR_4;
  VAR_2->stats.ubtc = VAR_2->stats.uptc * VAR_4;
  VAR_2->stats.dpc = FUNC_1(&VAR_1->dpc);
 } else {
  VAR_2->stats.dpc = FUNC_2(VAR_1);
 }

err_exit:;
}
