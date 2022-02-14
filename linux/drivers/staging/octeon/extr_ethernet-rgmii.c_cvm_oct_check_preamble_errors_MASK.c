
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pcterr; } ;
union cvmx_gmxx_rxx_int_reg {TYPE_1__ s; int u64; } ;
struct octeon_ethernet {int last_speed; int port; int link_info; } ;
struct net_device {int name; } ;
struct TYPE_5__ {int speed; } ;
struct TYPE_6__ {TYPE_2__ s; int u64; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct octeon_ethernet*,int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 struct octeon_ethernet* FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct octeon_ethernet *VAR_2 = FUNC_5(VAR_1);
 cvmx_helper_link_info_t VAR_3;
 unsigned long VAR_4;

 VAR_3.u64 = VAR_2->link_info;





 FUNC_7(&VAR_0, VAR_4);

 if (VAR_3.s.speed == 10 && VAR_2->last_speed == 10) {




  int VAR_5 = FUNC_2(VAR_2->port);
  int VAR_6 = FUNC_1(VAR_2->port);
  union cvmx_gmxx_rxx_int_reg VAR_7;

  VAR_7.u64 = FUNC_4(FUNC_0
       (VAR_6, VAR_5));
  if (VAR_7.s.pcterr) {






   FUNC_3(VAR_2, 0);
   FUNC_6("%s: Using 10Mbps with software preamble removal\n",
        VAR_1->name);
  }
 } else {






  if (VAR_2->last_speed != VAR_3.s.speed)
   FUNC_3(VAR_2, 1);
  VAR_2->last_speed = VAR_3.s.speed;
 }
 FUNC_8(&VAR_0, VAR_4);
}
