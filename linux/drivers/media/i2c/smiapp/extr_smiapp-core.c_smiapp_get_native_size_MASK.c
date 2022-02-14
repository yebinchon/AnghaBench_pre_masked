
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {scalar_t__ height; scalar_t__ width; scalar_t__ left; scalar_t__ top; } ;
struct smiapp_subdev {TYPE_1__* sensor; } ;
struct TYPE_2__ {scalar_t__* limits; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct smiapp_subdev *VAR_2,
        struct v4l2_rect *VAR_3)
{
 VAR_3->top = 0;
 VAR_3->left = 0;
 VAR_3->width = VAR_2->sensor->limits[VAR_0] + 1;
 VAR_3->height = VAR_2->sensor->limits[VAR_1] + 1;
}
