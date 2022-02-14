
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gve_priv {int dummy; } ;


 int FUNC_0 (struct gve_priv*) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*) ;
 scalar_t__ FUNC_4 (struct gve_priv*) ;
 scalar_t__ FUNC_5 (struct gve_priv*) ;
 int FUNC_6 (struct gve_priv*,int) ;
 int FUNC_7 (struct gve_priv*,int) ;
 int FUNC_8 (struct gve_priv*) ;
 int FUNC_9 (struct gve_priv*) ;
 struct gve_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_0)
{
 struct gve_priv *VAR_1 = FUNC_10(VAR_0);
 int VAR_2;

 FUNC_11(VAR_0);
 if (FUNC_4(VAR_1)) {
  FUNC_8(VAR_1);
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
   goto err;
  VAR_2 = FUNC_9(VAR_1);
  if (VAR_2)
   goto err;
  FUNC_0(VAR_1);
 }

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 return 0;

err:



 if (FUNC_5(VAR_1))
  return VAR_2;

 FUNC_6(VAR_1, 1);
 return FUNC_7(VAR_1, 0);
}
