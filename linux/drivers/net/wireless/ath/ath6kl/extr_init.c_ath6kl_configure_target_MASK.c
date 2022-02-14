
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int board_ext_data_addr; int reserved_ram_size; int uarttx_pin; int uarttx_rate; int refclk_hz; } ;
struct TYPE_3__ {scalar_t__ target_ver; } ;
struct ath6kl {int conf_flags; int vif_max; int max_norm_iface; scalar_t__ target_type; TYPE_2__ hw; TYPE_1__ version; scalar_t__ p2p; int fw_capabilities; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (struct ath6kl*,int ,int*) ;
 scalar_t__ FUNC_1 (struct ath6kl*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct ath6kl*,int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6(struct ath6kl *VAR_27)
{
 u32 VAR_28, VAR_29;
 u8 VAR_30, VAR_31 = 0, VAR_32 = 0;
 int VAR_33, VAR_34;

 VAR_28 = !!(VAR_27->conf_flags & VAR_2);
 if (FUNC_1(VAR_27, VAR_26, VAR_28)) {
  FUNC_3("bmi_write_memory for uart debug failed\n");
  return -VAR_5;
 }
 VAR_30 = VAR_8;

 for (VAR_33 = 0; VAR_33 < VAR_27->vif_max; VAR_33++)
  VAR_31 |= VAR_30 << (VAR_33 * VAR_7);
 if (FUNC_5(VAR_4,
       VAR_27->fw_capabilities)) {
  for (VAR_33 = 0; VAR_33 < VAR_27->vif_max; VAR_33++)
   VAR_32 |= VAR_12 <<
    (VAR_33 * VAR_10);
 } else {
  for (VAR_33 = 0; VAR_33 < VAR_27->max_norm_iface; VAR_33++)
   VAR_32 |= VAR_11 <<
    (VAR_33 * VAR_10);

  for (VAR_33 = VAR_27->max_norm_iface; VAR_33 < VAR_27->vif_max; VAR_33++)
   VAR_32 |= VAR_12 <<
    (VAR_33 * VAR_10);

  if (VAR_27->p2p && VAR_27->vif_max == 1)
   VAR_32 = VAR_12;
 }

 if (FUNC_1(VAR_27, VAR_19,
      VAR_16) != 0) {
  FUNC_3("bmi_write_memory for htc version failed\n");
  return -VAR_5;
 }


 VAR_28 = 0;

 if (FUNC_0(VAR_27, VAR_24, &VAR_28) != 0) {
  FUNC_3("bmi_read_memory for setting fwmode failed\n");
  return -VAR_5;
 }

 VAR_28 |= (VAR_27->vif_max << VAR_15);
 VAR_28 |= VAR_31 << VAR_9;
 VAR_28 |= VAR_32 << VAR_13;

 VAR_28 |= (0 << VAR_14);
 VAR_28 |= (0 << VAR_6);

 if (FUNC_1(VAR_27, VAR_24, VAR_28) != 0) {
  FUNC_3("bmi_write_memory for setting fwmode failed\n");
  return -VAR_5;
 }

 FUNC_2(VAR_3, "firmware mode set\n");
 if ((VAR_27->target_type == VAR_18) ||
     (VAR_27->version.target_ver == VAR_0) ||
     (VAR_27->version.target_ver == VAR_1)) {
  VAR_28 = VAR_27->hw.board_ext_data_addr;
  VAR_29 = VAR_27->hw.reserved_ram_size;

  if (FUNC_1(VAR_27, VAR_20, VAR_28) != 0) {
   FUNC_3("bmi_write_memory for hi_board_ext_data failed\n");
   return -VAR_5;
  }

  if (FUNC_1(VAR_27, VAR_23,
       VAR_29) != 0) {
   FUNC_3("bmi_write_memory for hi_end_ram_reserve_sz failed\n");
   return -VAR_5;
  }
 }


 if (FUNC_4(VAR_27, VAR_17, 0))

  return -VAR_5;


 VAR_34 = FUNC_1(VAR_27, VAR_21,
           VAR_27->hw.uarttx_pin);
 if (VAR_34)
  return VAR_34;


 if (VAR_27->conf_flags & VAR_2) {
  VAR_34 = FUNC_1(VAR_27, VAR_22,
            VAR_27->hw.uarttx_rate);
  if (VAR_34)
   return VAR_34;
 }


 if (VAR_27->hw.refclk_hz != 0) {
  VAR_34 = FUNC_1(VAR_27, VAR_25,
            VAR_27->hw.refclk_hz);
  if (VAR_34)
   return VAR_34;
 }

 return 0;
}
