
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfe_output {scalar_t__ state; int wm_num; int* wm_idx; scalar_t__ drop_update_idx; scalar_t__ active_buf; } ;
struct TYPE_6__ {int pixelformat; } ;
struct TYPE_7__ {TYPE_2__ pix_mp; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct TYPE_5__ {struct v4l2_format active_fmt; } ;
struct vfe_line {int id; struct vfe_output output; TYPE_1__ video_out; } ;
struct vfe_device {int output_lock; TYPE_4__* camss; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vfe_device* FUNC_3 (struct vfe_line*) ;
 int FUNC_4 (struct vfe_device*,int) ;
 int FUNC_5 (struct vfe_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct vfe_line *VAR_3)
{
 struct vfe_device *VAR_4 = FUNC_3(VAR_3);
 struct vfe_output *VAR_5;
 struct v4l2_format *VAR_6 = &VAR_3->video_out.active_fmt;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_1(&VAR_4->output_lock, VAR_7);

 VAR_5 = &VAR_3->output;
 if (VAR_5->state != VAR_1) {
  FUNC_0(VAR_4->camss->dev, "Output is running\n");
  goto error;
 }
 VAR_5->state = VAR_2;

 VAR_5->active_buf = 0;

 switch (VAR_6->fmt.pix_mp.pixelformat) {
 case 131:
 case 129:
 case 130:
 case 128:
  VAR_5->wm_num = 2;
  break;
 default:
  VAR_5->wm_num = 1;
  break;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->wm_num; VAR_8++) {
  VAR_9 = FUNC_5(VAR_4, VAR_3->id);
  if (VAR_9 < 0) {
   FUNC_0(VAR_4->camss->dev, "Can not reserve wm\n");
   goto error_get_wm;
  }
  VAR_5->wm_idx[VAR_8] = VAR_9;
 }

 VAR_5->drop_update_idx = 0;

 FUNC_2(&VAR_4->output_lock, VAR_7);

 return 0;

error_get_wm:
 for (VAR_8--; VAR_8 >= 0; VAR_8--)
  FUNC_4(VAR_4, VAR_5->wm_idx[VAR_8]);
 VAR_5->state = VAR_1;
error:
 FUNC_2(&VAR_4->output_lock, VAR_7);

 return -VAR_0;
}
