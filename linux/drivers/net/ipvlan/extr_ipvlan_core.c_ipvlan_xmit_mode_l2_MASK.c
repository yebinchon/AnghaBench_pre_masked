
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct net_device {int dummy; } ;
struct ipvl_dev {int phy_dev; int port; } ;
struct ipvl_addr {int dummy; } ;
struct ethhdr {int h_dest; int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct ethhdr* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct ipvl_addr* FUNC_5 (int ,void*,int,int) ;
 void* FUNC_6 (int ,struct sk_buff*,int*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct sk_buff*,int) ;
 int FUNC_10 (struct ipvl_addr*,struct sk_buff**,int) ;
 int FUNC_11 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 struct ipvl_dev* FUNC_13 (struct net_device*) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 const struct ipvl_dev *VAR_5 = FUNC_13(VAR_4);
 struct ethhdr *VAR_6 = FUNC_3(VAR_3);
 struct ipvl_addr *VAR_7;
 void *VAR_8;
 int VAR_9;

 if (!FUNC_8(VAR_5->port) &&
     FUNC_4(VAR_6->h_dest, VAR_6->h_source)) {
  VAR_8 = FUNC_6(VAR_5->port, VAR_3, &VAR_9);
  if (VAR_8) {
   VAR_7 = FUNC_5(VAR_5->port, VAR_8, VAR_9, 1);
   if (VAR_7) {
    if (FUNC_7(VAR_5->port)) {
     FUNC_0(VAR_3);
     return VAR_1;
    }
    return FUNC_10(VAR_7, &VAR_3, 1);
   }
  }
  VAR_3 = FUNC_14(VAR_3, VAR_0);
  if (!VAR_3)
   return VAR_1;






  return FUNC_1(VAR_5->phy_dev, VAR_3);

 } else if (FUNC_12(VAR_6->h_dest)) {
  FUNC_11(VAR_3, ((void*)0));
  FUNC_9(VAR_5->port, VAR_3, 1);
  return VAR_2;
 }

 VAR_3->dev = VAR_5->phy_dev;
 return FUNC_2(VAR_3);
}
