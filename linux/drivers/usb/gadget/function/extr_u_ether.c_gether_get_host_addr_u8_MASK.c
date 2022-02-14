
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct eth_dev {int host_mac; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct eth_dev* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_1, u8 VAR_2[VAR_0])
{
 struct eth_dev *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 FUNC_0(VAR_2, VAR_3->host_mac, VAR_0);
}
