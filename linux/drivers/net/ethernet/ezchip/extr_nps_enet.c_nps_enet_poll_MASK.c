
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nps_enet_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct napi_struct*,int) ;
 int FUNC_1 (struct napi_struct*) ;
 struct nps_enet_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct nps_enet_priv*) ;
 int FUNC_4 (struct nps_enet_priv*,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct napi_struct *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = VAR_4->dev;
 struct nps_enet_priv *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8;

 FUNC_6(VAR_6);
 VAR_8 = FUNC_5(VAR_6);
 if ((VAR_8 < VAR_5) && FUNC_0(VAR_4, VAR_8)) {
  u32 VAR_9 = 0;


  VAR_9 |= VAR_0 << VAR_2;
  VAR_9 |= VAR_0 << VAR_3;

  FUNC_4(VAR_7, VAR_1,
     VAR_9);
  if (FUNC_3(VAR_7)) {
   FUNC_4(VAR_7, VAR_1, 0);
   FUNC_1(VAR_4);
  }
 }

 return VAR_8;
}
