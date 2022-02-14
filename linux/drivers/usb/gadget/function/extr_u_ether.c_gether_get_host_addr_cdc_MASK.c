
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct eth_dev {int host_mac; } ;


 int VAR_0 ;
 struct eth_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct net_device *VAR_1, char *VAR_2, int VAR_3)
{
 struct eth_dev *VAR_4;

 if (VAR_3 < 13)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1);
 FUNC_1(VAR_2, VAR_3, "%pm", VAR_4->host_mac);

 return FUNC_2(VAR_2);
}
