
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {size_t num_outputs; int* output_type; int* output_name_counter; int has_audio_outputs; } ;
struct v4l2_output {size_t index; int audioset; int capabilities; int name; int std; int type; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,char*,int) ;
 struct vivid_dev* FUNC_2 (struct file*) ;
 int VAR_5 ;

int FUNC_3(struct file *VAR_6, void *VAR_7,
    struct v4l2_output *VAR_8)
{
 struct vivid_dev *VAR_9 = FUNC_2(VAR_6);

 if (VAR_8->index >= VAR_9->num_outputs)
  return -VAR_0;

 VAR_8->type = VAR_1;
 switch (VAR_9->output_type[VAR_8->index]) {
 case 128:
  FUNC_1(VAR_8->name, sizeof(VAR_8->name), "S-Video %u",
    VAR_9->output_name_counter[VAR_8->index]);
  VAR_8->std = VAR_4;
  if (VAR_9->has_audio_outputs)
   VAR_8->audioset = (1 << FUNC_0(VAR_5)) - 1;
  VAR_8->capabilities = VAR_3;
  break;
 case 129:
  FUNC_1(VAR_8->name, sizeof(VAR_8->name), "HDMI %u",
    VAR_9->output_name_counter[VAR_8->index]);
  VAR_8->capabilities = VAR_2;
  break;
 }
 return 0;
}
