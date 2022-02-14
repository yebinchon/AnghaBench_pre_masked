
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_lru_node {int cpu; int list; scalar_t__ ref; int type; } ;
struct bpf_lru_locallist {int dummy; } ;
struct bpf_lru {int hash_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bpf_lru_locallist*) ;

__attribute__((used)) static void FUNC_2(struct bpf_lru *VAR_1,
         struct bpf_lru_locallist *VAR_2,
         int VAR_3,
         struct bpf_lru_node *VAR_4,
         u32 VAR_5)
{
 *(u32 *)((void *)VAR_4 + VAR_1->hash_offset) = VAR_5;
 VAR_4->cpu = VAR_3;
 VAR_4->type = VAR_0;
 VAR_4->ref = 0;
 FUNC_0(&VAR_4->list, FUNC_1(VAR_2));
}
