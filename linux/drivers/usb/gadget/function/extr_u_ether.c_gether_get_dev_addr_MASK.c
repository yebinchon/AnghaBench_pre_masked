
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct eth_dev {int dev_mac; } ;


 int FUNC_0 (int ,char*,int) ;
 struct eth_dev* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_0, char *VAR_1, int VAR_2)
{
 struct eth_dev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_3->dev_mac, VAR_1, VAR_2);
 if (VAR_4 + 1 < VAR_2) {
  VAR_1[VAR_4++] = '\n';
  VAR_1[VAR_4] = '\0';
 }

 return VAR_4;
}
