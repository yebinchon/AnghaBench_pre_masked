
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsim_bpf_bound_map {TYPE_2__* entry; int mutex; } ;
struct TYPE_3__ {int key_size; } ;
struct bpf_offloaded_map {TYPE_1__ map; struct nsim_bpf_bound_map* dev_priv; } ;
struct TYPE_4__ {scalar_t__ key; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (void*,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bpf_offloaded_map*,void*) ;

__attribute__((used)) static int
FUNC_5(struct bpf_offloaded_map *VAR_1,
        void *VAR_2, void *VAR_3)
{
 struct nsim_bpf_bound_map *VAR_4 = VAR_1->dev_priv;
 int VAR_5 = -VAR_0;

 FUNC_2(&VAR_4->mutex);

 if (VAR_2)
  VAR_5 = FUNC_4(VAR_1, VAR_2);
 if (VAR_5 == -VAR_0)
  VAR_5 = 0;
 else
  VAR_5++;

 for (; VAR_5 < FUNC_0(VAR_4->entry); VAR_5++) {
  if (VAR_4->entry[VAR_5].key) {
   FUNC_1(VAR_3, VAR_4->entry[VAR_5].key,
          VAR_1->map.key_size);
   break;
  }
 }

 FUNC_3(&VAR_4->mutex);

 if (VAR_5 == FUNC_0(VAR_4->entry))
  return -VAR_0;
 return 0;
}
