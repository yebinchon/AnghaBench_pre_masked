
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct o2hb_region {int hr_block_bytes; struct o2hb_disk_slot* hr_slots; } ;
struct o2hb_disk_slot {scalar_t__ ds_raw_block; } ;
struct o2hb_disk_heartbeat_block {int hb_node; void* hb_cksum; void* hb_dead_ms; void* hb_generation; void* hb_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct o2hb_disk_heartbeat_block*,int ,int ) ;
 int FUNC_5 (int ,char*,long long,int ) ;
 int FUNC_6 (struct o2hb_region*,struct o2hb_disk_heartbeat_block*) ;
 int VAR_2 ;
 int FUNC_7 () ;

__attribute__((used)) static inline void FUNC_8(struct o2hb_region *VAR_3,
          u64 VAR_4)
{
 int VAR_5;
 u64 VAR_6;
 struct o2hb_disk_slot *VAR_7;
 struct o2hb_disk_heartbeat_block *VAR_8;

 VAR_5 = FUNC_7();
 VAR_7 = &VAR_3->hr_slots[VAR_5];

 VAR_8 = (struct o2hb_disk_heartbeat_block *)VAR_7->ds_raw_block;
 FUNC_4(VAR_8, 0, VAR_3->hr_block_bytes);

 VAR_6 = FUNC_2();
 if (!VAR_6)
  VAR_6 = 1;

 VAR_8->hb_seq = FUNC_1(VAR_6);
 VAR_8->hb_node = VAR_5;
 VAR_8->hb_generation = FUNC_1(VAR_4);
 VAR_8->hb_dead_ms = FUNC_0(VAR_2 * VAR_1);


 VAR_8->hb_cksum = FUNC_0(FUNC_6(VAR_3,
           VAR_8));

 FUNC_5(VAR_0, "our node generation = 0x%llx, cksum = 0x%x\n",
      (long long)VAR_4,
      FUNC_3(VAR_8->hb_cksum));
}
