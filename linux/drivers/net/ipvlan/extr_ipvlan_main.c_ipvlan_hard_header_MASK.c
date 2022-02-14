
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dev_addr; } ;
struct ipvl_dev {struct net_device* phy_dev; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*,unsigned short,void const*,int ,unsigned int) ;
 struct ipvl_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct net_device *VAR_1,
         unsigned short VAR_2, const void *VAR_3,
         const void *VAR_4, unsigned VAR_5)
{
 const struct ipvl_dev *VAR_6 = FUNC_1(VAR_1);
 struct net_device *VAR_7 = VAR_6->phy_dev;





 return FUNC_0(VAR_0, VAR_7, VAR_2, VAR_3,
          VAR_4 ? : VAR_7->dev_addr, VAR_5);
}
