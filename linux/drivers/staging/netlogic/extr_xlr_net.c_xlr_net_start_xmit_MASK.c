
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlr_net_priv {int tx_stnid; } ;
struct sk_buff {int data; } ;
struct nlm_fmn_msg {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct xlr_net_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,int ,struct nlm_fmn_msg*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nlm_fmn_msg*,int ,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_1,
          struct net_device *VAR_2)
{
 struct nlm_fmn_msg VAR_3;
 struct xlr_net_priv *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 u32 VAR_6;

 FUNC_6(&VAR_3, FUNC_5(VAR_1->data), VAR_1);
 VAR_6 = FUNC_3();
 VAR_5 = FUNC_4(2, 0, VAR_4->tx_stnid, &VAR_3);
 FUNC_2(VAR_6);
 if (VAR_5)
  FUNC_0(VAR_1);
 return VAR_0;
}
