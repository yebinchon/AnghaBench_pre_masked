
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct wmt_dma_descriptor {int flags; void* branch_addr; void* data_buffer_addr; } ;



__attribute__((used)) static void FUNC_0(struct wmt_dma_descriptor *VAR_0,
  u16 VAR_1, u32 VAR_2, u32 VAR_3, int VAR_4)
{
 VAR_0->flags = 0x40000000 | VAR_1;
 if (VAR_4)
  VAR_0->flags |= 0x80000000;
 VAR_0->data_buffer_addr = VAR_2;
 VAR_0->branch_addr = VAR_3;
}
