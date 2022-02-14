
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_port_led_qcaps_output {scalar_t__ num_leds; int led0_id; } ;
struct hwrm_port_led_qcaps_input {int port_id; int member_0; } ;
struct bnxt_pf_info {int port_id; } ;
struct bnxt_led_info {int led_group_id; int led_state_caps; } ;
struct bnxt {scalar_t__ num_leds; int hwrm_spec_code; int hwrm_cmd_lock; struct bnxt_led_info* leds; struct bnxt_pf_info pf; struct hwrm_port_led_qcaps_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnxt*,struct hwrm_port_led_qcaps_input*,int,int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_port_led_qcaps_input*,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bnxt_led_info*,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct bnxt *VAR_3)
{
 struct hwrm_port_led_qcaps_output *VAR_4 = VAR_3->hwrm_cmd_resp_addr;
 struct hwrm_port_led_qcaps_input VAR_5 = {0};
 struct bnxt_pf_info *VAR_6 = &VAR_3->pf;
 int VAR_7;

 VAR_3->num_leds = 0;
 if (FUNC_1(VAR_3) || VAR_3->hwrm_spec_code < 0x10601)
  return 0;

 FUNC_3(VAR_3, &VAR_5, VAR_2, -1, -1);
 VAR_5.port_id = FUNC_4(VAR_6->port_id);
 FUNC_6(&VAR_3->hwrm_cmd_lock);
 VAR_7 = FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5), VAR_1);
 if (VAR_7) {
  FUNC_7(&VAR_3->hwrm_cmd_lock);
  return VAR_7;
 }
 if (VAR_4->num_leds > 0 && VAR_4->num_leds < VAR_0) {
  int VAR_8;

  VAR_3->num_leds = VAR_4->num_leds;
  FUNC_5(VAR_3->leds, &VAR_4->led0_id, sizeof(VAR_3->leds[0]) *
       VAR_3->num_leds);
  for (VAR_8 = 0; VAR_8 < VAR_3->num_leds; VAR_8++) {
   struct bnxt_led_info *VAR_9 = &VAR_3->leds[VAR_8];
   __le16 VAR_10 = VAR_9->led_state_caps;

   if (!VAR_9->led_group_id ||
       !FUNC_0(VAR_10)) {
    VAR_3->num_leds = 0;
    break;
   }
  }
 }
 FUNC_7(&VAR_3->hwrm_cmd_lock);
 return 0;
}
