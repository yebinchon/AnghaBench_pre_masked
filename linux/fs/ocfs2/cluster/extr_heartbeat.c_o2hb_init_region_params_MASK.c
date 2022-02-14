
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_slots_per_page; int hr_block_bits; int hr_timeout_ms; int hr_block_bytes; int hr_blocks; int hr_start_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct o2hb_region *VAR_4)
{
 VAR_4->hr_slots_per_page = VAR_2 >> VAR_4->hr_block_bits;
 VAR_4->hr_timeout_ms = VAR_1;

 FUNC_0(VAR_0, "hr_start_block = %llu, hr_blocks = %u\n",
      VAR_4->hr_start_block, VAR_4->hr_blocks);
 FUNC_0(VAR_0, "hr_block_bytes = %u, hr_block_bits = %u\n",
      VAR_4->hr_block_bytes, VAR_4->hr_block_bits);
 FUNC_0(VAR_0, "hr_timeout_ms = %u\n", VAR_4->hr_timeout_ms);
 FUNC_0(VAR_0, "dead threshold = %u\n", VAR_3);
}
