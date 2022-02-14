
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kwqe {int dummy; } ;
struct kcqe {int dummy; } ;
struct iscsi_kwqe_init2 {int max_cq_sqn; int * error_bit_map; } ;
struct iscsi_kcqe {int op_code; int completion_status; } ;
struct cnic_dev {int max_iscsi_conn; int netdev; } ;
struct bnx2x {int pfid; } ;
typedef int kcqe ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cnic_dev*,scalar_t__,int ) ;
 int FUNC_1 (struct cnic_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct cnic_dev*,int ,struct kcqe**,int) ;
 int FUNC_7 (struct iscsi_kcqe*,int ,int) ;
 struct bnx2x* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct cnic_dev *VAR_7, struct kwqe *VAR_8)
{
 struct iscsi_kwqe_init2 *VAR_9 = (struct iscsi_kwqe_init2 *) VAR_8;
 struct bnx2x *VAR_10 = FUNC_8(VAR_7->netdev);
 u32 VAR_11 = VAR_10->pfid;
 struct iscsi_kcqe VAR_12;
 struct kcqe *VAR_13[1];

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 if (!VAR_7->max_iscsi_conn) {
  VAR_12.completion_status =
   VAR_4;
  goto done;
 }

 FUNC_0(VAR_7, VAR_1 +
  FUNC_3(VAR_11), VAR_9->error_bit_map[0]);
 FUNC_0(VAR_7, VAR_1 +
  FUNC_3(VAR_11) + 4,
  VAR_9->error_bit_map[1]);

 FUNC_1(VAR_7, VAR_2 +
    FUNC_4(VAR_11), VAR_9->max_cq_sqn);
 FUNC_0(VAR_7, VAR_2 +
  FUNC_5(VAR_11), VAR_9->error_bit_map[0]);
 FUNC_0(VAR_7, VAR_2 +
  FUNC_5(VAR_11) + 4,
  VAR_9->error_bit_map[1]);

 FUNC_1(VAR_7, VAR_0 +
    FUNC_2(VAR_11), VAR_9->max_cq_sqn);

 VAR_12.completion_status = VAR_5;

done:
 VAR_12.op_code = VAR_6;
 VAR_13[0] = (struct kcqe *) &VAR_12;
 FUNC_6(VAR_7, VAR_3, VAR_13, 1);

 return 0;
}
