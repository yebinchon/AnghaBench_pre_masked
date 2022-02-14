
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_berr_counter {int dummy; } ;
struct c_can_priv {int dummy; } ;


 int FUNC_0 (struct net_device const*,struct can_berr_counter*) ;
 int FUNC_1 (struct c_can_priv*) ;
 int FUNC_2 (struct c_can_priv*) ;
 struct c_can_priv* FUNC_3 (struct net_device const*) ;

__attribute__((used)) static int FUNC_4(const struct net_device *VAR_0,
      struct can_berr_counter *VAR_1)
{
 struct c_can_priv *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_2);

 return VAR_3;
}
