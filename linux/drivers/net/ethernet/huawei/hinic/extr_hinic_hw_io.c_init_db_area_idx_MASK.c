
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_free_db_area {int* db_idx; int return_pos; int num_free; int idx_lock; scalar_t__ alloc_pos; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct hinic_free_db_area *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->db_idx[VAR_2] = VAR_2;

 VAR_1->alloc_pos = 0;
 VAR_1->return_pos = VAR_0;

 VAR_1->num_free = VAR_0;

 FUNC_0(&VAR_1->idx_lock, 1);
}
