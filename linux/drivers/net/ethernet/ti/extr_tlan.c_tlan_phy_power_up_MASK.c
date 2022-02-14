
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tlan_priv {size_t phy_num; int * phy; } ;
struct net_device {int base_addr; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct tlan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,int ,int ,int ) ;
 int FUNC_5 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4)
{
 struct tlan_priv *VAR_5 = FUNC_2(VAR_4);
 u16 VAR_6;

 FUNC_0(VAR_2, "%s: Powering up PHY.\n", VAR_4->name);
 FUNC_3(VAR_4->base_addr);
 VAR_6 = VAR_0;
 FUNC_4(VAR_4, VAR_5->phy[VAR_5->phy_num], VAR_1, VAR_6);
 FUNC_3(VAR_4->base_addr);




 FUNC_5(VAR_4, FUNC_1(500), VAR_3);

}
