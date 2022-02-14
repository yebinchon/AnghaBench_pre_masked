
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {size_t std_index; int v4l2_dev; } ;
struct v4l2_fract {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct v4l2_fract pixelaspect; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_2 (struct file*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
         int VAR_6, struct v4l2_fract *VAR_7)
{
 struct vpfe_device *VAR_8 = FUNC_2(VAR_4);

 FUNC_1(1, VAR_2, &VAR_8->v4l2_dev, "vpfe_g_pixelaspect\n");

 if (VAR_6 != VAR_1)
  return -VAR_0;

 if (VAR_8->std_index >= FUNC_0(VAR_3))
  return 0;

 *VAR_7 = VAR_3[VAR_8->std_index].pixelaspect;
 return 0;
}
