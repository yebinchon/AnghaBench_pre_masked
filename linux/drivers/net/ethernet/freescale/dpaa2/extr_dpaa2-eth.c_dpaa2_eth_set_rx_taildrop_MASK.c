
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpni_taildrop {int enable; int threshold; int member_0; } ;
struct dpaa2_eth_priv {int rx_td_enabled; int num_fqs; int net_dev; TYPE_1__* fq; int mc_token; int mc_io; } ;
struct TYPE_2__ {scalar_t__ type; int flowid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,struct dpni_taildrop*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct dpaa2_eth_priv *VAR_4, bool VAR_5)
{
 struct dpni_taildrop VAR_6 = {0};
 int VAR_7, VAR_8;

 if (VAR_4->rx_td_enabled == VAR_5)
  return;

 VAR_6.enable = VAR_5;
 VAR_6.threshold = VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_fqs; VAR_7++) {
  if (VAR_4->fq[VAR_7].type != VAR_1)
   continue;
  VAR_8 = FUNC_0(VAR_4->mc_io, 0, VAR_4->mc_token,
     VAR_2, VAR_3, 0,
     VAR_4->fq[VAR_7].flowid, &VAR_6);
  if (VAR_8) {
   FUNC_1(VAR_4->net_dev,
       "dpni_set_taildrop() failed\n");
   break;
  }
 }

 VAR_4->rx_td_enabled = VAR_5;
}
