
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_i2c_data {TYPE_1__* chip; } ;
struct v4l2_fmtdesc {int type; scalar_t__ index; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {struct v4l2_fmtdesc* format; } ;


 int VAR_0 ;
 struct video_i2c_data* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_fmtdesc *VAR_3)
{
 struct video_i2c_data *VAR_4 = FUNC_0(VAR_1);
 enum v4l2_buf_type VAR_5 = VAR_3->type;

 if (VAR_3->index > 0)
  return -VAR_0;

 *VAR_3 = *VAR_4->chip->format;
 VAR_3->type = VAR_5;

 return 0;
}
