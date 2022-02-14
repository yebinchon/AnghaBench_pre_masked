
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct e1000_tx_ring {int dummy; } ;


 int FUNC_0 (struct e1000_tx_ring*) ;
 int FUNC_1 (struct net_device*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
          struct e1000_tx_ring *VAR_1, int VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_1) >= VAR_2))
  return 0;
 return FUNC_1(VAR_0, VAR_2);
}
