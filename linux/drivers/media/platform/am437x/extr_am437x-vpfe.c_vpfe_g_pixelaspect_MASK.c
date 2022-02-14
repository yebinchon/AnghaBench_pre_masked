
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {size_t std_index; } ;
struct v4l2_fract {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct v4l2_fract pixelaspect; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 int FUNC_2 (int,struct vpfe_device*,char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
         int VAR_5, struct v4l2_fract *VAR_6)
{
 struct vpfe_device *VAR_7 = FUNC_1(VAR_3);

 FUNC_2(2, VAR_7, "vpfe_g_pixelaspect\n");

 if (VAR_5 != VAR_1 ||
     VAR_7->std_index >= FUNC_0(VAR_2))
  return -VAR_0;

 *VAR_6 = VAR_2[VAR_7->std_index].pixelaspect;

 return 0;
}
