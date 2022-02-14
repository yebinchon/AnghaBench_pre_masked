
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int mtu; } ;
struct ixgbevf_ring {int dummy; } ;
struct ixgbevf_adapter {int flags; struct net_device* netdev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbevf_ring*) ;
 int FUNC_1 (struct ixgbevf_ring*) ;
 int FUNC_2 (struct ixgbevf_ring*) ;
 int FUNC_3 (struct ixgbevf_ring*) ;

__attribute__((used)) static void FUNC_4(struct ixgbevf_adapter *VAR_5,
          struct ixgbevf_ring *VAR_6)
{
 struct net_device *VAR_7 = VAR_5->netdev;
 unsigned int VAR_8 = VAR_7->mtu + VAR_1 + VAR_0;


 FUNC_0(VAR_6);
 FUNC_1(VAR_6);

 if (VAR_5->flags & VAR_2)
  return;

 FUNC_2(VAR_6);

 if (VAR_4 < 8192) {
  if (VAR_8 <= VAR_3)
   return;

  FUNC_3(VAR_6);
 }
}
