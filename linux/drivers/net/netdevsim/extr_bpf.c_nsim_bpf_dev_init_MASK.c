
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_dev {int bpf_bind_accept; int bpf_bind_verifier_delay; int ddir; int bpf_dev; int ddir_bpf_bound_progs; int bpf_bound_maps; int bpf_bound_progs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct nsim_dev*) ;
 int FUNC_4 (char*,int,int ,int*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int,int ,int *) ;
 int VAR_1 ;

int FUNC_7(struct nsim_dev *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->bpf_bound_progs);
 FUNC_0(&VAR_2->bpf_bound_maps);

 VAR_2->ddir_bpf_bound_progs = FUNC_5("bpf_bound_progs",
           VAR_2->ddir);
 if (FUNC_1(VAR_2->ddir_bpf_bound_progs))
  return -VAR_0;

 VAR_2->bpf_dev = FUNC_3(&VAR_1, VAR_2);
 VAR_3 = FUNC_2(VAR_2->bpf_dev);
 if (VAR_3)
  return VAR_3;

 VAR_2->bpf_bind_accept = 1;
 FUNC_4("bpf_bind_accept", 0600, VAR_2->ddir,
       &VAR_2->bpf_bind_accept);
 FUNC_6("bpf_bind_verifier_delay", 0600, VAR_2->ddir,
      &VAR_2->bpf_bind_verifier_delay);
 return 0;
}
