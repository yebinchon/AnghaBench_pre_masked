
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct qlcnic_adapter {int flags; int state; int netdev; int mac_addr; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct qlcnic_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_4, void *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_3(VAR_4);
 struct sockaddr *VAR_7 = VAR_5;

 if (FUNC_10(VAR_6))
  return -VAR_0;

 if ((VAR_6->flags & VAR_2))
  return -VAR_1;

 if (!FUNC_1(VAR_7->sa_data))
  return -VAR_0;

 if (FUNC_0(VAR_6->mac_addr, VAR_7->sa_data) &&
     FUNC_0(VAR_4->dev_addr, VAR_7->sa_data))
  return 0;

 if (FUNC_11(VAR_3, &VAR_6->state)) {
  FUNC_5(VAR_4);
  FUNC_7(VAR_6);
 }

 FUNC_6(VAR_6);
 FUNC_2(VAR_6->mac_addr, VAR_7->sa_data, VAR_4->addr_len);
 FUNC_2(VAR_4->dev_addr, VAR_7->sa_data, VAR_4->addr_len);
 FUNC_9(VAR_6->netdev);

 if (FUNC_11(VAR_3, &VAR_6->state)) {
  FUNC_4(VAR_4);
  FUNC_8(VAR_6);
 }
 return 0;
}
