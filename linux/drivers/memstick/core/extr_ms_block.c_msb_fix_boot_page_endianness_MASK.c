
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {void* controller_function; void* controller_number; void* implemented_capacity; void* memory_device_code; void* memory_manufacturer_code; void* page_size; void* number_of_effective_blocks; void* number_of_blocks; void* block_size; } ;
struct TYPE_8__ {void* data_size; void* start_addr; } ;
struct TYPE_7__ {void* data_size; void* start_addr; } ;
struct TYPE_9__ {TYPE_3__ cis_idi; TYPE_2__ disabled_block; } ;
struct TYPE_6__ {void* format_reserved; void* block_id; } ;
struct ms_boot_page {TYPE_5__ attr; TYPE_4__ entry; TYPE_1__ header; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct ms_boot_page *VAR_0)
{
 VAR_0->header.block_id = FUNC_0(VAR_0->header.block_id);
 VAR_0->header.format_reserved = FUNC_0(VAR_0->header.format_reserved);
 VAR_0->entry.disabled_block.start_addr
  = FUNC_1(VAR_0->entry.disabled_block.start_addr);
 VAR_0->entry.disabled_block.data_size
  = FUNC_1(VAR_0->entry.disabled_block.data_size);
 VAR_0->entry.cis_idi.start_addr
  = FUNC_1(VAR_0->entry.cis_idi.start_addr);
 VAR_0->entry.cis_idi.data_size
  = FUNC_1(VAR_0->entry.cis_idi.data_size);
 VAR_0->attr.block_size = FUNC_0(VAR_0->attr.block_size);
 VAR_0->attr.number_of_blocks = FUNC_0(VAR_0->attr.number_of_blocks);
 VAR_0->attr.number_of_effective_blocks
  = FUNC_0(VAR_0->attr.number_of_effective_blocks);
 VAR_0->attr.page_size = FUNC_0(VAR_0->attr.page_size);
 VAR_0->attr.memory_manufacturer_code
  = FUNC_0(VAR_0->attr.memory_manufacturer_code);
 VAR_0->attr.memory_device_code = FUNC_0(VAR_0->attr.memory_device_code);
 VAR_0->attr.implemented_capacity
  = FUNC_0(VAR_0->attr.implemented_capacity);
 VAR_0->attr.controller_number = FUNC_0(VAR_0->attr.controller_number);
 VAR_0->attr.controller_function = FUNC_0(VAR_0->attr.controller_function);
}
