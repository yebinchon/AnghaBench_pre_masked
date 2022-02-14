
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {int state_encoder_ok; int flag_tripped; scalar_t__ pathway_state; TYPE_1__* hdw_desc; scalar_t__ state_usbstream_run; scalar_t__ state_decoder_run; scalar_t__ state_encoder_config; scalar_t__ state_encoder_run; } ;
struct TYPE_2__ {int flag_digital_requires_cx23416; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct pvr2_hdw *VAR_2)
{
 if (VAR_2->state_encoder_ok) return 0;
 if (VAR_2->flag_tripped) return 0;
 if (VAR_2->state_encoder_run) return 0;
 if (VAR_2->state_encoder_config) return 0;
 if (VAR_2->state_decoder_run) return 0;
 if (VAR_2->state_usbstream_run) return 0;
 if (VAR_2->pathway_state == VAR_1) {
  if (!VAR_2->hdw_desc->flag_digital_requires_cx23416) return 0;
 } else if (VAR_2->pathway_state != VAR_0) {
  return 0;
 }

 if (FUNC_0(VAR_2) < 0) {
  VAR_2->flag_tripped = !0;
  FUNC_1("flag_tripped",VAR_2->flag_tripped);
  return !0;
 }
 VAR_2->state_encoder_ok = !0;
 FUNC_1("state_encoder_ok",VAR_2->state_encoder_ok);
 return !0;
}
