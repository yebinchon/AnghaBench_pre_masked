
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_format {int format; int which; } ;
struct v4l2_pix_format {int dummy; } ;
struct TYPE_2__ {int source; } ;
struct stm32_dcmi {TYPE_1__ entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_pix_format*,int *) ;
 int FUNC_1 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_2(struct stm32_dcmi *VAR_3,
      struct v4l2_pix_format *VAR_4)
{
 struct v4l2_subdev_format VAR_5 = {
  .which = VAR_0,
 };
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->entity.source, VAR_2, VAR_1, ((void*)0), &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_4, &VAR_5.format);

 return 0;
}
