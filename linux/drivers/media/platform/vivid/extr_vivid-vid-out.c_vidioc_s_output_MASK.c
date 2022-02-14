
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tvnorms; } ;
struct TYPE_3__ {scalar_t__ tvnorms; } ;
struct vivid_dev {unsigned int num_outputs; unsigned int output; scalar_t__* output_type; int * display_present; int ctrl_display_present; TYPE_2__ vid_out_dev; TYPE_1__ vbi_out_dev; scalar_t__ tv_audio_output; int vb_vbi_out_q; int vb_vid_out_q; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct vivid_dev* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct vivid_dev*) ;
 int FUNC_5 (struct vivid_dev*) ;

int FUNC_6(struct file *VAR_4, void *VAR_5, unsigned VAR_6)
{
 struct vivid_dev *VAR_7 = FUNC_3(VAR_4);

 if (VAR_6 >= VAR_7->num_outputs)
  return -VAR_1;

 if (VAR_6 == VAR_7->output)
  return 0;

 if (FUNC_2(&VAR_7->vb_vid_out_q) || FUNC_2(&VAR_7->vb_vbi_out_q))
  return -VAR_0;

 VAR_7->output = VAR_6;
 VAR_7->tv_audio_output = 0;
 if (VAR_7->output_type[VAR_6] == VAR_2)
  VAR_7->vid_out_dev.tvnorms = VAR_3;
 else
  VAR_7->vid_out_dev.tvnorms = 0;

 VAR_7->vbi_out_dev.tvnorms = VAR_7->vid_out_dev.tvnorms;
 FUNC_5(VAR_7);

 FUNC_0(VAR_7->ctrl_display_present, FUNC_4(VAR_7));
 if (FUNC_4(VAR_7))
  FUNC_1(VAR_7->ctrl_display_present,
     VAR_7->display_present[VAR_7->output]);

 return 0;
}
