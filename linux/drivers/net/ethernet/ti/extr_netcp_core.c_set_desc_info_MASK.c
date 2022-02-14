
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct knav_dma_desc {void* packet_info; void* desc_info; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0, u32 VAR_1,
     struct knav_dma_desc *VAR_2)
{
 VAR_2->desc_info = FUNC_0(VAR_0);
 VAR_2->packet_info = FUNC_0(VAR_1);
}
