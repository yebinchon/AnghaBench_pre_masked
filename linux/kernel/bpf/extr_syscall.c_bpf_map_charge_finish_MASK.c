
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_memory {int user; int pages; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bpf_map_memory *VAR_0)
{
 FUNC_0(VAR_0->user, VAR_0->pages);
 FUNC_1(VAR_0->user);
}
