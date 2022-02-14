
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hinic_sge {int lo_addr; scalar_t__ hi_addr; } ;
typedef int dma_addr_t ;



dma_addr_t FUNC_0(struct hinic_sge *VAR_0)
{
 return (dma_addr_t)((((u64)VAR_0->hi_addr) << 32) | VAR_0->lo_addr);
}
