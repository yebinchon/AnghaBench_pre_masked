
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {scalar_t__ head; scalar_t__ tail; } ;



__attribute__((used)) static u16 FUNC_0(struct fm10k_mbx_fifo *VAR_0)
{
 return VAR_0->tail - VAR_0->head;
}
