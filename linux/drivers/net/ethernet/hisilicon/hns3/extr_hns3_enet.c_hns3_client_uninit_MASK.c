
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ reg_state; } ;
struct hns3_nic_priv {int state; } ;
struct TYPE_2__ {struct net_device* netdev; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int) ;
 int FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct hns3_nic_priv*) ;
 int FUNC_6 (struct hns3_nic_priv*) ;
 int FUNC_7 (struct hns3_nic_priv*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct hns3_nic_priv*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,char*) ;
 struct hns3_nic_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,char*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct net_device*) ;

__attribute__((used)) static void FUNC_16(struct hnae3_handle *VAR_2, bool VAR_3)
{
 struct net_device *VAR_4 = VAR_2->kinfo.netdev;
 struct hns3_nic_priv *VAR_5 = FUNC_12(VAR_4);
 int VAR_6;

 FUNC_8(VAR_4);

 if (VAR_4->reg_state != VAR_1)
  FUNC_15(VAR_4);

 FUNC_2(VAR_2);

 FUNC_10(VAR_4);

 if (!FUNC_14(VAR_0, &VAR_5->state)) {
  FUNC_13(VAR_4, "already uninitialized\n");
  goto out_netdev_free;
 }

 FUNC_4(VAR_4, 1);

 FUNC_1(VAR_2, 1);

 FUNC_6(VAR_5);

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6)
  FUNC_11(VAR_4, "dealloc vector error\n");

 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6)
  FUNC_11(VAR_4, "uninit ring error\n");

 FUNC_7(VAR_5);

 FUNC_3(VAR_2);

out_netdev_free:
 FUNC_0(VAR_4);
}
