
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct s_fpmc* table; } ;
struct TYPE_5__ {TYPE_1__ mc; scalar_t__ os_slots_used; } ;
struct TYPE_6__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_3__ hw; } ;
struct s_fpmc {scalar_t__ n; int perm; } ;


 int VAR_0 ;

void FUNC_0(struct s_smc *VAR_1)
{
 struct s_fpmc *VAR_2 ;
 int VAR_3 ;

 VAR_1->hw.fp.os_slots_used = 0 ;

 for (VAR_3 = 0, VAR_2 = VAR_1->hw.fp.mc.table ; VAR_3 < VAR_0 ; VAR_3++, VAR_2++){
  if (!VAR_2->perm) {
   VAR_2->n = 0 ;
  }
 }
}
