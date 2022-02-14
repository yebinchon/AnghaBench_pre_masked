
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {size_t value_size; } ;
struct bpf_queue_stack {size_t tail; size_t size; size_t head; int lock; TYPE_1__ map; int * elements; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_queue_stack* FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (void*,void*,size_t) ;
 scalar_t__ FUNC_2 (struct bpf_queue_stack*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct bpf_map *VAR_4, void *VAR_5,
         u64 VAR_6)
{
 struct bpf_queue_stack *VAR_7 = FUNC_0(VAR_4);
 unsigned long VAR_8;
 int VAR_9 = 0;
 void *VAR_10;




 bool VAR_11 = (VAR_6 & VAR_0);


 if (VAR_6 & VAR_1 || VAR_6 > VAR_0)
  return -VAR_3;

 FUNC_3(&VAR_7->lock, VAR_8);

 if (FUNC_2(VAR_7)) {
  if (!VAR_11) {
   VAR_9 = -VAR_2;
   goto out;
  }

  if (FUNC_5(++VAR_7->tail >= VAR_7->size))
   VAR_7->tail = 0;
 }

 VAR_10 = &VAR_7->elements[VAR_7->head * VAR_7->map.value_size];
 FUNC_1(VAR_10, VAR_5, VAR_7->map.value_size);

 if (FUNC_5(++VAR_7->head >= VAR_7->size))
  VAR_7->head = 0;

out:
 FUNC_4(&VAR_7->lock, VAR_8);
 return VAR_9;
}
