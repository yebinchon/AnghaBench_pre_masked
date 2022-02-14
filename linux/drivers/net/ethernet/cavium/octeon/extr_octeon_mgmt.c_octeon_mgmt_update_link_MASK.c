
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; } ;
union cvmx_agl_prtx_ctl {TYPE_2__ s; void* u64; } ;
struct TYPE_6__ {int clk_cnt; } ;
union cvmx_agl_gmx_txx_clk {void* u64; TYPE_3__ s; } ;
struct TYPE_4__ {int duplex; int speed; int slottime; int burst; int speed_msb; } ;
union cvmx_agl_gmx_prtx_cfg {void* u64; TYPE_1__ s; } ;
struct phy_device {int duplex; int speed; int link; } ;
struct octeon_mgmt {scalar_t__ agl; scalar_t__ agl_prt_ctl; struct net_device* netdev; } ;
struct net_device {struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;

__attribute__((used)) static void FUNC_3(struct octeon_mgmt *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct phy_device *VAR_5 = VAR_4->phydev;
 union cvmx_agl_gmx_prtx_cfg VAR_6;

 VAR_6.u64 = FUNC_1(VAR_3->agl + VAR_0);

 if (!VAR_5->link)
  VAR_6.s.duplex = 1;
 else
  VAR_6.s.duplex = VAR_5->duplex;

 switch (VAR_5->speed) {
 case 10:
  VAR_6.s.speed = 0;
  VAR_6.s.slottime = 0;

  if (FUNC_0(VAR_2)) {
   VAR_6.s.burst = 1;
   VAR_6.s.speed_msb = 1;
  }
  break;
 case 100:
  VAR_6.s.speed = 0;
  VAR_6.s.slottime = 0;

  if (FUNC_0(VAR_2)) {
   VAR_6.s.burst = 1;
   VAR_6.s.speed_msb = 0;
  }
  break;
 case 1000:

  if (FUNC_0(VAR_2)) {
   VAR_6.s.speed = 1;
   VAR_6.s.speed_msb = 0;

   VAR_6.s.slottime = 1;
   VAR_6.s.burst = VAR_5->duplex;
  }
  break;
 case 0:
 default:
  break;
 }


 FUNC_2(VAR_3->agl + VAR_0, VAR_6.u64);


 VAR_6.u64 = FUNC_1(VAR_3->agl + VAR_0);

 if (FUNC_0(VAR_2)) {
  union cvmx_agl_gmx_txx_clk VAR_7;
  union cvmx_agl_prtx_ctl VAR_8;

  VAR_8.u64 = FUNC_1(VAR_3->agl_prt_ctl);
  VAR_7.u64 = FUNC_1(VAR_3->agl + VAR_1);

  VAR_7.s.clk_cnt = 1;
  if (VAR_8.s.mode == 0) {
   if (VAR_5->speed == 10)
    VAR_7.s.clk_cnt = 50;
   else if (VAR_5->speed == 100)
    VAR_7.s.clk_cnt = 5;
  }
  FUNC_2(VAR_3->agl + VAR_1, VAR_7.u64);
 }
}
