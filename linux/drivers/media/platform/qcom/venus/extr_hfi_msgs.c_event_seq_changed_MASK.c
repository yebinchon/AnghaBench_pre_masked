
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct venus_inst {TYPE_3__* ops; int error; } ;
struct venus_core {TYPE_1__* res; } ;
struct hfi_profile_level {int level; int profile; } ;
struct hfi_pic_struct {int progressive_only; } ;
struct hfi_msg_event_notify_pkt {int event_data1; int event_data2; int * ext_event_data; } ;
struct hfi_framesize {int height; int width; } ;
struct hfi_extradata_input_crop {int height; int width; int top; int left; } ;
struct TYPE_5__ {int height; int width; int top; int left; } ;
struct hfi_event_data {int event_type; int entropy_mode; TYPE_2__ input_crop; int buf_count; int colour_space; int pic_struct; int bit_depth; int level; int profile; int height; int width; int member_0; } ;
struct hfi_colour_space {int colour_space; } ;
struct hfi_buffer_requirements {int dummy; } ;
struct hfi_bit_depth {int bit_depth; } ;
typedef enum hfi_version { ____Placeholder_hfi_version } hfi_version ;
struct TYPE_6__ {int (* event_notify ) (struct venus_inst*,int ,struct hfi_event_data*) ;} ;
struct TYPE_4__ {int hfi_version; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi_buffer_requirements*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct venus_inst*,int ,struct hfi_event_data*) ;

__attribute__((used)) static void FUNC_2(struct venus_core *VAR_4, struct venus_inst *VAR_5,
         struct hfi_msg_event_notify_pkt *VAR_6)
{
 enum hfi_version VAR_7 = VAR_4->res->hfi_version;
 struct hfi_event_data VAR_8 = {0};
 int VAR_9;
 struct hfi_framesize *VAR_10;
 struct hfi_profile_level *VAR_11;
 struct hfi_bit_depth *VAR_12;
 struct hfi_pic_struct *VAR_13;
 struct hfi_colour_space *VAR_14;
 struct hfi_buffer_requirements *VAR_15;
 struct hfi_extradata_input_crop *VAR_16;
 u8 *VAR_17;
 u32 VAR_18;

 VAR_5->error = VAR_1;

 switch (VAR_6->event_data1) {
 case 136:
 case 137:
  break;
 default:
  VAR_5->error = VAR_3;
  goto done;
 }

 VAR_8.event_type = VAR_6->event_data1;

 VAR_9 = VAR_6->event_data2;
 if (!VAR_9) {
  VAR_5->error = VAR_2;
  goto done;
 }

 VAR_17 = (u8 *)&VAR_6->ext_event_data[0];
 do {
  VAR_18 = *((u32 *)VAR_17);
  switch (VAR_18) {
  case 132:
   VAR_17 += sizeof(u32);
   VAR_10 = (struct hfi_framesize *)VAR_17;
   VAR_8.width = VAR_10->width;
   VAR_8.height = VAR_10->height;
   VAR_17 += sizeof(*VAR_10);
   break;
  case 131:
   VAR_17 += sizeof(u32);
   VAR_11 = (struct hfi_profile_level *)VAR_17;
   VAR_8.profile = VAR_11->profile;
   VAR_8.level = VAR_11->level;
   VAR_17 += sizeof(*VAR_11);
   break;
  case 128:
   VAR_17 += sizeof(u32);
   VAR_12 = (struct hfi_bit_depth *)VAR_17;
   VAR_8.bit_depth = VAR_12->bit_depth;
   VAR_17 += sizeof(*VAR_12);
   break;
  case 129:
   VAR_17 += sizeof(u32);
   VAR_13 = (struct hfi_pic_struct *)VAR_17;
   VAR_8.pic_struct = VAR_13->progressive_only;
   VAR_17 += sizeof(*VAR_13);
   break;
  case 130:
   VAR_17 += sizeof(u32);
   VAR_14 = (struct hfi_colour_space *)VAR_17;
   VAR_8.colour_space = VAR_14->colour_space;
   VAR_17 += sizeof(*VAR_14);
   break;
  case 133:
   VAR_17 += sizeof(u32);
   VAR_8.entropy_mode = *(u32 *)VAR_17;
   VAR_17 += sizeof(u32);
   break;
  case 134:
   VAR_17 += sizeof(u32);
   VAR_15 = (struct hfi_buffer_requirements *)VAR_17;
   VAR_8.buf_count = FUNC_0(VAR_15, VAR_7);
   VAR_17 += sizeof(*VAR_15);
   break;
  case 135:
   VAR_17 += sizeof(u32);
   VAR_16 = (struct hfi_extradata_input_crop *)VAR_17;
   VAR_8.input_crop.left = VAR_16->left;
   VAR_8.input_crop.top = VAR_16->top;
   VAR_8.input_crop.width = VAR_16->width;
   VAR_8.input_crop.height = VAR_16->height;
   VAR_17 += sizeof(*VAR_16);
   break;
  default:
   break;
  }
  VAR_9--;
 } while (VAR_9 > 0);

done:
 VAR_5->ops->event_notify(VAR_5, VAR_0, &VAR_8);
}
