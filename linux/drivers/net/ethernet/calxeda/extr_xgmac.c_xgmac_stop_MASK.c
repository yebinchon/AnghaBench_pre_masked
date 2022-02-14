
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {scalar_t__ base; int napi; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct xgmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct xgmac_priv*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct xgmac_priv *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_2->base + VAR_0))
  FUNC_0(&VAR_2->napi);

 FUNC_4(0, VAR_2->base + VAR_0);

 FUNC_2(VAR_1);


 FUNC_6(VAR_2->base);


 FUNC_5(VAR_2);

 return 0;
}
