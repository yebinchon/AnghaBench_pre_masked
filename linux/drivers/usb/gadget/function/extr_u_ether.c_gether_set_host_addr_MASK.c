
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct eth_dev {int host_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ,int *,int) ;
 struct eth_dev* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_2, const char *VAR_3)
{
 struct eth_dev *VAR_4;
 u8 VAR_5[VAR_1];

 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_3, VAR_5))
  return -VAR_0;
 FUNC_1(VAR_4->host_mac, VAR_5, VAR_1);
 return 0;
}
