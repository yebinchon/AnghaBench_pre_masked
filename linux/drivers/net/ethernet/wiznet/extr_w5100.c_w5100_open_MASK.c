
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5100_priv {int link_gpio; int napi; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct w5100_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct w5100_priv*,int ,struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct w5100_priv*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 struct w5100_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_5(VAR_2, VAR_0, VAR_1, "enabling\n");
 FUNC_7(VAR_2);
 FUNC_2(&VAR_2->napi);
 FUNC_6(VAR_1);
 if (!FUNC_1(VAR_2->link_gpio) ||
     FUNC_0(VAR_2->link_gpio) != 0)
  FUNC_4(VAR_1);
 return 0;
}
