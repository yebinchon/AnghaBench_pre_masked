
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vfmax; int vfmin; scalar_t__ hfmin; scalar_t__ hfmax; } ;
struct fb_info {TYPE_1__ monspecs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct fb_info *VAR_9)
{
 if (!VAR_5)
  VAR_5 = VAR_1;
 if (!VAR_6)
  VAR_6 = VAR_0;
 if (!VAR_9->monspecs.hfmax)
  VAR_9->monspecs.hfmax = VAR_6;
 if (!VAR_9->monspecs.hfmin)
  VAR_9->monspecs.hfmin = VAR_5;
 if (VAR_6 < VAR_5)
  VAR_9->monspecs.hfmin = VAR_6;

 if (!VAR_7)
  VAR_7 = VAR_4;
 if (!VAR_8)
  VAR_8 = VAR_3;
 if (VAR_2 && VAR_7 < 60)
  VAR_7 = 60;
 if (!VAR_9->monspecs.vfmax)
  VAR_9->monspecs.vfmax = VAR_8;
 if (!VAR_9->monspecs.vfmin)
  VAR_9->monspecs.vfmin = VAR_7;
 if (VAR_8 < VAR_7)
  VAR_9->monspecs.vfmin = VAR_8;
}
