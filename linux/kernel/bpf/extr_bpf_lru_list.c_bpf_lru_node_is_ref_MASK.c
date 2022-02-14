
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_node {int ref; } ;



__attribute__((used)) static bool FUNC_0(const struct bpf_lru_node *VAR_0)
{
 return VAR_0->ref;
}
