
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_input {size_t index; int audioset; scalar_t__ std; scalar_t__ tuner; int type; int name; } ;
struct go7007 {TYPE_2__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ tvnorms; } ;
struct TYPE_5__ {size_t num_inputs; int flags; int num_aud_inputs; int sensor_flags; TYPE_1__* inputs; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_3__* FUNC_1 (struct file*) ;
 struct go7007* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
    struct v4l2_input *VAR_7)
{
 struct go7007 *VAR_8 = FUNC_2(VAR_5);

 if (VAR_7->index >= VAR_8->board_info->num_inputs)
  return -VAR_0;

 FUNC_0(VAR_7->name, VAR_8->board_info->inputs[VAR_7->index].name,
  sizeof(VAR_7->name));


 if ((VAR_8->board_info->flags & VAR_1) &&
   VAR_7->index == 0)
  VAR_7->type = VAR_4;
 else
  VAR_7->type = VAR_3;

 if (VAR_8->board_info->num_aud_inputs)
  VAR_7->audioset = (1 << VAR_8->board_info->num_aud_inputs) - 1;
 else
  VAR_7->audioset = 0;
 VAR_7->tuner = 0;
 if (VAR_8->board_info->sensor_flags & VAR_2)
  VAR_7->std = FUNC_1(VAR_5)->tvnorms;
 else
  VAR_7->std = 0;

 return 0;
}
