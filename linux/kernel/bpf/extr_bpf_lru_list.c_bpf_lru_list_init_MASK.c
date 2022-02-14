
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_list {int lock; int * lists; int * next_inactive_rotation; scalar_t__* counts; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bpf_lru_list *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_3->lists[VAR_4]);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->counts[VAR_4] = 0;

 VAR_3->next_inactive_rotation = &VAR_3->lists[VAR_0];

 FUNC_1(&VAR_3->lock);
}
