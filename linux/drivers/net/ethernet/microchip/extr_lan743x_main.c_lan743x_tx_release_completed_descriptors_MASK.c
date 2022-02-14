
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_tx {scalar_t__* head_cpu_ptr; scalar_t__ last_head; } ;


 scalar_t__ FUNC_0 (struct lan743x_tx*,scalar_t__) ;
 int FUNC_1 (struct lan743x_tx*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct lan743x_tx *VAR_0)
{
 while ((*VAR_0->head_cpu_ptr) != (VAR_0->last_head)) {
  FUNC_1(VAR_0, VAR_0->last_head, 0);
  VAR_0->last_head = FUNC_0(VAR_0, VAR_0->last_head);
 }
}
