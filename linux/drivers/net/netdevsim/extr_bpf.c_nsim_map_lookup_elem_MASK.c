
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsim_bpf_bound_map {int mutex; TYPE_1__* entry; } ;
struct TYPE_4__ {int value_size; } ;
struct bpf_offloaded_map {TYPE_2__ map; struct nsim_bpf_bound_map* dev_priv; } ;
struct TYPE_3__ {int value; } ;


 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bpf_offloaded_map*,void*) ;

__attribute__((used)) static int
FUNC_4(struct bpf_offloaded_map *VAR_0, void *VAR_1, void *VAR_2)
{
 struct nsim_bpf_bound_map *VAR_3 = VAR_0->dev_priv;
 int VAR_4;

 FUNC_1(&VAR_3->mutex);

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (VAR_4 >= 0)
  FUNC_0(VAR_2, VAR_3->entry[VAR_4].value, VAR_0->map.value_size);

 FUNC_2(&VAR_3->mutex);

 return VAR_4 < 0 ? VAR_4 : 0;
}
