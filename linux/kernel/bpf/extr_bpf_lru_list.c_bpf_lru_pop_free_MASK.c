
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_lru_node {int dummy; } ;
struct bpf_lru {scalar_t__ percpu; } ;


 struct bpf_lru_node* FUNC_0 (struct bpf_lru*,int ) ;
 struct bpf_lru_node* FUNC_1 (struct bpf_lru*,int ) ;

struct bpf_lru_node *FUNC_2(struct bpf_lru *VAR_0, u32 VAR_1)
{
 if (VAR_0->percpu)
  return FUNC_1(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}
