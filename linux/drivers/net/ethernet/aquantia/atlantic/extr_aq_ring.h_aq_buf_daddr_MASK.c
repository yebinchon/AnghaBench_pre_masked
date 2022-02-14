
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_rxpage {scalar_t__ pg_off; scalar_t__ daddr; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static inline dma_addr_t FUNC_0(struct aq_rxpage *VAR_0)
{
 return VAR_0->daddr + VAR_0->pg_off;
}
