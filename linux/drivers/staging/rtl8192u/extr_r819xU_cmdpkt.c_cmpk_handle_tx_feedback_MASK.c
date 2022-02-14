
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int txfeedback; } ;
struct r8192_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct cmd_pkt_tx_feedback {int dummy; } ;


 int FUNC_0 (struct net_device*,struct cmd_pkt_tx_feedback*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, u8 *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_1(VAR_0);
 struct cmd_pkt_tx_feedback VAR_3;

 VAR_2->stats.txfeedback++;







 FUNC_2((u8 *)&VAR_3, VAR_1, sizeof(struct cmd_pkt_tx_feedback));

 FUNC_0(VAR_0, &VAR_3);





}
