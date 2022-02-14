
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bpf_lru_node {size_t type; int list; scalar_t__ ref; } ;
struct bpf_lru_list {int * lists; } ;
struct TYPE_2__ {struct bpf_lru_list lru_list; } ;
struct bpf_lru {TYPE_1__ common_lru; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct bpf_lru *VAR_1, void *VAR_2,
        u32 VAR_3, u32 VAR_4,
        u32 VAR_5)
{
 struct bpf_lru_list *VAR_6 = &VAR_1->common_lru.lru_list;
 u32 VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct bpf_lru_node *VAR_8;

  VAR_8 = (struct bpf_lru_node *)(VAR_2 + VAR_3);
  VAR_8->type = VAR_0;
  VAR_8->ref = 0;
  FUNC_0(&VAR_8->list, &VAR_6->lists[VAR_0]);
  VAR_2 += VAR_4;
 }
}
