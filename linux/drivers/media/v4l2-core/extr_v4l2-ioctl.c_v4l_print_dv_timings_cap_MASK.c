
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capabilities; int standards; int max_pixelclock; int min_pixelclock; int max_height; int min_height; int max_width; int min_width; } ;
struct v4l2_dv_timings_cap {int type; TYPE_1__ bt; } ;



 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_dv_timings_cap *VAR_2 = VAR_0;

 switch (VAR_2->type) {
 case 128:
  FUNC_0("type=bt-656/1120, width=%u-%u, height=%u-%u, pixelclock=%llu-%llu, standards=0x%x, capabilities=0x%x\n",
   VAR_2->bt.min_width, VAR_2->bt.max_width,
   VAR_2->bt.min_height, VAR_2->bt.max_height,
   VAR_2->bt.min_pixelclock, VAR_2->bt.max_pixelclock,
   VAR_2->bt.standards, VAR_2->bt.capabilities);
  break;
 default:
  FUNC_0("type=%u\n", VAR_2->type);
  break;
 }
}
