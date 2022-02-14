
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhine_private {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_if_info {int force_media; struct net_device* dev; } ;


 int VAR_0 ;
 struct rhine_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rhine_private*,int ,struct net_device*,char*,int ,int ) ;
 int FUNC_4 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct mii_if_info *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;
 struct rhine_private *VAR_3 = FUNC_0(VAR_2);

 if (VAR_1->force_media) {

  if (!FUNC_1(VAR_2))
   FUNC_2(VAR_2);
 }

 FUNC_4(VAR_2, 0);

 FUNC_3(VAR_3, VAR_0, VAR_2, "force_media %d, carrier %d\n",
     VAR_1->force_media, FUNC_1(VAR_2));
}
