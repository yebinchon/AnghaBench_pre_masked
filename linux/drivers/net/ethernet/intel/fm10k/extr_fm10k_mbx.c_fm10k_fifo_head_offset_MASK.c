
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fm10k_mbx_fifo {int head; int size; } ;



__attribute__((used)) static u16 FUNC_0(struct fm10k_mbx_fifo *VAR_0, u16 VAR_1)
{
 return (VAR_0->head + VAR_1) & (VAR_0->size - 1);
}
