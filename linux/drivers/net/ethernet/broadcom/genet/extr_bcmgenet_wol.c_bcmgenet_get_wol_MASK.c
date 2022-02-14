
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; int * sopass; } ;
struct bcmgenet_priv {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 struct bcmgenet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct bcmgenet_priv *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7;

 VAR_5->supported = VAR_2 | VAR_3;
 VAR_5->wolopts = VAR_6->wolopts;
 FUNC_1(VAR_5->sopass, 0, sizeof(VAR_5->sopass));

 if (VAR_5->wolopts & VAR_3) {
  VAR_7 = FUNC_0(VAR_6, VAR_1);
  FUNC_3(VAR_7, &VAR_5->sopass[0]);
  VAR_7 = FUNC_0(VAR_6, VAR_0);
  FUNC_4(VAR_7, &VAR_5->sopass[2]);
 }
}
