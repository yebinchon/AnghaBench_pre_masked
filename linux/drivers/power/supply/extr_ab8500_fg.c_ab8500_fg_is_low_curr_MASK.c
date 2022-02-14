
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ab8500_fg {TYPE_2__* bm; } ;
struct TYPE_4__ {TYPE_1__* fg_params; } ;
struct TYPE_3__ {int high_curr_threshold; } ;



__attribute__((used)) static int FUNC_0(struct ab8500_fg *VAR_0, int VAR_1)
{



 if (VAR_1 > -VAR_0->bm->fg_params->high_curr_threshold)
  return 1;
 else
  return 0;
}
