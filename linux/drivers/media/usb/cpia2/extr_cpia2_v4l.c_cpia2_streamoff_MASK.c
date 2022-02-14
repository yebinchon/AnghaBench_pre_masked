
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct camera_data {int usb_alt; scalar_t__ streaming; int mmapped; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (int ,int) ;
 struct camera_data* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, enum v4l2_buf_type VAR_4)
{
 struct camera_data *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = -VAR_0;

 FUNC_0("VIDIOC_STREAMOFF, streaming=%d\n", VAR_5->streaming);
 if (!VAR_5->mmapped || VAR_4 != VAR_1)
  return -VAR_0;

 if (VAR_5->streaming) {
  VAR_6 = FUNC_1(VAR_5);
  if (!VAR_6)
   FUNC_2(VAR_5->usb_alt, 0);
 }
 return VAR_6;
}
