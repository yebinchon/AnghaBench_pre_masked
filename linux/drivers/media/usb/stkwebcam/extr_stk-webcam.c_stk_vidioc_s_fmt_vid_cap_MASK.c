
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sizeimage; int pixelformat; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_7__ {int mode; int palette; } ;
struct stk_camera {TYPE_3__ vsettings; int frame_size; scalar_t__ owner; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stk_camera*) ;
 scalar_t__ FUNC_1 (struct stk_camera*) ;
 int FUNC_2 (struct stk_camera*) ;
 int FUNC_3 (struct stk_camera*) ;
 int FUNC_4 (struct stk_camera*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_5 (struct file*,struct v4l2_format*,int*) ;
 struct stk_camera* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3,
  void *VAR_4, struct v4l2_format *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct stk_camera *VAR_8 = FUNC_6(VAR_3);

 if (VAR_8 == ((void*)0))
  return -VAR_1;
 if (!FUNC_0(VAR_8))
  return -VAR_1;
 if (FUNC_1(VAR_8))
  return -VAR_0;
 if (VAR_8->owner)
  return -VAR_0;
 VAR_6 = FUNC_5(VAR_3, VAR_5, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_8->vsettings.palette = VAR_5->fmt.pix.pixelformat;
 FUNC_2(VAR_8);
 VAR_8->frame_size = VAR_5->fmt.pix.sizeimage;
 VAR_8->vsettings.mode = VAR_2[VAR_7].m;

 FUNC_3(VAR_8);
 return FUNC_4(VAR_8);
}
