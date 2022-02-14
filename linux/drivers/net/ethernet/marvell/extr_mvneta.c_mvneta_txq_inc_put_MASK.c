
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_tx_queue {scalar_t__ txq_put_index; scalar_t__ size; } ;



__attribute__((used)) static void FUNC_0(struct mvneta_tx_queue *VAR_0)
{
 VAR_0->txq_put_index++;
 if (VAR_0->txq_put_index == VAR_0->size)
  VAR_0->txq_put_index = 0;
}
