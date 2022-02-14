
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {unsigned int state_pipeline_idle; scalar_t__ state_pipeline_pause; int state_decoder_quiescent; scalar_t__ state_usbstream_run; scalar_t__ state_decoder_run; scalar_t__ state_encoder_run; } ;



__attribute__((used)) static int FUNC_0(struct pvr2_hdw *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2 = 0;

 VAR_1 = !(VAR_0->state_encoder_run ||
        VAR_0->state_decoder_run ||
        VAR_0->state_usbstream_run ||
        (!VAR_0->state_decoder_quiescent));
 if (!VAR_1 != !VAR_0->state_pipeline_idle) {
  VAR_0->state_pipeline_idle = VAR_1;
  VAR_2 = !0;
 }
 if (VAR_0->state_pipeline_idle && VAR_0->state_pipeline_pause) {
  VAR_0->state_pipeline_pause = 0;
  VAR_2 = !0;
 }
 return VAR_2;
}
