
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {int field_off; int v4l2_dev; } ;
struct v4l2_rect {int height; int width; } ;
struct TYPE_3__ {int (* get_image_window ) (struct v4l2_rect*) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_rect*) ;
 int FUNC_1 (int,int ,int *,char*) ;

__attribute__((used)) static void FUNC_2(struct vpfe_device *VAR_2)
{
 struct v4l2_rect VAR_3;

 FUNC_1(1, VAR_1, &VAR_2->v4l2_dev, "vpfe_calculate_offsets\n");

 VAR_0->hw_ops.get_image_window(&VAR_3);
 VAR_2->field_off = VAR_3.height * VAR_3.width;
}
