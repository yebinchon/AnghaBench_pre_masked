
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_tx_queue {scalar_t__ next_desc_to_proc; scalar_t__ last_desc; } ;



__attribute__((used)) static void FUNC_0(struct mvpp2_tx_queue *VAR_0)
{
 if (VAR_0->next_desc_to_proc == 0)
  VAR_0->next_desc_to_proc = VAR_0->last_desc - 1;
 else
  VAR_0->next_desc_to_proc--;
}
