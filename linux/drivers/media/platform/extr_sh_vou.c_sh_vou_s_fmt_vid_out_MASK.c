
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct sh_vou_device {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct sh_vou_device*,int *) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 struct sh_vou_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
    struct v4l2_format *VAR_2)
{
 struct sh_vou_device *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_4)
  return VAR_4;
 return FUNC_0(VAR_3, &VAR_2->fmt.pix);
}
