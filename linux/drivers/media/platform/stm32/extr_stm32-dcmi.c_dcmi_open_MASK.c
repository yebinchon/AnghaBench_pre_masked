
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {struct v4l2_subdev* source; } ;
struct stm32_dcmi {int lock; int fmt; TYPE_1__ entity; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stm32_dcmi*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct v4l2_subdev*,int ,int ,int) ;
 struct stm32_dcmi* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_4)
{
 struct stm32_dcmi *VAR_5 = FUNC_7(VAR_4);
 struct v4l2_subdev *VAR_6 = VAR_5->entity.source;
 int VAR_7;

 if (FUNC_1(&VAR_5->lock))
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 < 0)
  goto unlock;

 if (!FUNC_3(VAR_4))
  goto fh_rel;

 VAR_7 = FUNC_6(VAR_6, VAR_2, VAR_3, 1);
 if (VAR_7 < 0 && VAR_7 != -VAR_0)
  goto fh_rel;

 VAR_7 = FUNC_0(VAR_5, &VAR_5->fmt);
 if (VAR_7)
  FUNC_6(VAR_6, VAR_2, VAR_3, 0);
fh_rel:
 if (VAR_7)
  FUNC_5(VAR_4);
unlock:
 FUNC_2(&VAR_5->lock);
 return VAR_7;
}
