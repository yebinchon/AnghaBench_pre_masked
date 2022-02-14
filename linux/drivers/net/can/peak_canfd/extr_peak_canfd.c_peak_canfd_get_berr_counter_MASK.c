
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct can_berr_counter {int dummy; } ;
struct peak_canfd_priv {struct can_berr_counter bec; } ;
struct net_device {int dummy; } ;


 struct peak_canfd_priv* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static int FUNC_1(const struct net_device *VAR_0,
           struct can_berr_counter *VAR_1)
{
 struct peak_canfd_priv *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->bec;
 return 0;
}
