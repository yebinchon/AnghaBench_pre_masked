
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {void* state; } ;
struct TYPE_5__ {scalar_t__ update_tx_mode_flg; scalar_t__ update_rx_mode_flg; } ;
struct TYPE_4__ {void* state; } ;
struct vport_update_ramrod_data {TYPE_3__ tx_mode; TYPE_2__ common; TYPE_1__ rx_mode; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_accept_flags {int rx_accept_filter; int tx_accept_filter; scalar_t__ update_tx_mode_config; scalar_t__ update_rx_mode_config; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int ,int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct qed_hwfn *VAR_19,
     struct vport_update_ramrod_data *VAR_20,
     struct qed_filter_accept_flags VAR_21)
{
 VAR_20->common.update_rx_mode_flg =
  VAR_21.update_rx_mode_config;

 VAR_20->common.update_tx_mode_flg =
  VAR_21.update_tx_mode_config;


 if (VAR_20->common.update_rx_mode_flg) {
  u8 VAR_22 = VAR_21.rx_accept_filter;
  u16 VAR_23 = 0;

  FUNC_1(VAR_23, VAR_5,
     !(!!(VAR_22 & VAR_16) ||
       !!(VAR_22 & VAR_17)));

  FUNC_1(VAR_23, VAR_4,
     !!(VAR_22 & VAR_17));

  FUNC_1(VAR_23, VAR_3,
     !(!!(VAR_22 & VAR_13) ||
       !!(VAR_22 & VAR_14)));

  FUNC_1(VAR_23, VAR_2,
     (!!(VAR_22 & VAR_13) &&
      !!(VAR_22 & VAR_14)));

  FUNC_1(VAR_23, VAR_1,
     !!(VAR_22 & VAR_12));

  FUNC_1(VAR_23, VAR_0,
     !!(VAR_22 & VAR_11));

  VAR_20->rx_mode.state = FUNC_2(VAR_23);
  FUNC_0(VAR_19, VAR_18,
      "p_ramrod->rx_mode.state = 0x%x\n", VAR_23);
 }


 if (VAR_20->common.update_tx_mode_flg) {
  u8 VAR_24 = VAR_21.tx_accept_filter;
  u16 VAR_25 = 0;

  FUNC_1(VAR_25, VAR_10,
     !!(VAR_24 & VAR_15));

  FUNC_1(VAR_25, VAR_8,
     !!(VAR_24 & VAR_15));

  FUNC_1(VAR_25, VAR_7,
     (!!(VAR_24 & VAR_13) &&
      !!(VAR_24 & VAR_14)));

  FUNC_1(VAR_25, VAR_9,
     (!!(VAR_24 & VAR_16) &&
      !!(VAR_24 & VAR_17)));

  FUNC_1(VAR_25, VAR_6,
     !!(VAR_24 & VAR_12));

  VAR_20->tx_mode.state = FUNC_2(VAR_25);
  FUNC_0(VAR_19, VAR_18,
      "p_ramrod->tx_mode.state = 0x%x\n", VAR_25);
 }
}
