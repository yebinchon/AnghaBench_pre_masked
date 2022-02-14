
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5100_priv {int napi; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct w5100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct w5100_priv*,int ,struct net_device*,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct w5100_priv*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct w5100_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_2, VAR_0, VAR_1, "shutting down\n");
 FUNC_5(VAR_2);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_0(&VAR_2->napi);
 return 0;
}
