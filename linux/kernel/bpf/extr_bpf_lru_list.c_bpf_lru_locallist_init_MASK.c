
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_locallist {int next_steal; int lock; int * lists; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bpf_lru_locallist *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_1->lists[VAR_3]);

 VAR_1->next_steal = VAR_2;

 FUNC_1(&VAR_1->lock);
}
