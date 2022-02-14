
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream_stats {int buffers_failed; int buffers_processed; int buffers_in_ready; int buffers_in_idle; int buffers_in_queue; int bytes_processed; } ;
struct pvr2_hdw {unsigned int ir_scheme_active; int vid_stream; int input_allowed_mask; int input_avail_mask; int master_state; int state_pathway_ok; int state_usbstream_run; int state_encoder_waitok; int state_encoder_config; int state_encoder_runok; int state_encoder_run; int state_encoder_ok; int state_decoder_quiescent; int state_decoder_ready; int state_decoder_run; int state_pipeline_pause; int state_pipeline_req; int state_pipeline_config; int state_pipeline_idle; int pathway_state; int flag_decoder_missed; int flag_tripped; int flag_disconnected; int flag_init_ok; int flag_ok; } ;


 unsigned int FUNC_0 (char**) ;
 char** VAR_0 ;
 unsigned int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct pvr2_stream_stats*,int ) ;
 unsigned int FUNC_5 (char*,unsigned int,char*,...) ;

__attribute__((used)) static unsigned int FUNC_6(struct pvr2_hdw *VAR_1,int VAR_2,
          char *VAR_3,unsigned int VAR_4)
{
 switch (VAR_2) {
 case 0:
  return FUNC_5(
   VAR_3,VAR_4,
   "driver:%s%s%s%s%s <mode=%s>",
   (VAR_1->flag_ok ? " <ok>" : " <fail>"),
   (VAR_1->flag_init_ok ? " <init>" : " <uninitialized>"),
   (VAR_1->flag_disconnected ? " <disconnected>" :
    " <connected>"),
   (VAR_1->flag_tripped ? " <tripped>" : ""),
   (VAR_1->flag_decoder_missed ? " <no decoder>" : ""),
   FUNC_3(VAR_1->pathway_state));

 case 1:
  return FUNC_5(
   VAR_3,VAR_4,
   "pipeline:%s%s%s%s",
   (VAR_1->state_pipeline_idle ? " <idle>" : ""),
   (VAR_1->state_pipeline_config ?
    " <configok>" : " <stale>"),
   (VAR_1->state_pipeline_req ? " <req>" : ""),
   (VAR_1->state_pipeline_pause ? " <pause>" : ""));
 case 2:
  return FUNC_5(
   VAR_3,VAR_4,
   "worker:%s%s%s%s%s%s%s",
   (VAR_1->state_decoder_run ?
    (VAR_1->state_decoder_ready ?
     "<decode:run>" : " <decode:start>") :
    (VAR_1->state_decoder_quiescent ?
     "" : " <decode:stop>")),
   (VAR_1->state_decoder_quiescent ?
    " <decode:quiescent>" : ""),
   (VAR_1->state_encoder_ok ?
    "" : " <encode:init>"),
   (VAR_1->state_encoder_run ?
    (VAR_1->state_encoder_runok ?
     " <encode:run>" :
     " <encode:firstrun>") :
    (VAR_1->state_encoder_runok ?
     " <encode:stop>" :
     " <encode:virgin>")),
   (VAR_1->state_encoder_config ?
    " <encode:configok>" :
    (VAR_1->state_encoder_waitok ?
     "" : " <encode:waitok>")),
   (VAR_1->state_usbstream_run ?
    " <usb:run>" : " <usb:stop>"),
   (VAR_1->state_pathway_ok ?
    " <pathway:ok>" : ""));
 case 3:
  return FUNC_5(
   VAR_3,VAR_4,
   "state: %s",
   FUNC_2(VAR_1->master_state));
 case 4: {
  unsigned int VAR_5 = 0;
  unsigned int VAR_6;

  VAR_6 = FUNC_5(VAR_3,
     VAR_4,
     "Hardware supported inputs: ");
  VAR_5 += VAR_6;
  VAR_5 += FUNC_1(VAR_1->input_avail_mask,
      VAR_3+VAR_5,
      VAR_4-VAR_5);
  if (VAR_1->input_avail_mask != VAR_1->input_allowed_mask) {
   VAR_6 = FUNC_5(VAR_3+VAR_5,
      VAR_4-VAR_5,
      "; allowed inputs: ");
   VAR_5 += VAR_6;
   VAR_5 += FUNC_1(VAR_1->input_allowed_mask,
       VAR_3+VAR_5,
       VAR_4-VAR_5);
  }
  return VAR_5;
 }
 case 5: {
  struct pvr2_stream_stats VAR_7;
  if (!VAR_1->vid_stream) break;
  FUNC_4(VAR_1->vid_stream,
          &VAR_7,
          0);
  return FUNC_5(
   VAR_3,VAR_4,
   "Bytes streamed=%u URBs: queued=%u idle=%u ready=%u processed=%u failed=%u",
   VAR_7.bytes_processed,
   VAR_7.buffers_in_queue,
   VAR_7.buffers_in_idle,
   VAR_7.buffers_in_ready,
   VAR_7.buffers_processed,
   VAR_7.buffers_failed);
 }
 case 6: {
  unsigned int VAR_8 = VAR_1->ir_scheme_active;
  return FUNC_5(VAR_3, VAR_4, "ir scheme: id=%d %s", VAR_8,
     (VAR_8 >= FUNC_0(VAR_0) ?
      "?" : VAR_0[VAR_8]));
 }
 default: break;
 }
 return 0;
}
