
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ipvl_dev {int phy_dev; int port; } ;
struct ipvl_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct ipvl_addr* FUNC_1 (int ,void*,int,int) ;
 void* FUNC_2 (int ,struct sk_buff*,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ipvl_addr*,struct sk_buff**,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 struct ipvl_dev* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 const struct ipvl_dev *VAR_3 = FUNC_8(VAR_2);
 void *VAR_4;
 struct ipvl_addr *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3->port, VAR_1, &VAR_6);
 if (!VAR_4)
  goto out;

 if (!FUNC_4(VAR_3->port)) {
  VAR_5 = FUNC_1(VAR_3->port, VAR_4, VAR_6, 1);
  if (VAR_5) {
   if (FUNC_3(VAR_3->port)) {
    FUNC_0(VAR_1);
    return VAR_0;
   }
   return FUNC_6(VAR_5, &VAR_1, 1);
  }
 }
out:
 FUNC_7(VAR_1, VAR_3->phy_dev);
 return FUNC_5(VAR_1);
}
