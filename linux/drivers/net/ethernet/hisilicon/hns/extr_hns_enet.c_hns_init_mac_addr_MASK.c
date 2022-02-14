
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct hns_nic_priv {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct hns_nic_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct hns_nic_priv *VAR_2 = FUNC_3(VAR_1);

 if (!FUNC_1(VAR_2->dev, VAR_1->dev_addr, VAR_0)) {
  FUNC_2(VAR_1);
  FUNC_0(VAR_2->dev, "No valid mac, use random mac %pM",
    VAR_1->dev_addr);
 }
}
