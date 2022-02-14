
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eee {int tx_lpi_timer; scalar_t__ tx_lpi_enabled; scalar_t__ eee_enabled; int advertised; } ;
struct TYPE_4__ {int eee_mode; } ;
struct TYPE_3__ {int eee_status; } ;
struct bnx2x {TYPE_2__ link_params; TYPE_1__ link_vars; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int ) ;
 int * VAR_13 ;
 struct bnx2x* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_14, struct ethtool_eee *VAR_15)
{
 struct bnx2x *VAR_16 = FUNC_8(VAR_14);
 u32 VAR_17;
 u32 VAR_18;

 if (FUNC_2(VAR_16))
  return 0;

 if (!FUNC_3(VAR_16, VAR_13[FUNC_0(VAR_16)])) {
  FUNC_1(VAR_0, "BC Version does not support EEE\n");
  return -VAR_8;
 }

 VAR_17 = VAR_16->link_vars.eee_status;

 if (!(VAR_17 & VAR_11)) {
  FUNC_1(VAR_0, "Board does not support EEE!\n");
  return -VAR_8;
 }

 VAR_18 = FUNC_4(VAR_15->advertised,
          VAR_10);
 if ((VAR_18 != (VAR_17 & VAR_9))) {
  FUNC_1(VAR_0,
     "Direct manipulation of EEE advertisement is not supported\n");
  return -VAR_7;
 }

 if (VAR_15->tx_lpi_timer > VAR_6) {
  FUNC_1(VAR_0,
     "Maximal Tx Lpi timer supported is %x(u)\n",
     VAR_6);
  return -VAR_7;
 }
 if (VAR_15->tx_lpi_enabled &&
     (VAR_15->tx_lpi_timer < VAR_3)) {
  FUNC_1(VAR_0,
     "Minimal Tx Lpi timer supported is %d(u)\n",
     VAR_3);
  return -VAR_7;
 }


 if (VAR_15->eee_enabled)
  VAR_16->link_params.eee_mode |= VAR_1;
 else
  VAR_16->link_params.eee_mode &= ~VAR_1;

 if (VAR_15->tx_lpi_enabled)
  VAR_16->link_params.eee_mode |= VAR_2;
 else
  VAR_16->link_params.eee_mode &= ~VAR_2;

 VAR_16->link_params.eee_mode &= ~VAR_6;
 VAR_16->link_params.eee_mode |= (VAR_15->tx_lpi_timer &
        VAR_6) |
        VAR_5 |
        VAR_4;


 if (FUNC_9(VAR_14)) {
  FUNC_7(VAR_16, VAR_12);
  FUNC_5(VAR_16);
  FUNC_6(VAR_16);
 }

 return 0;
}
