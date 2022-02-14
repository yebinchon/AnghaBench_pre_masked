
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {size_t num_inputs; int* input_type; int* input_name_counter; scalar_t__* dv_timings_signal_mode; size_t input; scalar_t__* std_signal_mode; int tpg; scalar_t__ sensor_vflip; scalar_t__ sensor_hflip; int edid_blocks; int has_audio_inputs; } ;
struct v4l2_input {size_t index; int audioset; int status; void* capabilities; int name; void* std; int type; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;

 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (int *) ;
 struct vivid_dev* FUNC_3 (struct file*) ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (struct vivid_dev*) ;
 scalar_t__ FUNC_5 (struct vivid_dev*) ;

int FUNC_6(struct file *VAR_15, void *VAR_16,
    struct v4l2_input *VAR_17)
{
 struct vivid_dev *VAR_18 = FUNC_3(VAR_15);

 if (VAR_17->index >= VAR_18->num_inputs)
  return -VAR_0;

 VAR_17->type = VAR_4;
 switch (VAR_18->input_type[VAR_17->index]) {
 case 128:
  FUNC_1(VAR_17->name, sizeof(VAR_17->name), "Webcam %u",
    VAR_18->input_name_counter[VAR_17->index]);
  VAR_17->capabilities = 0;
  break;
 case 129:
  FUNC_1(VAR_17->name, sizeof(VAR_17->name), "TV %u",
    VAR_18->input_name_counter[VAR_17->index]);
  VAR_17->type = VAR_5;
  VAR_17->std = VAR_13;
  if (VAR_18->has_audio_inputs)
   VAR_17->audioset = (1 << FUNC_0(VAR_14)) - 1;
  VAR_17->capabilities = VAR_7;
  break;
 case 132:
  FUNC_1(VAR_17->name, sizeof(VAR_17->name), "S-Video %u",
    VAR_18->input_name_counter[VAR_17->index]);
  VAR_17->std = VAR_13;
  if (VAR_18->has_audio_inputs)
   VAR_17->audioset = (1 << FUNC_0(VAR_14)) - 1;
  VAR_17->capabilities = VAR_7;
  break;
 case 133:
  FUNC_1(VAR_17->name, sizeof(VAR_17->name), "HDMI %u",
    VAR_18->input_name_counter[VAR_17->index]);
  VAR_17->capabilities = VAR_6;
  if (VAR_18->edid_blocks == 0 ||
      VAR_18->dv_timings_signal_mode[VAR_18->input] == VAR_2)
   VAR_17->status |= VAR_11;
  else if (VAR_18->dv_timings_signal_mode[VAR_18->input] == VAR_1 ||
    VAR_18->dv_timings_signal_mode[VAR_18->input] == VAR_3)
   VAR_17->status |= VAR_10;
  break;
 }
 if (VAR_18->sensor_hflip)
  VAR_17->status |= VAR_9;
 if (VAR_18->sensor_vflip)
  VAR_17->status |= VAR_12;
 if (VAR_18->input == VAR_17->index && FUNC_4(VAR_18)) {
  if (VAR_18->std_signal_mode[VAR_18->input] == VAR_2) {
   VAR_17->status |= VAR_11;
  } else if (VAR_18->std_signal_mode[VAR_18->input] == VAR_1) {
   VAR_17->status |= VAR_10;
  } else if (FUNC_5(VAR_18)) {
   switch (FUNC_2(&VAR_18->tpg)) {
   case 131:
    VAR_17->status |= VAR_8;
    break;
   case 130:
    VAR_17->status |= VAR_10;
    break;
   default:
    break;
   }
  }
 }
 return 0;
}
