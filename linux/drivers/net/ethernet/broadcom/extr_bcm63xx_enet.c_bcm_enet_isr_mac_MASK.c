
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bcm_enet_priv {int mib_update_task; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_enet_priv*,int ) ;
 int FUNC_1 (struct bcm_enet_priv*,int,int ) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7;
 struct bcm_enet_priv *VAR_8;
 u32 VAR_9;

 VAR_7 = VAR_6;
 VAR_8 = FUNC_2(VAR_7);

 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (!(VAR_9 & VAR_1))
  return VAR_4;


 FUNC_1(VAR_8, VAR_1, VAR_2);
 FUNC_1(VAR_8, 0, VAR_0);


 FUNC_3(&VAR_8->mib_update_task);

 return VAR_3;
}
