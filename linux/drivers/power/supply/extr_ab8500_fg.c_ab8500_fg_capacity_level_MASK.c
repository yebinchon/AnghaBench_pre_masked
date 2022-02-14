
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ low_bat; } ;
struct TYPE_8__ {int permille; } ;
struct ab8500_fg {TYPE_3__* bm; TYPE_1__ flags; TYPE_4__ bat_cap; } ;
struct TYPE_7__ {TYPE_2__* cap_levels; } ;
struct TYPE_6__ {int critical; int low; int normal; int high; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct ab8500_fg *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_5->bat_cap.permille, 10);

 if (VAR_7 <= VAR_5->bm->cap_levels->critical ||
  VAR_5->flags.low_bat)
  VAR_6 = VAR_0;
 else if (VAR_7 <= VAR_5->bm->cap_levels->low)
  VAR_6 = VAR_3;
 else if (VAR_7 <= VAR_5->bm->cap_levels->normal)
  VAR_6 = VAR_4;
 else if (VAR_7 <= VAR_5->bm->cap_levels->high)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 return VAR_6;
}
