
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbe_ring {int state; } ;
struct ixgbe_adapter {struct ixgbe_ring** xdp_ring; scalar_t__ xdp_prog; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_ring*) ;
 int FUNC_1 (struct ixgbe_adapter*,struct xdp_frame*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 size_t FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_8, int VAR_9,
     struct xdp_frame **VAR_10, u32 VAR_11)
{
 struct ixgbe_adapter *VAR_12 = FUNC_2(VAR_8);
 struct ixgbe_ring *VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 if (FUNC_5(FUNC_4(VAR_6, &VAR_12->state)))
  return -VAR_1;

 if (FUNC_5(VAR_11 & ~VAR_4))
  return -VAR_0;




 VAR_13 = VAR_12->xdp_prog ? VAR_12->xdp_ring[FUNC_3()] : ((void*)0);
 if (FUNC_5(!VAR_13))
  return -VAR_2;

 if (FUNC_5(FUNC_4(VAR_7, &VAR_13->state)))
  return -VAR_2;

 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  struct xdp_frame *VAR_16 = VAR_10[VAR_15];
  int VAR_17;

  VAR_17 = FUNC_1(VAR_12, VAR_16);
  if (VAR_17 != VAR_3) {
   FUNC_6(VAR_16);
   VAR_14++;
  }
 }

 if (FUNC_5(VAR_11 & VAR_5))
  FUNC_0(VAR_13);

 return VAR_9 - VAR_14;
}
