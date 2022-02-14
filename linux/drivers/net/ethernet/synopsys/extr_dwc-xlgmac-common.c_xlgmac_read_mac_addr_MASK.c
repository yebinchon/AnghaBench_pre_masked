
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int mac_addr; struct net_device* netdev; } ;
struct net_device {int addr_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xlgmac_pdata *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;


 FUNC_0(VAR_1->mac_addr, VAR_0, VAR_2->addr_len);
}
