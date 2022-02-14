
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_node {int cpu; } ;
struct bpf_lru_list {int lock; } ;
struct bpf_lru {int percpu_lru; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_lru_list*,struct bpf_lru_node*,int ) ;
 struct bpf_lru_list* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct bpf_lru *VAR_1,
         struct bpf_lru_node *VAR_2)
{
 struct bpf_lru_list *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_1(VAR_1->percpu_lru, VAR_2->cpu);

 FUNC_2(&VAR_3->lock, VAR_4);

 FUNC_0(VAR_3, VAR_2, VAR_0);

 FUNC_3(&VAR_3->lock, VAR_4);
}
