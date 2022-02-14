
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_dev_name; struct o2hb_disk_slot* hr_slots; } ;
struct o2hb_disk_slot {scalar_t__ ds_last_time; scalar_t__ ds_last_generation; scalar_t__ ds_node_num; struct o2hb_disk_heartbeat_block* ds_raw_block; } ;
struct o2hb_disk_heartbeat_block {scalar_t__ hb_node; int hb_seq; int hb_generation; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,int ,scalar_t__,unsigned long long,unsigned long long,scalar_t__,unsigned long long,unsigned long long) ;
 size_t FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct o2hb_region *VAR_4)
{
 struct o2hb_disk_slot *VAR_5;
 struct o2hb_disk_heartbeat_block *VAR_6;
 char *VAR_7;

 VAR_5 = &VAR_4->hr_slots[FUNC_2()];

 if (!VAR_5->ds_last_time)
  return 0;

 VAR_6 = VAR_5->ds_raw_block;
 if (FUNC_0(VAR_6->hb_seq) == VAR_5->ds_last_time &&
     FUNC_0(VAR_6->hb_generation) == VAR_5->ds_last_generation &&
     VAR_6->hb_node == VAR_5->ds_node_num)
  return 1;





 if (VAR_6->hb_node != VAR_5->ds_node_num)
  VAR_7 = "Another node is heartbeating on device";
 else if (FUNC_0(VAR_6->hb_generation) !=
   VAR_5->ds_last_generation)
  VAR_7 = "Heartbeat generation mismatch on device";
 else
  VAR_7 = "Heartbeat sequence mismatch on device";

 FUNC_1(VAR_3, "%s (%s): expected(%u:0x%llx, 0x%llx), "
      "ondisk(%u:0x%llx, 0x%llx)\n", VAR_7, VAR_4->hr_dev_name,
      VAR_5->ds_node_num, (unsigned long long)VAR_5->ds_last_generation,
      (unsigned long long)VAR_5->ds_last_time, VAR_6->hb_node,
      (unsigned long long)FUNC_0(VAR_6->hb_generation),
      (unsigned long long)FUNC_0(VAR_6->hb_seq));

 return 0;
}
