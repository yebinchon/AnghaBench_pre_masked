
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_sge {int len; int lo_addr; int hi_addr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct hinic_sge *VAR_0, dma_addr_t VAR_1, int VAR_2)
{
 VAR_0->hi_addr = FUNC_1(VAR_1);
 VAR_0->lo_addr = FUNC_0(VAR_1);
 VAR_0->len = VAR_2;
}
