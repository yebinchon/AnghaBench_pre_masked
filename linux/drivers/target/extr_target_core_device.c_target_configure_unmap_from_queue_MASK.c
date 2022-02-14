
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_dev_attrib {int max_unmap_lba_count; int max_unmap_block_desc_count; int unmap_granularity; int unmap_granularity_alignment; int unmap_zeroes_data; } ;
struct TYPE_2__ {int max_discard_sectors; int discard_granularity; int discard_alignment; int max_write_zeroes_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct request_queue*) ;

bool FUNC_3(struct se_dev_attrib *VAR_0,
           struct request_queue *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1);

 if (!FUNC_0(VAR_1))
  return 0;

 VAR_0->max_unmap_lba_count =
  VAR_1->limits.max_discard_sectors >> (FUNC_1(VAR_2) - 9);



 VAR_0->max_unmap_block_desc_count = 1;
 VAR_0->unmap_granularity = VAR_1->limits.discard_granularity / VAR_2;
 VAR_0->unmap_granularity_alignment = VAR_1->limits.discard_alignment /
        VAR_2;
 VAR_0->unmap_zeroes_data = (VAR_1->limits.max_write_zeroes_sectors);
 return 1;
}
