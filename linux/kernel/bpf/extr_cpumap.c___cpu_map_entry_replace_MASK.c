
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bpf_cpu_map_entry {int kthread_stop_wq; int rcu; } ;
struct bpf_cpu_map {int * cpu_map; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 struct bpf_cpu_map_entry* FUNC_3 (int *,struct bpf_cpu_map_entry*) ;

__attribute__((used)) static void FUNC_4(struct bpf_cpu_map *VAR_2,
        u32 VAR_3, struct bpf_cpu_map_entry *VAR_4)
{
 struct bpf_cpu_map_entry *VAR_5;

 VAR_5 = FUNC_3(&VAR_2->cpu_map[VAR_3], VAR_4);
 if (VAR_5) {
  FUNC_1(&VAR_5->rcu, VAR_0);
  FUNC_0(&VAR_5->kthread_stop_wq, VAR_1);
  FUNC_2(&VAR_5->kthread_stop_wq);
 }
}
