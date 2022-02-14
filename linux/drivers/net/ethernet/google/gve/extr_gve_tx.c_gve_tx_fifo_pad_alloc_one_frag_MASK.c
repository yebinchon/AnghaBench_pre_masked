
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_tx_fifo {scalar_t__ head; scalar_t__ size; } ;



__attribute__((used)) static int FUNC_0(struct gve_tx_fifo *VAR_0,
       size_t VAR_1)
{
 return (VAR_0->head + VAR_1 < VAR_0->size) ? 0 : VAR_0->size - VAR_0->head;
}
