
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_fifo {scalar_t__ tail; scalar_t__ head; int size; int * buffer; } ;



__attribute__((used)) static void FUNC_0(struct fm10k_mbx_fifo *VAR_0, u32 *VAR_1, u16 VAR_2)
{
 VAR_0->buffer = VAR_1;
 VAR_0->size = VAR_2;
 VAR_0->head = 0;
 VAR_0->tail = 0;
}
