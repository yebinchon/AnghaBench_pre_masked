
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_blocks; struct o2hb_disk_slot* hr_slots; } ;
struct o2hb_disk_slot {void* ds_last_generation; void* ds_last_time; scalar_t__ ds_raw_block; } ;
struct o2hb_disk_heartbeat_block {int hb_generation; int hb_seq; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct o2hb_region*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct o2hb_region *VAR_0)
{
 int VAR_1, VAR_2;
 struct o2hb_disk_slot *VAR_3;
 struct o2hb_disk_heartbeat_block *VAR_4;

 VAR_1 = FUNC_1(VAR_0, 0, VAR_0->hr_blocks);
 if (VAR_1)
  goto out;





 for(VAR_2 = 0; VAR_2 < VAR_0->hr_blocks; VAR_2++) {
  VAR_3 = &VAR_0->hr_slots[VAR_2];
  VAR_4 = (struct o2hb_disk_heartbeat_block *) VAR_3->ds_raw_block;



  VAR_3->ds_last_time = FUNC_0(VAR_4->hb_seq);
  VAR_3->ds_last_generation = FUNC_0(VAR_4->hb_generation);
 }

out:
 return VAR_1;
}
