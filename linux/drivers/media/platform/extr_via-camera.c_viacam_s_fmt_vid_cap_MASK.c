
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct via_format {int mbus_code; } ;
struct TYPE_5__ {int pixelformat; } ;
struct via_camera {scalar_t__ opstate; int mbus_code; TYPE_2__ sensor_format; TYPE_2__ user_format; } ;
struct TYPE_4__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct via_format* FUNC_0 (int ) ;
 int FUNC_1 (struct via_camera*) ;
 int FUNC_2 (struct via_camera*) ;
 int FUNC_3 (struct via_camera*,TYPE_2__*,TYPE_2__*) ;
 struct via_camera* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
  struct v4l2_format *VAR_4)
{
 struct via_camera *VAR_5 = FUNC_4(VAR_2);
 int VAR_6;
 struct v4l2_format VAR_7;
 struct via_format *VAR_8 = FUNC_0(VAR_4->fmt.pix.pixelformat);





 if (VAR_5->opstate != VAR_1)
  return -VAR_0;




 VAR_6 = FUNC_3(VAR_5, &VAR_4->fmt.pix, &VAR_7.fmt.pix);
 if (VAR_6)
  return VAR_6;



 VAR_5->user_format = VAR_4->fmt.pix;
 VAR_5->sensor_format = VAR_7.fmt.pix;
 VAR_5->mbus_code = VAR_8->mbus_code;
 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_5);
 return VAR_6;
}
