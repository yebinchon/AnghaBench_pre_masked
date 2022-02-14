
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kwqe {int dummy; } ;
struct iscsi_kwqe_init1 {int num_tasks_per_conn; int num_ccells_per_conn; int rq_num_wqes; int rq_buffer_size; int cq_num_wqes; int flags; int num_cqs; } ;
struct cnic_local {int num_iscsi_tasks; int num_ccells; int task_array_size; int r2tq_size; int hq_size; int num_cqs; } ;
struct cnic_dev {int max_iscsi_conn; int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int pfid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct cnic_dev*,scalar_t__,int) ;
 int FUNC_2 (struct cnic_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (struct cnic_dev*,int,int) ;
 struct bnx2x* FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27(struct cnic_dev *VAR_12, struct kwqe *VAR_13)
{
 struct cnic_local *VAR_14 = VAR_12->cnic_priv;
 struct bnx2x *VAR_15 = FUNC_26(VAR_12->netdev);
 struct iscsi_kwqe_init1 *VAR_16 = (struct iscsi_kwqe_init1 *) VAR_13;
 int VAR_17, VAR_18;
 u32 VAR_19 = VAR_15->pfid;

 VAR_14->num_iscsi_tasks = VAR_16->num_tasks_per_conn;
 VAR_14->num_ccells = VAR_16->num_ccells_per_conn;
 VAR_14->task_array_size = VAR_7 *
         VAR_14->num_iscsi_tasks;
 VAR_14->r2tq_size = VAR_14->num_iscsi_tasks * VAR_5 *
   VAR_6;
 VAR_14->hq_size = VAR_14->num_ccells * VAR_4;
 VAR_18 = FUNC_0(VAR_14->hq_size) / VAR_9;
 VAR_17 = VAR_18 * (VAR_9 / VAR_4);
 VAR_14->num_cqs = VAR_16->num_cqs;

 if (!VAR_12->max_iscsi_conn)
  return 0;


 FUNC_1(VAR_12, VAR_1 + FUNC_11(VAR_19),
    VAR_16->rq_num_wqes);
 FUNC_1(VAR_12, VAR_1 + FUNC_10(VAR_19),
    VAR_9);
 FUNC_2(VAR_12, VAR_1 +
   FUNC_9(VAR_19), VAR_8);
 FUNC_1(VAR_12, VAR_1 +
    FUNC_8(VAR_19),
    VAR_16->num_tasks_per_conn);


 FUNC_1(VAR_12, VAR_2 +
    FUNC_17(VAR_19),
    VAR_16->rq_buffer_size);
 FUNC_1(VAR_12, VAR_2 + FUNC_15(VAR_19),
    VAR_9);
 FUNC_2(VAR_12, VAR_2 +
   FUNC_14(VAR_19), VAR_8);
 FUNC_1(VAR_12, VAR_2 +
    FUNC_13(VAR_19),
    VAR_16->num_tasks_per_conn);
 FUNC_1(VAR_12, VAR_2 + FUNC_18(VAR_19),
    VAR_16->rq_num_wqes);
 FUNC_1(VAR_12, VAR_2 + FUNC_12(VAR_19),
    VAR_16->cq_num_wqes);
 FUNC_1(VAR_12, VAR_2 + FUNC_16(VAR_19),
    VAR_14->num_iscsi_tasks * VAR_5);


 FUNC_1(VAR_12, VAR_3 + FUNC_22(VAR_19),
    VAR_9);
 FUNC_2(VAR_12, VAR_3 +
   FUNC_21(VAR_19), VAR_8);
 FUNC_1(VAR_12, VAR_3 +
    FUNC_20(VAR_19),
    VAR_16->num_tasks_per_conn);
 FUNC_1(VAR_12, VAR_3 + FUNC_19(VAR_19),
    VAR_17);
 FUNC_1(VAR_12, VAR_3 + FUNC_24(VAR_19),
    VAR_16->num_tasks_per_conn);
 FUNC_1(VAR_12, VAR_3 + FUNC_23(VAR_19),
    VAR_14->num_iscsi_tasks * VAR_5);


 FUNC_1(VAR_12, VAR_0 + FUNC_7(VAR_19),
    VAR_9);
 FUNC_2(VAR_12, VAR_0 +
   FUNC_6(VAR_19), VAR_8);
 FUNC_1(VAR_12, VAR_0 +
    FUNC_5(VAR_19),
    VAR_16->num_tasks_per_conn);
 FUNC_1(VAR_12, VAR_0 + FUNC_3(VAR_19),
    VAR_16->cq_num_wqes);
 FUNC_1(VAR_12, VAR_0 + FUNC_4(VAR_19),
    VAR_17);

 FUNC_25(VAR_12,
   VAR_16->flags & VAR_11,
   VAR_16->flags & VAR_10);

 return 0;
}
