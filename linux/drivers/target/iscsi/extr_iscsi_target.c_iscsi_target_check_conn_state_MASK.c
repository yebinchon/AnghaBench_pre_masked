
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {scalar_t__ conn_state; int state_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct iscsi_conn *VAR_1)
{
 bool VAR_2;

 FUNC_0(&VAR_1->state_lock);
 VAR_2 = (VAR_1->conn_state != VAR_0);
 FUNC_1(&VAR_1->state_lock);

 return VAR_2;
}
