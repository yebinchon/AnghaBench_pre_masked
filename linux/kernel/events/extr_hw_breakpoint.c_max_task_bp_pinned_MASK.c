
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum bp_type_idx { ____Placeholder_bp_type_idx } bp_type_idx ;
struct TYPE_2__ {unsigned int* tsk_pinned; } ;


 TYPE_1__* FUNC_0 (int,int) ;
 int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(int VAR_1, enum bp_type_idx VAR_2)
{
 unsigned int *VAR_3 = FUNC_0(VAR_1, VAR_2)->tsk_pinned;
 int VAR_4;

 for (VAR_4 = VAR_0[VAR_2] - 1; VAR_4 >= 0; VAR_4--) {
  if (VAR_3[VAR_4] > 0)
   return VAR_4 + 1;
 }

 return 0;
}
