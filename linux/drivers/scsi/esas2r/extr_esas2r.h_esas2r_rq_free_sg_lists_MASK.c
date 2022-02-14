
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {int sg_table_head; } ;
struct esas2r_adapter {int sg_list_lock; int free_sg_list_head; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct esas2r_request *VAR_0,
        struct esas2r_adapter *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_0(&VAR_0->sg_table_head))
  return;

 FUNC_2(&VAR_1->sg_list_lock, VAR_2);
 FUNC_1(&VAR_0->sg_table_head, &VAR_1->free_sg_list_head);
 FUNC_3(&VAR_1->sg_list_lock, VAR_2);
}
