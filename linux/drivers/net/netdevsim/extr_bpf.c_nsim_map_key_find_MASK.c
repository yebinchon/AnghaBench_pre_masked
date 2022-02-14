
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_bpf_bound_map {int * entry; } ;
struct bpf_offloaded_map {int map; struct nsim_bpf_bound_map* dev_priv; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,void*) ;

__attribute__((used)) static int FUNC_2(struct bpf_offloaded_map *VAR_1, void *VAR_2)
{
 struct nsim_bpf_bound_map *VAR_3 = VAR_1->dev_priv;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->entry); VAR_4++)
  if (FUNC_1(&VAR_1->map, &VAR_3->entry[VAR_4], VAR_2))
   return VAR_4;

 return -VAR_0;
}
