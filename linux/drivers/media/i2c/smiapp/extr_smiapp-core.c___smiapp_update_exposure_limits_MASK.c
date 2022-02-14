
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl {int step; int minimum; } ;
struct smiapp_sensor {int* limits; TYPE_3__* vblank; TYPE_2__* pixel_array; struct v4l2_ctrl* exposure; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_5__ {TYPE_1__* crop; } ;
struct TYPE_4__ {int height; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct v4l2_ctrl*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct smiapp_sensor *VAR_2)
{
 struct v4l2_ctrl *VAR_3 = VAR_2->exposure;
 int VAR_4;

 VAR_4 = VAR_2->pixel_array->crop[VAR_1].height
  + VAR_2->vblank->val
  - VAR_2->limits[VAR_0];

 FUNC_0(VAR_3, VAR_3->minimum, VAR_4, VAR_3->step, VAR_4);
}
