
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int height; int colorspace; int field; int width; } ;
struct TYPE_3__ {int height; int flags; int width; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct adv76xx_state {TYPE_2__ timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adv76xx_state *VAR_5,
    struct v4l2_mbus_framefmt *VAR_6)
{
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->width = VAR_5->timings.bt.width;
 VAR_6->height = VAR_5->timings.bt.height;
 VAR_6->field = VAR_4;
 VAR_6->colorspace = VAR_2;

 if (VAR_5->timings.bt.flags & VAR_3)
  VAR_6->colorspace = (VAR_5->timings.bt.height <= 576) ?
   VAR_1 : VAR_0;
}
