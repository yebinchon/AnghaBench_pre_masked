
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct core_table_entry {int type; int offset; int length; int s2c_dma_present; int s2c_dma_channel_num; int c2s_dma_present; int c2s_dma_channel_num; int irq_count; int irq_base_num; } ;



__attribute__((used)) static
void FUNC_0(struct core_table_entry *VAR_0, const u64 VAR_1)
{
 VAR_0->type = ((VAR_1 & 0xFFF0000000000000UL) >> 52);
 VAR_0->offset = ((VAR_1 & 0x00000000FFFF0000UL) >> 16) * 4096;
 VAR_0->length = ((VAR_1 & 0x0000FFFF00000000UL) >> 32) * 8;
 VAR_0->s2c_dma_present = ((VAR_1 & 0x0008000000000000UL) >> 51);
 VAR_0->s2c_dma_channel_num = ((VAR_1 & 0x0007000000000000UL) >> 48);
 VAR_0->c2s_dma_present = ((VAR_1 & 0x0000000000008000UL) >> 15);
 VAR_0->c2s_dma_channel_num = ((VAR_1 & 0x0000000000007000UL) >> 12);
 VAR_0->irq_count = ((VAR_1 & 0x0000000000000C00UL) >> 10);
 VAR_0->irq_base_num = ((VAR_1 & 0x00000000000003F8UL) >> 3);
}
