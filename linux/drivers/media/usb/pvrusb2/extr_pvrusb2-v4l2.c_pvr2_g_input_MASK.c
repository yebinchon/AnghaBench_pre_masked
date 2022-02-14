
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {unsigned int input_cnt; int* input_map; TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct pvr2_ctrl {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_ctrl*,int*) ;
 struct pvr2_ctrl* FUNC_1 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, unsigned int *VAR_3)
{
 struct pvr2_v4l2_fh *VAR_4 = VAR_1->private_data;
 struct pvr2_hdw *VAR_5 = VAR_4->channel.mc_head->hdw;
 unsigned int VAR_6;
 struct pvr2_ctrl *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 VAR_8 = 0;
 VAR_9 = FUNC_0(VAR_7, &VAR_8);
 *VAR_3 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4->input_cnt; VAR_6++) {
  if (VAR_4->input_map[VAR_6] == VAR_8) {
   *VAR_3 = VAR_6;
   break;
  }
 }
 return VAR_9;
}
