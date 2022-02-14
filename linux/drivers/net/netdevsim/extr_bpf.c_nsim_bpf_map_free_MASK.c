
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsim_bpf_bound_map {int mutex; int l; TYPE_1__* entry; } ;
struct bpf_offloaded_map {struct nsim_bpf_bound_map* dev_priv; } ;
struct TYPE_2__ {struct nsim_bpf_bound_map* value; struct nsim_bpf_bound_map* key; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nsim_bpf_bound_map*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bpf_offloaded_map *VAR_0)
{
 struct nsim_bpf_bound_map *VAR_1 = VAR_0->dev_priv;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->entry); VAR_2++) {
  FUNC_1(VAR_1->entry[VAR_2].key);
  FUNC_1(VAR_1->entry[VAR_2].value);
 }
 FUNC_2(&VAR_1->l);
 FUNC_3(&VAR_1->mutex);
 FUNC_1(VAR_1);
}
