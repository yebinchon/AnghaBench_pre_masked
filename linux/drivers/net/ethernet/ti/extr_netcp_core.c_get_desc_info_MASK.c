
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct knav_dma_desc {int packet_info; int desc_info; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_0, u32 *VAR_1,
     struct knav_dma_desc *VAR_2)
{
 *VAR_0 = FUNC_0(VAR_2->desc_info);
 *VAR_1 = FUNC_0(VAR_2->packet_info);
}
