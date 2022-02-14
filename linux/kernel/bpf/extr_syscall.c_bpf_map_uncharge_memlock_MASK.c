
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int pages; int user; } ;
struct bpf_map {TYPE_1__ memory; } ;


 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(struct bpf_map *VAR_0, u32 VAR_1)
{
 FUNC_0(VAR_0->memory.user, VAR_1);
 VAR_0->memory.pages -= VAR_1;
}
