
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_fifo {int tail; int head; } ;



__attribute__((used)) static void FUNC_0(struct fm10k_mbx_fifo *VAR_0)
{
 VAR_0->head = VAR_0->tail;
}
