
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_tx {int last_head; int last_tail; int ring_size; } ;



__attribute__((used)) static int FUNC_0(struct lan743x_tx *VAR_0)
{
 int VAR_1 = VAR_0->last_head;
 int VAR_2 = VAR_0->last_tail;

 if (VAR_2 >= VAR_1)
  return VAR_0->ring_size - VAR_2 + VAR_1 - 1;
 else
  return VAR_1 - VAR_2 - 1;
}
