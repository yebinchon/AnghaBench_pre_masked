
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int en; int pknd; } ;
union cvmx_gmxx_prtx_cfg {int u64; TYPE_1__ s; } ;
struct octeon_ethernet {void (* poll ) (struct net_device*) ;int port; } ;
struct net_device {TYPE_4__* phydev; } ;
struct TYPE_7__ {int link_up; } ;
struct TYPE_8__ {TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;
struct TYPE_9__ {scalar_t__ link; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 TYPE_3__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct octeon_ethernet* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (TYPE_4__*) ;

int FUNC_13(struct net_device *VAR_1,
   void (*VAR_2)(struct net_device *))
{
 union cvmx_gmxx_prtx_cfg VAR_3;
 struct octeon_ethernet *VAR_4 = FUNC_8(VAR_1);
 int VAR_5 = FUNC_2(VAR_4->port);
 int VAR_6 = FUNC_1(VAR_4->port);
 cvmx_helper_link_info_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_3.u64 = FUNC_6(FUNC_0(VAR_6, VAR_5));
 VAR_3.s.en = 1;
 if (FUNC_10(VAR_0))
  VAR_3.s.pknd = VAR_4->port;
 FUNC_7(FUNC_0(VAR_6, VAR_5), VAR_3.u64);

 if (FUNC_11())
  return 0;

 if (VAR_1->phydev) {
  int VAR_9 = FUNC_12(VAR_1->phydev);

  if (VAR_9 == 0 && VAR_1->phydev->link == 0)
   FUNC_9(VAR_1);
  FUNC_3(VAR_1);
 } else {
  VAR_7 = FUNC_5(VAR_4->port);
  if (!VAR_7.s.link_up)
   FUNC_9(VAR_1);
  VAR_4->poll = VAR_2;
  VAR_2(VAR_1);
 }

 return 0;
}
