
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {scalar_t__ type; } ;
struct uvc_streaming_control {int dummy; } ;
struct uvc_streaming {scalar_t__ type; int mutex; struct uvc_frame* cur_frame; struct uvc_format* cur_format; struct uvc_streaming_control ctrl; int queue; } ;
struct uvc_frame {int dummy; } ;
struct uvc_format {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct uvc_streaming*,struct v4l2_format*,struct uvc_streaming_control*,struct uvc_format**,struct uvc_frame**) ;

__attribute__((used)) static int FUNC_4(struct uvc_streaming *VAR_2,
 struct v4l2_format *VAR_3)
{
 struct uvc_streaming_control VAR_4;
 struct uvc_format *VAR_5;
 struct uvc_frame *VAR_6;
 int VAR_7;

 if (VAR_3->type != VAR_2->type)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(&VAR_2->mutex);

 if (FUNC_2(&VAR_2->queue)) {
  VAR_7 = -VAR_0;
  goto done;
 }

 VAR_2->ctrl = VAR_4;
 VAR_2->cur_format = VAR_5;
 VAR_2->cur_frame = VAR_6;

done:
 FUNC_1(&VAR_2->mutex);
 return VAR_7;
}
