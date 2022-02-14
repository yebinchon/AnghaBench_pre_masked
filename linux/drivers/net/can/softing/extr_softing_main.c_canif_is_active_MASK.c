
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_priv {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 struct can_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_2(struct net_device *VAR_1)
{
 struct can_priv *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_1))
  return 0;
 return (VAR_2->state <= VAR_0);
}
