
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {scalar_t__ field; int height; int width; int colorspace; int code; } ;
struct TYPE_4__ {int height; int width; scalar_t__ interlaced; } ;
struct TYPE_3__ {TYPE_2__ bt; } ;
struct adv748x_hdmi {TYPE_1__ timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adv748x_hdmi *VAR_4,
         struct v4l2_mbus_framefmt *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->code = VAR_0;
 VAR_5->field = VAR_4->timings.bt.interlaced ?
   VAR_2 : VAR_3;


 VAR_5->colorspace = VAR_1;

 VAR_5->width = VAR_4->timings.bt.width;
 VAR_5->height = VAR_4->timings.bt.height;

 if (VAR_5->field == VAR_2)
  VAR_5->height /= 2;
}
