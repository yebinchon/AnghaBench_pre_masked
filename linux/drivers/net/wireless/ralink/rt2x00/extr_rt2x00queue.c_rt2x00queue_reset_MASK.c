
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_queue {int index_lock; scalar_t__* index; scalar_t__ length; scalar_t__ count; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct data_queue *VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 FUNC_0(&VAR_1->index_lock, VAR_2);

 VAR_1->count = 0;
 VAR_1->length = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->index[VAR_3] = 0;

 FUNC_1(&VAR_1->index_lock, VAR_2);
}
