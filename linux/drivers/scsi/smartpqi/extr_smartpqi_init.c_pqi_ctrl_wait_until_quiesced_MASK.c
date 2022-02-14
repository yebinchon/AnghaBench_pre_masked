
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int num_blocked_threads; int num_busy_threads; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(struct pqi_ctrl_info *VAR_0)
{
 while (FUNC_0(&VAR_0->num_busy_threads) >
  FUNC_0(&VAR_0->num_blocked_threads))
  FUNC_1(1000, 2000);
}
