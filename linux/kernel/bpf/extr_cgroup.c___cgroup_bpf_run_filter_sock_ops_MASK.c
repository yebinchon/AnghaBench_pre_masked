
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_cgrp_data; } ;
struct TYPE_2__ {int * effective; } ;
struct cgroup {TYPE_1__ bpf; } ;
struct bpf_sock_ops_kern {int dummy; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bpf_sock_ops_kern*,int ) ;
 int VAR_1 ;
 struct cgroup* FUNC_1 (int *) ;

int FUNC_2(struct sock *VAR_2,
         struct bpf_sock_ops_kern *VAR_3,
         enum bpf_attach_type VAR_4)
{
 struct cgroup *VAR_5 = FUNC_1(&VAR_2->sk_cgrp_data);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5->bpf.effective[VAR_4], VAR_3,
     VAR_0);
 return VAR_6 == 1 ? 0 : -VAR_1;
}
