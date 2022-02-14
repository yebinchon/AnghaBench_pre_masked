
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_r2t {int r2t_list; } ;
struct iscsi_cmd {int r2t_lock; } ;


 int FUNC_0 (int ,struct iscsi_r2t*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_r2t *VAR_1, struct iscsi_cmd *VAR_2)
{
 FUNC_2(&VAR_2->r2t_lock);

 FUNC_1(&VAR_1->r2t_list);
 FUNC_0(VAR_0, VAR_1);
}
