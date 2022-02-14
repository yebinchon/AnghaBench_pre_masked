
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_node {int ref; } ;



__attribute__((used)) static inline void FUNC_0(struct bpf_lru_node *VAR_0)
{



 if (!VAR_0->ref)
  VAR_0->ref = 1;
}
