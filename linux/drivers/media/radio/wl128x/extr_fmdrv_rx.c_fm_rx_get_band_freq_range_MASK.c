
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int top_freq; int bot_freq; } ;
struct TYPE_4__ {TYPE_1__ region; } ;
struct fmdev {TYPE_2__ rx; } ;



int FUNC_0(struct fmdev *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_0->rx.region.bot_freq;

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_0->rx.region.top_freq;

 return 0;
}
