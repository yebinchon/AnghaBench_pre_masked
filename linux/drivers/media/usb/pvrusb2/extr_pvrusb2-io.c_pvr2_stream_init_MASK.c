
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int idle_list; int ready_list; int queued_list; int mutex; int list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pvr2_stream *VAR_0)
{
 FUNC_2(&VAR_0->list_lock);
 FUNC_1(&VAR_0->mutex);
 FUNC_0(&VAR_0->queued_list);
 FUNC_0(&VAR_0->ready_list);
 FUNC_0(&VAR_0->idle_list);
}
