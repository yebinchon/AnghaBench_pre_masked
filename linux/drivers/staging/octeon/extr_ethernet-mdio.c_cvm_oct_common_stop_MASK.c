
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ en; } ;
union cvmx_gmxx_prtx_cfg {int u64; TYPE_1__ s; } ;
struct octeon_ethernet {int port; scalar_t__ last_link; int * poll; } ;
struct net_device {scalar_t__ phydev; } ;
struct TYPE_6__ {scalar_t__ u64; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct octeon_ethernet*,TYPE_2__) ;
 int FUNC_4 (int ,TYPE_2__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 struct octeon_ethernet* FUNC_7 (struct net_device*) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(struct net_device *VAR_0)
{
 struct octeon_ethernet *VAR_1 = FUNC_7(VAR_0);
 int VAR_2 = FUNC_2(VAR_1->port);
 cvmx_helper_link_info_t VAR_3;
 union cvmx_gmxx_prtx_cfg VAR_4;
 int VAR_5 = FUNC_1(VAR_1->port);

 VAR_4.u64 = FUNC_5(FUNC_0(VAR_5, VAR_2));
 VAR_4.s.en = 0;
 FUNC_6(FUNC_0(VAR_5, VAR_2), VAR_4.u64);

 VAR_1->poll = ((void*)0);

 if (VAR_0->phydev)
  FUNC_8(VAR_0->phydev);

 if (VAR_1->last_link) {
  VAR_3.u64 = 0;
  VAR_1->last_link = 0;

  FUNC_4(VAR_1->port, VAR_3);
  FUNC_3(VAR_1, VAR_3);
 }
 return 0;
}
