
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_cpu_map_entry {struct bpf_cpu_map_entry* queue; int refcnt; } ;


 int FUNC_0 (struct bpf_cpu_map_entry*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bpf_cpu_map_entry*) ;
 int FUNC_3 (struct bpf_cpu_map_entry*,int *) ;

__attribute__((used)) static void FUNC_4(struct bpf_cpu_map_entry *VAR_0)
{
 if (FUNC_1(&VAR_0->refcnt)) {

  FUNC_0(VAR_0->queue);
  FUNC_3(VAR_0->queue, ((void*)0));
  FUNC_2(VAR_0->queue);
  FUNC_2(VAR_0);
 }
}
