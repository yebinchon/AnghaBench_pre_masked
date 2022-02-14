
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddcb_queue {scalar_t__ ddcb_next; scalar_t__ ddcb_act; int ddcb_max; } ;



__attribute__((used)) static int FUNC_0(struct ddcb_queue *VAR_0)
{
 if (VAR_0->ddcb_next >= VAR_0->ddcb_act)
  return VAR_0->ddcb_next - VAR_0->ddcb_act;

 return VAR_0->ddcb_max - (VAR_0->ddcb_act - VAR_0->ddcb_next);
}
