
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nsim_bpf_bound_map {int mutex; TYPE_2__* entry; } ;
struct TYPE_3__ {int value_size; int key_size; } ;
struct bpf_offloaded_map {TYPE_1__ map; struct nsim_bpf_bound_map* dev_priv; } ;
struct TYPE_4__ {int value; int key; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bpf_offloaded_map*,int) ;
 int FUNC_5 (struct bpf_offloaded_map*,void*) ;

__attribute__((used)) static int
FUNC_6(struct bpf_offloaded_map *VAR_4,
       void *VAR_5, void *VAR_6, u64 VAR_7)
{
 struct nsim_bpf_bound_map *VAR_8 = VAR_4->dev_priv;
 int VAR_9, VAR_10 = 0;

 FUNC_2(&VAR_8->mutex);

 VAR_9 = FUNC_5(VAR_4, VAR_5);
 if (VAR_9 < 0 && VAR_7 == VAR_0) {
  VAR_10 = VAR_9;
  goto exit_unlock;
 }
 if (VAR_9 >= 0 && VAR_7 == VAR_1) {
  VAR_10 = -VAR_3;
  goto exit_unlock;
 }

 if (VAR_9 < 0) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8->entry); VAR_9++)
   if (!VAR_8->entry[VAR_9].key)
    break;
  if (VAR_9 == FUNC_0(VAR_8->entry)) {
   VAR_10 = -VAR_2;
   goto exit_unlock;
  }

  VAR_10 = FUNC_4(VAR_4, VAR_9);
  if (VAR_10)
   goto exit_unlock;
 }

 FUNC_1(VAR_8->entry[VAR_9].key, VAR_5, VAR_4->map.key_size);
 FUNC_1(VAR_8->entry[VAR_9].value, VAR_6, VAR_4->map.value_size);
exit_unlock:
 FUNC_3(&VAR_8->mutex);

 return VAR_10;
}
