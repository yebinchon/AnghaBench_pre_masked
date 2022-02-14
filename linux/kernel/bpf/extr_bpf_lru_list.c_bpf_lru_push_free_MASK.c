
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_node {int dummy; } ;
struct bpf_lru {scalar_t__ percpu; } ;


 int FUNC_0 (struct bpf_lru*,struct bpf_lru_node*) ;
 int FUNC_1 (struct bpf_lru*,struct bpf_lru_node*) ;

void FUNC_2(struct bpf_lru *VAR_0, struct bpf_lru_node *VAR_1)
{
 if (VAR_0->percpu)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
