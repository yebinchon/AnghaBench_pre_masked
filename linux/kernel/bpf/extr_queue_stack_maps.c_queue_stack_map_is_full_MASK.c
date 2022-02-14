
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bpf_queue_stack {scalar_t__ head; scalar_t__ size; scalar_t__ tail; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct bpf_queue_stack *VAR_0)
{
 u32 VAR_1 = VAR_0->head + 1;

 if (FUNC_0(VAR_1 >= VAR_0->size))
  VAR_1 = 0;

 return VAR_1 == VAR_0->tail;
}
