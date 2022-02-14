
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_lru {scalar_t__ percpu; } ;


 int FUNC_0 (struct bpf_lru*,void*,int ,int ,int ) ;
 int FUNC_1 (struct bpf_lru*,void*,int ,int ,int ) ;

void FUNC_2(struct bpf_lru *VAR_0, void *VAR_1, u32 VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 if (VAR_0->percpu)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4);
}
