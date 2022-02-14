
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {scalar_t__ pathway_state; scalar_t__ fw1_state; unsigned int master_state; int state_wait_data; scalar_t__ state_decoder_run; scalar_t__ state_encoder_run; scalar_t__ state_usbstream_run; scalar_t__ flag_decoder_missed; scalar_t__ flag_tripped; int state_encoder_ok; TYPE_1__* hdw_desc; int flag_ok; } ;
struct TYPE_2__ {scalar_t__ flag_digital_requires_cx23416; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (struct pvr2_hdw*,int) ;
 int FUNC_4 (int,char*,...) ;
 int VAR_10 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct pvr2_hdw *VAR_11)
{
 unsigned int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;

 FUNC_4(VAR_9,
     "Drive state check START");
 if (VAR_10 & VAR_9) {
  FUNC_1(VAR_11);
 }


 VAR_13 = FUNC_2(VAR_11);

 VAR_15 = (VAR_11->pathway_state != VAR_1);


 if (!VAR_11->flag_ok) {
  VAR_12 = VAR_3;
 } else if (VAR_11->fw1_state != VAR_0) {
  VAR_12 = VAR_2;
 } else if ((VAR_15 ||
      VAR_11->hdw_desc->flag_digital_requires_cx23416) &&
     !VAR_11->state_encoder_ok) {
  VAR_12 = VAR_7;
 } else if (VAR_11->flag_tripped ||
     (VAR_15 && VAR_11->flag_decoder_missed)) {
  VAR_12 = VAR_4;
 } else if (VAR_11->state_usbstream_run &&
     (!VAR_15 ||
      (VAR_11->state_encoder_run && VAR_11->state_decoder_run))) {
  VAR_12 = VAR_6;
 } else {
  VAR_12 = VAR_5;
 }
 if (VAR_11->master_state != VAR_12) {
  FUNC_4(VAR_8,
      "Device state change from %s to %s",
      FUNC_0(VAR_11->master_state),
      FUNC_0(VAR_12));
  FUNC_3(VAR_11,VAR_12 == VAR_6);
  VAR_11->master_state = VAR_12;
  VAR_13 = !0;
  VAR_14 = !0;
 }
 if (VAR_13) {

  FUNC_5(&VAR_11->state_wait_data);
 }

 if (VAR_10 & VAR_9) {
  FUNC_1(VAR_11);
 }
 FUNC_4(VAR_9,
     "Drive state check DONE callback=%d",VAR_14);

 return VAR_14;
}
