
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t value_size; } ;
struct bpf_queue_stack {size_t tail; size_t size; int lock; TYPE_1__ map; int * elements; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 struct bpf_queue_stack* FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 scalar_t__ FUNC_3 (struct bpf_queue_stack*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct bpf_map *VAR_1, void *VAR_2, bool VAR_3)
{
 struct bpf_queue_stack *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;
 int VAR_6 = 0;
 void *VAR_7;

 FUNC_4(&VAR_4->lock, VAR_5);

 if (FUNC_3(VAR_4)) {
  FUNC_2(VAR_2, 0, VAR_4->map.value_size);
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_7 = &VAR_4->elements[VAR_4->tail * VAR_4->map.value_size];
 FUNC_1(VAR_2, VAR_7, VAR_4->map.value_size);

 if (VAR_3) {
  if (FUNC_6(++VAR_4->tail >= VAR_4->size))
   VAR_4->tail = 0;
 }

out:
 FUNC_5(&VAR_4->lock, VAR_5);
 return VAR_6;
}
