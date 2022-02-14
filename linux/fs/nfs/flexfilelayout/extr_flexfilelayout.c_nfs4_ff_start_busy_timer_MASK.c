
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_busy_timer {int start_time; int n_ops; } ;
typedef int ktime_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct nfs4_ff_busy_timer *VAR_0, ktime_t VAR_1)
{

 if (FUNC_0(&VAR_0->n_ops) == 1) {
  VAR_0->start_time = VAR_1;
 }
}
