
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_frame_interval {scalar_t__ pad; int interval; } ;
struct v4l2_subdev {int dummy; } ;
typedef struct ov5640_mode_info {int vact; int hact; } const ov5640_mode_info ;
struct ov5640_dev {int current_fr; int pending_mode_change; int lock; struct ov5640_mode_info const* current_mode; int frame_interval; scalar_t__ streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ov5640_mode_info const* FUNC_2 (struct ov5640_dev*,int,int ,int ,int) ;
 int FUNC_3 (struct ov5640_dev*,int *,int ,int ) ;
 struct ov5640_dev* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
       struct v4l2_subdev_frame_interval *VAR_3)
{
 struct ov5640_dev *VAR_4 = FUNC_4(VAR_2);
 const struct ov5640_mode_info *VAR_5;
 int VAR_6, VAR_7 = 0;

 if (VAR_3->pad != 0)
  return -VAR_1;

 FUNC_0(&VAR_4->lock);

 if (VAR_4->streaming) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_5 = VAR_4->current_mode;

 VAR_6 = FUNC_3(VAR_4, &VAR_3->interval,
            VAR_5->hact, VAR_5->vact);
 if (VAR_6 < 0) {

  VAR_3->interval = VAR_4->frame_interval;
  goto out;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_6, VAR_5->hact,
    VAR_5->vact, 1);
 if (!VAR_5) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_5 != VAR_4->current_mode ||
     VAR_6 != VAR_4->current_fr) {
  VAR_4->current_fr = VAR_6;
  VAR_4->frame_interval = VAR_3->interval;
  VAR_4->current_mode = VAR_5;
  VAR_4->pending_mode_change = 1;
 }
out:
 FUNC_1(&VAR_4->lock);
 return VAR_7;
}
