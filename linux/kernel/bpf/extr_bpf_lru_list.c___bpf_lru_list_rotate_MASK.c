
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_list {int dummy; } ;
struct bpf_lru {int dummy; } ;


 int FUNC_0 (struct bpf_lru*,struct bpf_lru_list*) ;
 int FUNC_1 (struct bpf_lru*,struct bpf_lru_list*) ;
 scalar_t__ FUNC_2 (struct bpf_lru_list*) ;

__attribute__((used)) static void FUNC_3(struct bpf_lru *VAR_0, struct bpf_lru_list *VAR_1)
{
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_1);
}
