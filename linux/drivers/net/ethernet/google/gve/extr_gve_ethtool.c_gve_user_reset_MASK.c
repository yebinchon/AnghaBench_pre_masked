
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct gve_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gve_priv*,int) ;
 struct gve_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 *VAR_3)
{
 struct gve_priv *VAR_4 = FUNC_1(VAR_2);

 if (*VAR_3 == VAR_1) {
  *VAR_3 = 0;
  return FUNC_0(VAR_4, 1);
 }

 return -VAR_0;
}
