
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {scalar_t__ reg_base; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct sja1000_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sja1000_priv*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct sja1000_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->reg_base && FUNC_2(VAR_1)) {
  FUNC_0(VAR_0, "probing failed\n");
  return 0;
 }
 return -1;
}
