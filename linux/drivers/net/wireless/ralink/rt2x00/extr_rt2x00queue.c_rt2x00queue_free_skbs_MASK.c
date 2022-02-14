
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_queue {unsigned int limit; int * entries; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct data_queue *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0->entries)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->limit; VAR_1++) {
  FUNC_0(&VAR_0->entries[VAR_1]);
 }
}
