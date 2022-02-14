
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_busy_timer {int start_time; int n_ops; } ;
typedef int ktime_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static ktime_t
FUNC_3(struct nfs4_ff_busy_timer *VAR_0, ktime_t VAR_1)
{
 ktime_t VAR_2;

 if (FUNC_1(&VAR_0->n_ops) < 0)
  FUNC_0(1);

 VAR_2 = VAR_0->start_time;
 VAR_0->start_time = VAR_1;
 return FUNC_2(VAR_1, VAR_2);
}
