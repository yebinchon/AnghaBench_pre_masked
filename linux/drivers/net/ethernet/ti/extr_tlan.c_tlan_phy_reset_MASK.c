
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tlan_priv {int* phy; size_t phy_num; } ;
struct net_device {int base_addr; int name; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct tlan_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct net_device*,int,int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*,int,int ,int) ;
 int FUNC_8 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_7)
{
 struct tlan_priv *VAR_8 = FUNC_3(VAR_7);
 u16 VAR_9;
 u16 VAR_10;
 unsigned long VAR_11 = VAR_6 + VAR_0;

 VAR_9 = VAR_8->phy[VAR_8->phy_num];

 FUNC_0(VAR_4, "%s: Resetting PHY.\n", VAR_7->name);
 FUNC_6(VAR_7->base_addr);
 VAR_10 = VAR_1 | VAR_2;
 FUNC_7(VAR_7, VAR_9, VAR_3, VAR_10);
 do {
  FUNC_5(VAR_7, VAR_9, VAR_3, &VAR_10);
  if (FUNC_4(VAR_6, VAR_11)) {
   FUNC_2(VAR_7, "PHY reset timeout\n");
   return;
  }
 } while (VAR_10 & VAR_2);





 FUNC_8(VAR_7, FUNC_1(50), VAR_5);

}
