
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int local_list; } ;
struct bpf_lru {TYPE_1__ common_lru; int percpu_lru; scalar_t__ percpu; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct bpf_lru *VAR_0)
{
 if (VAR_0->percpu)
  FUNC_0(VAR_0->percpu_lru);
 else
  FUNC_0(VAR_0->common_lru.local_list);
}
