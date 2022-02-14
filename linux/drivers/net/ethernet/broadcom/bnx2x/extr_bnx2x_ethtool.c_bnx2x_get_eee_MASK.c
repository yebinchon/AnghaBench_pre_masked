
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eee {int tx_lpi_timer; int eee_enabled; int eee_active; int tx_lpi_enabled; void* lp_advertised; void* advertised; void* supported; } ;
struct TYPE_2__ {int eee_status; } ;
struct bnx2x {TYPE_1__ link_vars; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int) ;
 int * VAR_12 ;
 struct bnx2x* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_13, struct ethtool_eee *VAR_14)
{
 struct bnx2x *VAR_15 = FUNC_4(VAR_13);
 u32 VAR_16;

 if (!FUNC_2(VAR_15, VAR_12[FUNC_0(VAR_15)])) {
  FUNC_1(VAR_0, "BC Version does not support EEE\n");
  return -VAR_1;
 }

 VAR_16 = VAR_15->link_vars.eee_status;

 VAR_14->supported =
  FUNC_3((VAR_16 & VAR_9) >>
     VAR_10);

 VAR_14->advertised =
  FUNC_3((VAR_16 & VAR_3) >>
     VAR_4);
 VAR_14->lp_advertised =
  FUNC_3((VAR_16 & VAR_6) >>
     VAR_7);


 VAR_14->tx_lpi_timer = (VAR_16 & VAR_11) << 4;

 VAR_14->eee_enabled = (VAR_16 & VAR_8) ? 1 : 0;
 VAR_14->eee_active = (VAR_16 & VAR_2) ? 1 : 0;
 VAR_14->tx_lpi_enabled = (VAR_16 & VAR_5) ? 1 : 0;

 return 0;
}
