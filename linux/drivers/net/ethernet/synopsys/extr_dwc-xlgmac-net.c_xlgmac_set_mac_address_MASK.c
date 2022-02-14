
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_ops {int (* set_mac_address ) (struct xlgmac_pdata*,int ) ;} ;
struct xlgmac_pdata {struct xlgmac_hw_ops hw_ops; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; int addr_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct xlgmac_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct xlgmac_pdata*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct xlgmac_pdata *VAR_3 = FUNC_2(VAR_1);
 struct xlgmac_hw_ops *VAR_4 = &VAR_3->hw_ops;
 struct sockaddr *VAR_5 = VAR_2;

 if (!FUNC_0(VAR_5->sa_data))
  return -VAR_0;

 FUNC_1(VAR_1->dev_addr, VAR_5->sa_data, VAR_1->addr_len);

 VAR_4->set_mac_address(VAR_3, VAR_1->dev_addr);

 return 0;
}
