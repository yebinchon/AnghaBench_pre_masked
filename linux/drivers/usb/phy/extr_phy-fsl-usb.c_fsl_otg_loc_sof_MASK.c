
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct otg_fsm {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dr_mem_map; } ;
struct TYPE_3__ {int portsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct otg_fsm *VAR_4, int VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(&VAR_3->dr_mem_map->portsc) & ~VAR_2;
 if (VAR_5)
  VAR_6 |= VAR_0;
 else
  VAR_6 |= VAR_1;

 FUNC_1(VAR_6, &VAR_3->dr_mem_map->portsc);

}
