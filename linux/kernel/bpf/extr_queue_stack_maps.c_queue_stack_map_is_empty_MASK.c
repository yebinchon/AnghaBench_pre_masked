
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_queue_stack {scalar_t__ head; scalar_t__ tail; } ;



__attribute__((used)) static bool FUNC_0(struct bpf_queue_stack *VAR_0)
{
 return VAR_0->head == VAR_0->tail;
}
