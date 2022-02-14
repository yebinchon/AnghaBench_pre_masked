
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ipvl_port {int mode; } ;
struct ipvl_dev {int phy_dev; } ;
struct ethhdr {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 struct ipvl_port* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct ipvl_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct ipvl_dev *VAR_3 = FUNC_5(VAR_2);
 struct ipvl_port *VAR_4 = FUNC_1(VAR_3->phy_dev);

 if (!VAR_4)
  goto out;

 if (FUNC_7(!FUNC_6(VAR_1, sizeof(struct ethhdr))))
  goto out;

 switch(VAR_4->mode) {
 case 130:
  return FUNC_2(VAR_1, VAR_2);
 case 129:



  return FUNC_3(VAR_1, VAR_2);
 }


 FUNC_0(1, "ipvlan_queue_xmit() called for mode = [%hx]\n",
     VAR_4->mode);
out:
 FUNC_4(VAR_1);
 return VAR_0;
}
