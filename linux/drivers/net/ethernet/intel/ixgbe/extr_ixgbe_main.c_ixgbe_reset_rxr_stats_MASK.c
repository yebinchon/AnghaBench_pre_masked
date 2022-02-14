
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ring {int rx_stats; int stats; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ixgbe_ring *VAR_0)
{
 FUNC_0(&VAR_0->stats, 0, sizeof(VAR_0->stats));
 FUNC_0(&VAR_0->rx_stats, 0, sizeof(VAR_0->rx_stats));
}
