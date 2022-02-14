
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si476x_core {int rds_drainer_is_working; int rds_drainer_status_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct si476x_core *VAR_0)
{
 FUNC_0(&VAR_0->rds_drainer_status_lock);
 VAR_0->rds_drainer_is_working = 0;
 FUNC_1(&VAR_0->rds_drainer_status_lock);
}
