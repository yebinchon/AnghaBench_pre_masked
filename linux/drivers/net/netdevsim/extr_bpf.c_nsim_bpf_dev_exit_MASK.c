
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_dev {int bpf_dev; int bpf_bound_maps; int bpf_bound_progs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nsim_dev *VAR_0)
{
 FUNC_0(!FUNC_2(&VAR_0->bpf_bound_progs));
 FUNC_0(!FUNC_2(&VAR_0->bpf_bound_maps));
 FUNC_1(VAR_0->bpf_dev);
}
