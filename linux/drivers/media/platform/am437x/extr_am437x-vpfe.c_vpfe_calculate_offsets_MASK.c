
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int field_off; int ccdc; } ;
struct v4l2_rect {int height; int width; } ;


 int FUNC_0 (int *,struct v4l2_rect*) ;
 int FUNC_1 (int,struct vpfe_device*,char*) ;

__attribute__((used)) static void FUNC_2(struct vpfe_device *VAR_0)
{
 struct v4l2_rect VAR_1;

 FUNC_1(2, VAR_0, "vpfe_calculate_offsets\n");

 FUNC_0(&VAR_0->ccdc, &VAR_1);
 VAR_0->field_off = VAR_1.height * VAR_1.width;
}
