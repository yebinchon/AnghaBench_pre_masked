
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_txq_pcpu {scalar_t__ txq_get_index; scalar_t__ size; } ;



__attribute__((used)) static void FUNC_0(struct mvpp2_txq_pcpu *VAR_0)
{
 VAR_0->txq_get_index++;
 if (VAR_0->txq_get_index == VAR_0->size)
  VAR_0->txq_get_index = 0;
}
