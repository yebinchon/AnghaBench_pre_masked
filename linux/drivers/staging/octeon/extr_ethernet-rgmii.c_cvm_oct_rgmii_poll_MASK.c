
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct octeon_ethernet {scalar_t__ link_info; int port; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ link_up; } ;
struct TYPE_7__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct octeon_ethernet*,TYPE_2__) ;
 TYPE_2__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__) ;
 scalar_t__ FUNC_4 (int) ;
 struct octeon_ethernet* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_0)
{
 struct octeon_ethernet *VAR_1 = FUNC_5(VAR_0);
 cvmx_helper_link_info_t VAR_2;
 bool VAR_3;

 VAR_2 = FUNC_2(VAR_1->port);
 if (VAR_1->link_info != VAR_2.u64 &&
     FUNC_3(VAR_1->port, VAR_2))
  VAR_2.u64 = VAR_1->link_info;
 VAR_3 = VAR_1->link_info != VAR_2.u64;
 VAR_1->link_info = VAR_2.u64;

 FUNC_0(VAR_0);

 if (FUNC_4(!VAR_3))
  return;


 if (VAR_2.s.link_up) {
  if (!FUNC_7(VAR_0))
   FUNC_8(VAR_0);
 } else if (FUNC_7(VAR_0)) {
  FUNC_6(VAR_0);
 }
 FUNC_1(VAR_1, VAR_2);
}
