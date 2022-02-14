
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_net_priv {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct xlr_net_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xlr_net_priv*,void*) ;
 void* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 void *VAR_3;
 struct xlr_net_priv *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1 / 4; VAR_5++) {
  VAR_3 = FUNC_3();
  if (!VAR_3)
   return -VAR_0;
  FUNC_2(VAR_4, VAR_3);
 }
 FUNC_0(VAR_2, "Rx ring setup done\n");
 return 0;
}
