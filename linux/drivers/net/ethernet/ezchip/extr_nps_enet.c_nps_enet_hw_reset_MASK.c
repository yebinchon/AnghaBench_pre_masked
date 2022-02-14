
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nps_enet_priv {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nps_enet_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nps_enet_priv*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6)
{
 struct nps_enet_priv *VAR_7 = FUNC_0(VAR_6);
 u32 VAR_8 = 0, VAR_9 = 0;


 VAR_8 |= VAR_0 << VAR_5;
 FUNC_1(VAR_7, VAR_1, VAR_8);
 FUNC_2(10, 20);
 VAR_8 = 0;
 FUNC_1(VAR_7, VAR_1, VAR_8);


 VAR_9 |= VAR_0 << VAR_4;
 VAR_9 |= VAR_0 << VAR_3;
 FUNC_1(VAR_7, VAR_2,
    VAR_9);
 FUNC_2(10, 20);
 VAR_9 = 0;
 FUNC_1(VAR_7, VAR_2,
    VAR_9);
}
