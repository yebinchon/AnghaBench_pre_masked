
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_nic_priv {int tx_timeout_count; int state; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hns_nic_priv*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hns_nic_priv *VAR_2)
{

 if (!FUNC_3(VAR_1, &VAR_2->state)) {
  FUNC_2(VAR_0, &VAR_2->state);
  FUNC_1(VAR_2->netdev,
       "initiating reset due to tx timeout(%llu,0x%lx)\n",
       VAR_2->tx_timeout_count, VAR_2->state);
  VAR_2->tx_timeout_count++;
  FUNC_0(VAR_2);
 }
}
