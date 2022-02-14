
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_ethernet {int netdev; int queue; int port; } ;
struct TYPE_4__ {scalar_t__ full_duplex; int speed; scalar_t__ link_up; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;

void FUNC_2(struct octeon_ethernet *VAR_0,
     cvmx_helper_link_info_t VAR_1)
{
 if (VAR_1.s.link_up) {
  FUNC_1("%s: %u Mbps %s duplex, port %d, queue %d\n",
          FUNC_0(VAR_0->netdev), VAR_1.s.speed,
          (VAR_1.s.full_duplex) ? "Full" : "Half",
          VAR_0->port, VAR_0->queue);
 } else {
  FUNC_1("%s: Link down\n",
          FUNC_0(VAR_0->netdev));
 }
}
