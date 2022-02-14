
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msg_group_t {int start; int end; } ;
typedef enum msg_index_t { ____Placeholder_msg_index_t } msg_index_t ;
struct TYPE_2__ {int spinlock; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct msg_group_t *VAR_3)
{
 unsigned long VAR_4;
 enum msg_index_t VAR_5;

 FUNC_1(&VAR_1.spinlock, VAR_4);

 for (VAR_5 = VAR_3->start; VAR_5 <= VAR_3->end; VAR_5++) {
  if (VAR_2[VAR_5] != VAR_0[VAR_5])
   FUNC_0(VAR_2[VAR_5]);
  VAR_2[VAR_5] = VAR_0[VAR_5];
 }
 FUNC_2(&VAR_1.spinlock, VAR_4);
}
