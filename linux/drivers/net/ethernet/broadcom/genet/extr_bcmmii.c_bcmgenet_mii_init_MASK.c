
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcmgenet_priv {int dummy; } ;


 int FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct bcmgenet_priv*) ;
 struct bcmgenet_priv* FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_0)
{
 struct bcmgenet_priv *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  goto out;

 return 0;

out:
 FUNC_1(VAR_0);
 return VAR_2;
}
