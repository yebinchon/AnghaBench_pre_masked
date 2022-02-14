
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int (* set_mac_address ) (struct xgbe_prv_data*,int ) ;} ;
struct xgbe_prv_data {struct xgbe_hw_if hw_if; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; int addr_len; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct xgbe_prv_data* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct xgbe_prv_data *VAR_3 = FUNC_3(VAR_1);
 struct xgbe_hw_if *VAR_4 = &VAR_3->hw_if;
 struct sockaddr *VAR_5 = VAR_2;

 FUNC_0("-->xgbe_set_mac_address\n");

 if (!FUNC_1(VAR_5->sa_data))
  return -VAR_0;

 FUNC_2(VAR_1->dev_addr, VAR_5->sa_data, VAR_1->addr_len);

 VAR_4->set_mac_address(VAR_3, VAR_1->dev_addr);

 FUNC_0("<--xgbe_set_mac_address\n");

 return 0;
}
