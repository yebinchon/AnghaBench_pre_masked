
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsim_bpf_bound_map {int mutex; TYPE_2__* entry; } ;
struct TYPE_3__ {scalar_t__ map_type; } ;
struct bpf_offloaded_map {TYPE_1__ map; struct nsim_bpf_bound_map* dev_priv; } ;
struct TYPE_4__ {int value; int key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bpf_offloaded_map*,void*) ;

__attribute__((used)) static int FUNC_5(struct bpf_offloaded_map *VAR_2, void *VAR_3)
{
 struct nsim_bpf_bound_map *VAR_4 = VAR_2->dev_priv;
 int VAR_5;

 if (VAR_2->map.map_type == VAR_0)
  return -VAR_1;

 FUNC_2(&VAR_4->mutex);

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5 >= 0) {
  FUNC_0(VAR_4->entry[VAR_5].key);
  FUNC_0(VAR_4->entry[VAR_5].value);
  FUNC_1(&VAR_4->entry[VAR_5], 0, sizeof(VAR_4->entry[VAR_5]));
 }

 FUNC_3(&VAR_4->mutex);

 return VAR_5 < 0 ? VAR_5 : 0;
}
