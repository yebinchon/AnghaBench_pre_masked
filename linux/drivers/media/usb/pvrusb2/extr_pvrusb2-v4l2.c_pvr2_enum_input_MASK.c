
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct v4l2_input {size_t index; scalar_t__* name; int type; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {size_t input_cnt; int* input_map; TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct pvr2_ctrl {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_input*,int ,int) ;
 int FUNC_1 (struct pvr2_ctrl*,int,scalar_t__*,int,unsigned int*) ;
 struct pvr2_ctrl* FUNC_2 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_input *VAR_6)
{
 struct pvr2_v4l2_fh *VAR_7 = VAR_4->private_data;
 struct pvr2_hdw *VAR_8 = VAR_7->channel.mc_head->hdw;
 struct pvr2_ctrl *VAR_9;
 struct v4l2_input VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_2(VAR_8, VAR_1);

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.index = VAR_6->index;
 if (VAR_6->index >= VAR_7->input_cnt)
  return -VAR_0;
 VAR_12 = VAR_7->input_map[VAR_6->index];
 switch (VAR_12) {
 case 128:
 case 131:
 case 130:
  VAR_10.type = VAR_3;
  break;
 case 129:
 case 132:
  VAR_10.type = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = 0;
 FUNC_1(VAR_9, VAR_12,
   VAR_10.name, sizeof(VAR_10.name) - 1, &VAR_11);
 VAR_10.name[VAR_11] = 0;
 *VAR_6 = VAR_10;
 return 0;
}
