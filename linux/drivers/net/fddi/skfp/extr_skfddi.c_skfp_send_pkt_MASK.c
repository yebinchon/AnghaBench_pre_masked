
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int tx_errors; } ;
struct TYPE_5__ {TYPE_1__ gen; } ;
struct TYPE_6__ {scalar_t__ QueueSkb; int SendSkbQueue; TYPE_2__ MacStat; } ;
struct s_smc {TYPE_3__ os; } ;
struct net_device {int dummy; } ;
typedef TYPE_3__ skfddi_priv ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct s_smc* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct s_smc*) ;
 int FUNC_6 (int *,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_4,
           struct net_device *VAR_5)
{
 struct s_smc *VAR_6 = FUNC_1(VAR_5);
 skfddi_priv *VAR_7 = &VAR_6->os;

 FUNC_4("skfp_send_pkt\n");
 if (!(VAR_4->len >= VAR_1 && VAR_4->len <= VAR_0)) {
  VAR_7->MacStat.gen.tx_errors++;

  FUNC_2(VAR_5);
  FUNC_0(VAR_4);
  return VAR_3;
 }
 if (VAR_7->QueueSkb == 0) {

  FUNC_3(VAR_5);
  return VAR_2;
 }
 VAR_7->QueueSkb--;
 FUNC_6(&VAR_7->SendSkbQueue, VAR_4);
 FUNC_5(FUNC_1(VAR_5));
 if (VAR_7->QueueSkb == 0) {
  FUNC_3(VAR_5);
 }
 return VAR_3;

}
