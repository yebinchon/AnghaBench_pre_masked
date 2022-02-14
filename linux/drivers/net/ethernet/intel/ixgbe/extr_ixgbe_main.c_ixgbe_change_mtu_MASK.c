
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct ixgbe_ring {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int num_rx_queues; int flags; TYPE_2__ hw; struct ixgbe_ring** rx_ring; scalar_t__ xdp_prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_ring*) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8, int VAR_9)
{
 struct ixgbe_adapter *VAR_10 = FUNC_4(VAR_8);

 if (VAR_10->xdp_prog) {
  int VAR_11 = VAR_9 + VAR_3 + VAR_2 +
         VAR_5;
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_10->num_rx_queues; VAR_12++) {
   struct ixgbe_ring *VAR_13 = VAR_10->rx_ring[VAR_12];

   if (VAR_11 > FUNC_3(VAR_13)) {
    FUNC_1(VAR_7, "Requested MTU size is not supported with XDP\n");
    return -VAR_0;
   }
  }
 }






 if ((VAR_10->flags & VAR_4) &&
     (VAR_10->hw.mac.type == VAR_6) &&
     (VAR_9 > VAR_1))
  FUNC_1(VAR_7, "Setting MTU > 1500 will disable legacy VFs\n");

 FUNC_0(VAR_7, "changing MTU from %d to %d\n", VAR_8->mtu, VAR_9);


 VAR_8->mtu = VAR_9;

 if (FUNC_5(VAR_8))
  FUNC_2(VAR_10);

 return 0;
}
