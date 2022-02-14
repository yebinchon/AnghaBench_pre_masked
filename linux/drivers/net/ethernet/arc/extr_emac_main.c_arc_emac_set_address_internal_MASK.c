
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; } ;
struct arc_emac_priv {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arc_emac_priv*,int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 struct arc_emac_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct arc_emac_priv *VAR_3 = FUNC_3(VAR_2);
 unsigned int VAR_4, VAR_5;

 VAR_4 = FUNC_2(*(__le32 *)&VAR_2->dev_addr[0]);
 VAR_5 = FUNC_1(*(__le16 *)&VAR_2->dev_addr[4]);

 FUNC_0(VAR_3, VAR_1, VAR_4);
 FUNC_0(VAR_3, VAR_0, VAR_5);
}
