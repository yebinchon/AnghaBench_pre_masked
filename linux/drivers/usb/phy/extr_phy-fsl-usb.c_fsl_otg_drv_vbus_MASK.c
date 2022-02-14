
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct otg_fsm {int dummy; } ;
struct TYPE_2__ {int portsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 TYPE_1__* VAR_2 ;

void FUNC_2(struct otg_fsm *VAR_3, int VAR_4)
{
 u32 VAR_5;

 if (VAR_4) {
  VAR_5 = FUNC_0(&VAR_2->portsc) & ~VAR_1;
  FUNC_1(VAR_5 | VAR_0, &VAR_2->portsc);
 } else {
  VAR_5 = FUNC_0(&VAR_2->portsc) &
        ~VAR_1 & ~VAR_0;
  FUNC_1(VAR_5, &VAR_2->portsc);
 }
}
