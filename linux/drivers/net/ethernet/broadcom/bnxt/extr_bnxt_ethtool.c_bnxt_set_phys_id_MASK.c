
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct hwrm_port_led_cfg_input {int num_leds; int enables; int led0_id; void* port_id; int member_0; } ;
struct bnxt_pf_info {int port_id; } ;
struct bnxt_led_cfg {int led_group_id; void* led_blink_off; void* led_blink_on; int led_state; int led_id; } ;
struct bnxt {int num_leds; TYPE_1__* leds; struct bnxt_pf_info pf; } ;
typedef int req ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
typedef void* __le16 ;
struct TYPE_2__ {int led_group_id; int led_id; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bnxt*,struct hwrm_port_led_cfg_input*,int ,int,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct bnxt*,struct hwrm_port_led_cfg_input*,int,int ) ;
 struct bnxt* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8,
       enum ethtool_phys_id_state VAR_9)
{
 struct hwrm_port_led_cfg_input VAR_10 = {0};
 struct bnxt *VAR_11 = FUNC_5(VAR_8);
 struct bnxt_pf_info *VAR_12 = &VAR_11->pf;
 struct bnxt_led_cfg *VAR_13;
 u8 VAR_14;
 __le16 VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_11->num_leds || FUNC_1(VAR_11))
  return -VAR_1;

 if (VAR_9 == VAR_2) {
  VAR_14 = VAR_6;
  VAR_15 = FUNC_3(500);
 } else if (VAR_9 == VAR_3) {
  VAR_14 = VAR_7;
  VAR_15 = FUNC_3(0);
 } else {
  return -VAR_0;
 }
 FUNC_2(VAR_11, &VAR_10, VAR_5, -1, -1);
 VAR_10.port_id = FUNC_3(VAR_12->port_id);
 VAR_10.num_leds = VAR_11->num_leds;
 VAR_13 = (struct bnxt_led_cfg *)&VAR_10.led0_id;
 for (VAR_16 = 0; VAR_16 < VAR_11->num_leds; VAR_16++, VAR_13++) {
  VAR_10.enables |= FUNC_0(VAR_16);
  VAR_13->led_id = VAR_11->leds[VAR_16].led_id;
  VAR_13->led_state = VAR_14;
  VAR_13->led_blink_on = VAR_15;
  VAR_13->led_blink_off = VAR_15;
  VAR_13->led_group_id = VAR_11->leds[VAR_16].led_group_id;
 }
 VAR_17 = FUNC_4(VAR_11, &VAR_10, sizeof(VAR_10), VAR_4);
 return VAR_17;
}
