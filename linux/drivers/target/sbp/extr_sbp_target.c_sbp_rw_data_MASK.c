
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sg_mapping_iter {int consumed; int addr; scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ data_direction; int data_length; int t_data_nents; int t_data_sg; } ;
struct TYPE_5__ {int data_descriptor; int misc; } ;
struct sbp_target_request {TYPE_3__ se_cmd; TYPE_2__ orb; struct sbp_page_table_entry* pg_tbl; TYPE_1__* login; } ;
struct sbp_session {int node_id; int generation; int lock; int card; } ;
struct sbp_page_table_entry {int segment_length; int segment_base_lo; int segment_base_hi; } ;
struct fw_card {int dummy; } ;
struct TYPE_4__ {struct sbp_session* sess; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct fw_card* FUNC_7 (int ) ;
 int FUNC_8 (struct fw_card*) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (char*) ;
 unsigned long long FUNC_11 (int *) ;
 int FUNC_12 (struct fw_card*,int,int,int,int,unsigned long long,int ,int) ;
 int FUNC_13 (struct sg_mapping_iter*) ;
 int FUNC_14 (struct sg_mapping_iter*,int ,int ,int) ;
 int FUNC_15 (struct sg_mapping_iter*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct sbp_target_request *VAR_7)
{
 struct sbp_session *VAR_8 = VAR_7->login->sess;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
  VAR_15, VAR_16, VAR_17, VAR_18,
  VAR_19 = VAR_2;
 struct sbp_page_table_entry *VAR_20;
 unsigned long long VAR_21;
 struct fw_card *VAR_22;
 struct sg_mapping_iter VAR_23;

 if (VAR_7->se_cmd.data_direction == VAR_0) {
  VAR_9 = VAR_6;
  VAR_10 = VAR_3;
 } else {
  VAR_9 = VAR_5;
  VAR_10 = VAR_4;
 }

 VAR_11 = 4 << FUNC_1(FUNC_6(VAR_7->orb.misc));
 VAR_13 = FUNC_3(FUNC_6(VAR_7->orb.misc));

 VAR_12 = FUNC_2(FUNC_6(VAR_7->orb.misc));
 if (VAR_12) {
  FUNC_10("sbp_run_transaction: page size ignored\n");
  VAR_12 = 0x100 << VAR_12;
 }

 FUNC_16(&VAR_8->lock);
 VAR_22 = FUNC_7(VAR_8->card);
 VAR_14 = VAR_8->node_id;
 VAR_15 = VAR_8->generation;
 FUNC_17(&VAR_8->lock);

 if (VAR_7->pg_tbl) {
  VAR_20 = VAR_7->pg_tbl;
  VAR_16 = FUNC_0(FUNC_6(VAR_7->orb.misc));

  VAR_21 = 0;
  VAR_17 = 0;
 } else {
  VAR_20 = ((void*)0);
  VAR_16 = 0;

  VAR_21 = FUNC_11(&VAR_7->orb.data_descriptor);
  VAR_17 = VAR_7->se_cmd.data_length;
 }

 FUNC_14(&VAR_23, VAR_7->se_cmd.t_data_sg, VAR_7->se_cmd.t_data_nents,
  VAR_10);

 while (VAR_17 || VAR_16) {
  if (!VAR_17) {
   VAR_21 = (u64)FUNC_5(VAR_20->segment_base_hi) << 32 |
    FUNC_6(VAR_20->segment_base_lo);
   VAR_17 = FUNC_5(VAR_20->segment_length);

   VAR_20++;
   VAR_16--;
  }

  FUNC_13(&VAR_23);

  VAR_18 = FUNC_9(VAR_17, VAR_11, (int)VAR_23.length);



  VAR_19 = FUNC_12(VAR_22, VAR_9, VAR_14,
    VAR_15, VAR_13,
    VAR_21, VAR_23.addr, VAR_18);

  if (VAR_19 != VAR_2)
   break;

  VAR_17 -= VAR_18;
  VAR_21 += VAR_18;
  VAR_23.consumed = VAR_18;
 }

 FUNC_15(&VAR_23);
 FUNC_8(VAR_22);

 if (VAR_19 == VAR_2) {
  FUNC_4(VAR_17 != 0);
  return 0;
 } else {
  return -VAR_1;
 }
}
