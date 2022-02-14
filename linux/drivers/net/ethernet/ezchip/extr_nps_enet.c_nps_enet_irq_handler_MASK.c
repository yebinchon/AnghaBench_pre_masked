
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nps_enet_priv {int napi; } ;
struct net_device {int dummy; } ;
typedef int s32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct nps_enet_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct nps_enet_priv*) ;
 int FUNC_5 (struct nps_enet_priv*,int ) ;
 int FUNC_6 (struct nps_enet_priv*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(s32 VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct nps_enet_priv *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9 = FUNC_5(VAR_8, VAR_2);
 u32 VAR_10 = (VAR_9 & VAR_3) >> VAR_4;

 if (FUNC_4(VAR_8) || VAR_10)
  if (FUNC_1(FUNC_2(&VAR_8->napi))) {
   FUNC_6(VAR_8, VAR_1, 0);
   FUNC_0(&VAR_8->napi);
  }

 return VAR_0;
}
