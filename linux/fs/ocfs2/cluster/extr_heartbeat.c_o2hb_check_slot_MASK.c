
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct o2nm_node {int dummy; } ;
struct o2hb_region {int hr_live_node_bitmap; int hr_dev_name; int hr_block_bytes; struct o2hb_disk_heartbeat_block* hr_tmp_block; } ;
struct o2hb_node_event {int hn_item; } ;
struct o2hb_disk_slot {size_t ds_node_num; unsigned int ds_equal_samples; scalar_t__ ds_last_time; scalar_t__ ds_last_generation; int ds_changed_samples; int ds_live_item; int ds_raw_block; } ;
struct o2hb_disk_heartbeat_block {int hb_dead_ms; int hb_seq; int hb_cksum; int hb_generation; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (size_t,int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct o2hb_disk_heartbeat_block*,int ,int ) ;
 int FUNC_8 (int ,char*,size_t,...) ;
 unsigned int VAR_6 ;
 int FUNC_9 (struct o2hb_disk_heartbeat_block*) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_10 (struct o2hb_node_event*,int ,struct o2nm_node*,size_t) ;
 int FUNC_11 (struct o2hb_node_event*) ;
 int FUNC_12 (struct o2hb_region*,struct o2hb_disk_heartbeat_block*) ;
 struct o2nm_node* FUNC_13 (size_t) ;
 int FUNC_14 (struct o2nm_node*) ;
 int FUNC_15 (size_t,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (size_t,int ) ;

__attribute__((used)) static int FUNC_19(struct o2hb_region *VAR_10,
      struct o2hb_disk_slot *VAR_11)
{
 int VAR_12 = 0, VAR_13 = 0;
 struct o2hb_node_event VAR_14 =
  { .hn_item = FUNC_0(VAR_14.hn_item), };
 struct o2nm_node *VAR_15;
 struct o2hb_disk_heartbeat_block *VAR_16 = VAR_10->hr_tmp_block;
 u64 VAR_17;
 unsigned int VAR_18 = VAR_6 * VAR_5;
 unsigned int VAR_19;
 int VAR_20;
 int VAR_21 = 0;

 FUNC_7(VAR_16, VAR_11->ds_raw_block, VAR_10->hr_block_bytes);





 VAR_15 = FUNC_13(VAR_11->ds_node_num);
 if (!VAR_15) {
  FUNC_16(&VAR_7);
  VAR_20 = FUNC_18(VAR_11->ds_node_num, VAR_8);
  FUNC_17(&VAR_7);
  if (!VAR_20)
   return 0;
 }

 if (!FUNC_12(VAR_10, VAR_16)) {


  FUNC_16(&VAR_7);




  if (FUNC_6(&VAR_11->ds_live_item))
   goto out;




  FUNC_8(VAR_0, "Node %d has written a bad crc to %s\n",
       VAR_11->ds_node_num, VAR_10->hr_dev_name);
  FUNC_9(VAR_16);

  VAR_11->ds_equal_samples++;
  goto fire_callbacks;
 }



 VAR_17 = FUNC_3(VAR_16->hb_seq);
 if (VAR_11->ds_last_time != VAR_17)
  VAR_11->ds_changed_samples++;
 else
  VAR_11->ds_equal_samples++;
 VAR_11->ds_last_time = VAR_17;






 if (VAR_11->ds_last_generation != FUNC_3(VAR_16->hb_generation)) {
  VAR_13 = 1;
  VAR_11->ds_equal_samples = 0;
  FUNC_8(VAR_1, "Node %d changed generation (0x%llx "
       "to 0x%llx)\n", VAR_11->ds_node_num,
       (long long)VAR_11->ds_last_generation,
       (long long)FUNC_3(VAR_16->hb_generation));
 }

 VAR_11->ds_last_generation = FUNC_3(VAR_16->hb_generation);

 FUNC_8(VAR_1, "Slot %d gen 0x%llx cksum 0x%x "
      "seq %llu last %llu changed %u equal %u\n",
      VAR_11->ds_node_num, (long long)VAR_11->ds_last_generation,
      FUNC_2(VAR_16->hb_cksum),
      (unsigned long long)FUNC_3(VAR_16->hb_seq),
      (unsigned long long)VAR_11->ds_last_time, VAR_11->ds_changed_samples,
      VAR_11->ds_equal_samples);

 FUNC_16(&VAR_7);

fire_callbacks:


 if (FUNC_6(&VAR_11->ds_live_item) &&
     VAR_11->ds_changed_samples >= VAR_2) {
  FUNC_8(VAR_1, "Node %d (id 0x%llx) joined my region\n",
       VAR_11->ds_node_num, (long long)VAR_11->ds_last_generation);

  FUNC_15(VAR_11->ds_node_num, VAR_10->hr_live_node_bitmap);


  if (FUNC_6(&VAR_9[VAR_11->ds_node_num])) {
   FUNC_8(VAR_1, "o2hb: Add node %d to live nodes "
        "bitmap\n", VAR_11->ds_node_num);
   FUNC_15(VAR_11->ds_node_num, VAR_8);

   FUNC_10(&VAR_14, VAR_4, VAR_15,
           VAR_11->ds_node_num);

   VAR_12 = 1;
   VAR_21 = 1;
  }

  FUNC_4(&VAR_11->ds_live_item,
         &VAR_9[VAR_11->ds_node_num]);

  VAR_11->ds_equal_samples = 0;







  VAR_19 = FUNC_2(VAR_16->hb_dead_ms);
  if (VAR_19 && VAR_19 != VAR_18) {

   FUNC_8(VAR_0, "Node %d on device %s has a dead count "
        "of %u ms, but our count is %u ms.\n"
        "Please double check your configuration values "
        "for 'O2CB_HEARTBEAT_THRESHOLD'\n",
        VAR_11->ds_node_num, VAR_10->hr_dev_name, VAR_19,
        VAR_18);
  }
  goto out;
 }


 if (FUNC_6(&VAR_11->ds_live_item))
  goto out;




 if (VAR_11->ds_equal_samples >= VAR_6 || VAR_13) {
  FUNC_8(VAR_1, "Node %d left my region\n",
       VAR_11->ds_node_num);

  FUNC_1(VAR_11->ds_node_num, VAR_10->hr_live_node_bitmap);


  FUNC_5(&VAR_11->ds_live_item);
  if (FUNC_6(&VAR_9[VAR_11->ds_node_num])) {
   FUNC_8(VAR_1, "o2hb: Remove node %d from live "
        "nodes bitmap\n", VAR_11->ds_node_num);
   FUNC_1(VAR_11->ds_node_num, VAR_8);


   FUNC_10(&VAR_14, VAR_3,
           VAR_15, VAR_11->ds_node_num);

   VAR_12 = 1;
   VAR_21 = 1;
  }



  if (!VAR_13)
   VAR_11->ds_changed_samples = 0;
  goto out;
 }
 if (VAR_11->ds_changed_samples) {
  VAR_11->ds_changed_samples = 0;
  VAR_11->ds_equal_samples = 0;
 }
out:
 FUNC_17(&VAR_7);

 if (VAR_21)
  FUNC_11(&VAR_14);

 if (VAR_15)
  FUNC_14(VAR_15);
 return VAR_12;
}
