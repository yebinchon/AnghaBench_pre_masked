
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; int height; int width; } ;
struct TYPE_3__ {int height; int width; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct adv7511_state {TYPE_2__ dv_timings; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct adv7511_state *VAR_1,
    struct v4l2_mbus_framefmt *VAR_2)
{
 VAR_2->width = VAR_1->dv_timings.bt.width;
 VAR_2->height = VAR_1->dv_timings.bt.height;
 VAR_2->field = VAR_0;
}
