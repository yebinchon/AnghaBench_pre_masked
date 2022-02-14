
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; int colorspace; int height; int width; } ;
struct v4l2_bt_timings {scalar_t__ interlaced; int height; int width; } ;
struct TYPE_3__ {int colorspace; } ;
struct TYPE_4__ {struct v4l2_bt_timings bt; } ;
struct tda1997x_state {TYPE_1__ colorimetry; TYPE_2__ timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct tda1997x_state *VAR_2,
     struct v4l2_mbus_framefmt *VAR_3)
{
 const struct v4l2_bt_timings *VAR_4;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_4 = &VAR_2->timings.bt;
 VAR_3->width = VAR_4->width;
 VAR_3->height = VAR_4->height;
 VAR_3->colorspace = VAR_2->colorimetry.colorspace;
 VAR_3->field = (VAR_4->interlaced) ?
  VAR_1 : VAR_0;
}
