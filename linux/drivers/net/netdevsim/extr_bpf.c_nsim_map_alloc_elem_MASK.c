
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsim_bpf_bound_map {TYPE_2__* entry; } ;
struct TYPE_3__ {int value_size; int key_size; } ;
struct bpf_offloaded_map {TYPE_1__ map; struct nsim_bpf_bound_map* dev_priv; } ;
struct TYPE_4__ {int * key; void* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bpf_offloaded_map *VAR_2, unsigned int VAR_3)
{
 struct nsim_bpf_bound_map *VAR_4 = VAR_2->dev_priv;

 VAR_4->entry[VAR_3].key = FUNC_1(VAR_2->map.key_size, VAR_1);
 if (!VAR_4->entry[VAR_3].key)
  return -VAR_0;
 VAR_4->entry[VAR_3].value = FUNC_1(VAR_2->map.value_size, VAR_1);
 if (!VAR_4->entry[VAR_3].value) {
  FUNC_0(VAR_4->entry[VAR_3].key);
  VAR_4->entry[VAR_3].key = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
