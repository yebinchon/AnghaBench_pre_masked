
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_loopback_state* loopback_selftest; } ;
struct efx_loopback_state {scalar_t__ packet_count; int rx_good; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_0)
{
 struct efx_loopback_state *VAR_1 = VAR_0->loopback_selftest;

 return FUNC_0(&VAR_1->rx_good) == VAR_1->packet_count;
}
