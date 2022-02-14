
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct octeon_ethernet {scalar_t__ last_link; int port; int (* poll ) (struct net_device*) ;scalar_t__ link_info; } ;
struct net_device {TYPE_2__* phydev; } ;
struct TYPE_6__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_8__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;
struct TYPE_7__ {scalar_t__ link; int speed; scalar_t__ duplex; } ;


 int FUNC_0 (struct octeon_ethernet*,TYPE_3__) ;
 int FUNC_1 (int ,TYPE_3__) ;
 struct octeon_ethernet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct octeon_ethernet *VAR_1 = FUNC_2(VAR_0);
 cvmx_helper_link_info_t VAR_2;

 VAR_2.u64 = 0;
 VAR_2.s.link_up = VAR_0->phydev->link ? 1 : 0;
 VAR_2.s.full_duplex = VAR_0->phydev->duplex ? 1 : 0;
 VAR_2.s.speed = VAR_0->phydev->speed;
 VAR_1->link_info = VAR_2.u64;




 if (VAR_1->poll)
  VAR_1->poll(VAR_0);

 if (VAR_1->last_link != VAR_0->phydev->link) {
  VAR_1->last_link = VAR_0->phydev->link;
  FUNC_1(VAR_1->port, VAR_2);
  FUNC_0(VAR_1, VAR_2);
 }
}
