
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hfi_videocores_usage_type {int video_core_enable_mask; } ;
struct hfi_video_work_mode {int video_work_mode; } ;
struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {TYPE_1__ hdr; int session_id; } ;
struct hfi_session_set_property_pkt {int* data; int num_properties; TYPE_2__ shdr; } ;
struct hfi_buffer_count_actual_4xx {int count_min_host; int type; int count_actual; } ;
struct hfi_buffer_count_actual {int count_actual; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (void*) ;
 int FUNC_1 (struct hfi_session_set_property_pkt*,void*,int,void*) ;

__attribute__((used)) static int
FUNC_2(struct hfi_session_set_property_pkt *VAR_3,
        void *VAR_4, u32 VAR_5, void *VAR_6)
{
 void *VAR_7;

 if (!VAR_3 || !VAR_4 || !VAR_6)
  return -VAR_0;

 VAR_7 = &VAR_3->data[1];

 VAR_3->shdr.hdr.size = sizeof(*VAR_3);
 VAR_3->shdr.hdr.pkt_type = VAR_2;
 VAR_3->shdr.session_id = FUNC_0(VAR_4);
 VAR_3->num_properties = 1;
 VAR_3->data[0] = VAR_5;






 switch (VAR_5) {
 case 129: {
  struct hfi_buffer_count_actual *VAR_8 = VAR_6;
  struct hfi_buffer_count_actual_4xx *VAR_9 = VAR_7;

  VAR_9->count_actual = VAR_8->count_actual;
  VAR_9->type = VAR_8->type;
  VAR_9->count_min_host = VAR_8->count_actual;
  VAR_3->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_9);
  break;
 }
 case 128: {
  struct hfi_video_work_mode *VAR_10 = VAR_6, *VAR_11 = VAR_7;

  VAR_11->video_work_mode = VAR_10->video_work_mode;
  VAR_3->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_11);
  break;
 }
 case 131: {
  struct hfi_videocores_usage_type *VAR_12 = VAR_6, *VAR_13 = VAR_7;

  VAR_13->video_core_enable_mask = VAR_12->video_core_enable_mask;
  VAR_3->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_13);
  break;
 }
 case 132:
 case 133:
 case 130:

  return -VAR_1;
 default:
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 }

 return 0;
}
