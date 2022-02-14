
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct o2hb_region {unsigned int hr_slots_per_page; int hr_blocks; unsigned int hr_num_pages; int hr_block_bytes; struct o2hb_disk_slot* hr_slots; struct page** hr_slot_data; int * hr_tmp_block; } ;
struct o2hb_disk_slot {int ds_node_num; struct o2hb_disk_heartbeat_block* ds_raw_block; int ds_live_item; } ;
struct o2hb_disk_heartbeat_block {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct page* FUNC_2 (int ) ;
 void* FUNC_3 (int,int,int ) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 char* FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(struct o2hb_region *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7 = VAR_3->hr_slots_per_page;
 struct page *VAR_8;
 char *VAR_9;
 struct o2hb_disk_slot *VAR_10;

 VAR_3->hr_tmp_block = FUNC_4(VAR_3->hr_block_bytes, VAR_1);
 if (VAR_3->hr_tmp_block == ((void*)0))
  return -VAR_0;

 VAR_3->hr_slots = FUNC_3(VAR_3->hr_blocks,
    sizeof(struct o2hb_disk_slot), VAR_1);
 if (VAR_3->hr_slots == ((void*)0))
  return -VAR_0;

 for(VAR_4 = 0; VAR_4 < VAR_3->hr_blocks; VAR_4++) {
  VAR_10 = &VAR_3->hr_slots[VAR_4];
  VAR_10->ds_node_num = VAR_4;
  FUNC_1(&VAR_10->ds_live_item);
  VAR_10->ds_raw_block = ((void*)0);
 }

 VAR_3->hr_num_pages = (VAR_3->hr_blocks + VAR_7 - 1) / VAR_7;
 FUNC_5(VAR_2, "Going to require %u pages to cover %u blocks "
      "at %u blocks per page\n",
      VAR_3->hr_num_pages, VAR_3->hr_blocks, VAR_7);

 VAR_3->hr_slot_data = FUNC_3(VAR_3->hr_num_pages, sizeof(struct page *),
        VAR_1);
 if (!VAR_3->hr_slot_data)
  return -VAR_0;

 for(VAR_4 = 0; VAR_4 < VAR_3->hr_num_pages; VAR_4++) {
  VAR_8 = FUNC_2(VAR_1);
  if (!VAR_8)
   return -VAR_0;

  VAR_3->hr_slot_data[VAR_4] = VAR_8;

  VAR_6 = VAR_4 * VAR_7;
  VAR_9 = FUNC_6(VAR_8);
  for (VAR_5 = 0;
       (VAR_5 < VAR_7) && ((VAR_5 + VAR_6) < VAR_3->hr_blocks);
       VAR_5++) {
   FUNC_0((VAR_5 + VAR_6) >= VAR_3->hr_blocks);

   VAR_10 = &VAR_3->hr_slots[VAR_5 + VAR_6];
   VAR_10->ds_raw_block =
    (struct o2hb_disk_heartbeat_block *) VAR_9;

   VAR_9 += VAR_3->hr_block_bytes;
  }
 }

 return 0;
}
