
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct mcam_format_struct {int mbus_code; } ;
struct mcam_camera {scalar_t__ state; scalar_t__ buffer_mode; int mbus_code; TYPE_1__ pix_format; int vb_queue; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mcam_camera*) ;
 struct mcam_format_struct* FUNC_1 (int ) ;
 int FUNC_2 (struct mcam_camera*,int) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct mcam_camera* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, void *VAR_4,
  struct v4l2_format *VAR_5)
{
 struct mcam_camera *VAR_6 = FUNC_5(VAR_3);
 struct mcam_format_struct *VAR_7;
 int VAR_8;





 if (VAR_6->state != VAR_2 || FUNC_4(&VAR_6->vb_queue))
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_5->fmt.pix.pixelformat);




 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;




 VAR_6->pix_format = VAR_5->fmt.pix;
 VAR_6->mbus_code = VAR_7->mbus_code;




 if (VAR_6->buffer_mode == VAR_0) {
  VAR_8 = FUNC_0(VAR_6);
  if (VAR_8)
   goto out;
 }
 FUNC_2(VAR_6, 1);
out:
 return VAR_8;
}
