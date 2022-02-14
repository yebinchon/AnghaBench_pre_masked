
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {struct v4l2_subdev* source; } ;
struct stm32_dcmi {int lock; TYPE_1__ entity; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ,int ) ;
 struct stm32_dcmi* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2)
{
 struct stm32_dcmi *VAR_3 = FUNC_5(VAR_2);
 struct v4l2_subdev *VAR_4 = VAR_3->entity.source;
 bool VAR_5;
 int VAR_6;

 FUNC_1(&VAR_3->lock);

 VAR_5 = FUNC_3(VAR_2);

 VAR_6 = FUNC_0(VAR_2, ((void*)0));

 if (VAR_5)
  FUNC_4(VAR_4, VAR_0, VAR_1, 0);

 FUNC_2(&VAR_3->lock);

 return VAR_6;
}
