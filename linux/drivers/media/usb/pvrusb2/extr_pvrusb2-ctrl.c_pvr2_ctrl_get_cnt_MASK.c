
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_4__* hdw; TYPE_3__* info; } ;
struct TYPE_8__ {int big_lock; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_6__ {TYPE_1__ type_enum; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ def; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

int FUNC_2(struct pvr2_ctrl *VAR_1)
{
 int VAR_2 = 0;
 if (!VAR_1) return 0;
 FUNC_1(VAR_1->hdw->big_lock); do {
  if (VAR_1->info->type == VAR_0) {
   VAR_2 = VAR_1->info->def.type_enum.count;
  }
 } while(0); FUNC_0(VAR_1->hdw->big_lock);
 return VAR_2;
}
