
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nps_enet_priv {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 struct nps_enet_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nps_enet_priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, u32 VAR_2)
{
 struct nps_enet_priv *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4, VAR_5 = FUNC_0(VAR_2, sizeof(u32));


 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_2(VAR_3, VAR_0);
}
