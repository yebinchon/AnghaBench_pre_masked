
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx18 {TYPE_1__* in_work_order; int epu_debug_str; } ;
struct TYPE_2__ {int work; int str; struct cx18* cx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct cx18 *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->in_work_order[VAR_3].cx = VAR_2;
  VAR_2->in_work_order[VAR_3].str = VAR_2->epu_debug_str;
  FUNC_0(&VAR_2->in_work_order[VAR_3].work, VAR_1);
 }
}
