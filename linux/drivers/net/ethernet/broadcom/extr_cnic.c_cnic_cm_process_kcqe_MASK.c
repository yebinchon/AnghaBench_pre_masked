
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct l4_kcq {int op_code; size_t conn_id; size_t cid; int status; } ;
struct kcqe {int dummy; } ;
struct iscsi_kcqe {int completion_status; } ;
struct cnic_sock {int const state; int flags; } ;
struct cnic_local {int (* close_conn ) (struct cnic_sock*,int const) ;struct cnic_sock* csk_tbl; } ;
struct cnic_dev {int flags; int netdev; struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;


 int VAR_4 ;




 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_dev*,struct l4_kcq*) ;
 int FUNC_2 (struct cnic_local*,struct cnic_sock*,int) ;
 int FUNC_3 (struct cnic_sock*) ;
 int FUNC_4 (struct cnic_dev*,struct kcqe*) ;
 int FUNC_5 (struct cnic_sock*) ;
 int FUNC_6 (struct cnic_sock*) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (struct cnic_sock*,int) ;
 int FUNC_11 (struct cnic_sock*,int const) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct cnic_dev *VAR_9, struct kcqe *VAR_10)
{
 struct cnic_local *VAR_11 = VAR_9->cnic_priv;
 struct l4_kcq *VAR_12 = (struct l4_kcq *) VAR_10;
 u8 VAR_13 = VAR_12->op_code;
 u32 VAR_14;
 struct cnic_sock *VAR_15;

 if (VAR_13 == VAR_1) {
  FUNC_4(VAR_9, VAR_10);
  return;
 }
 if (VAR_13 == VAR_3 ||
     VAR_13 == VAR_4) {
  FUNC_1(VAR_9, VAR_12);
  return;
 }

 VAR_14 = VAR_12->conn_id;
 if (VAR_13 & 0x80)
  VAR_14 = VAR_12->cid;
 if (VAR_14 >= VAR_5)
  return;

 VAR_15 = &VAR_11->csk_tbl[VAR_14];
 FUNC_5(VAR_15);

 if (!FUNC_3(VAR_15)) {
  FUNC_6(VAR_15);
  return;
 }

 switch (VAR_13) {
 case 129:
  if (VAR_12->status != 0) {
   FUNC_0(VAR_8, &VAR_15->flags);
   FUNC_2(VAR_11, VAR_15,
           134);
  }
  break;
 case 134:
  if (VAR_12->status == 0)
   FUNC_8(VAR_7, &VAR_15->flags);
  else if (VAR_12->status ==
    VAR_2)
   FUNC_8(VAR_6, &VAR_15->flags);

  FUNC_9();
  FUNC_0(VAR_8, &VAR_15->flags);
  FUNC_2(VAR_11, VAR_15, VAR_13);
  break;

 case 131: {
  struct iscsi_kcqe *VAR_16 = (struct iscsi_kcqe *) VAR_10;

  if (VAR_12->status == 0 && VAR_16->completion_status == 0)
   break;

  FUNC_7(VAR_9->netdev, "RAMROD CLOSE compl with status 0x%x completion status 0x%x\n",
       VAR_12->status, VAR_16->completion_status);
  VAR_13 = 136;
 }

 case 132:
 case 136:
 case 133:
 case 130:
 case 128:
  if (VAR_12->status == VAR_2)
   FUNC_8(VAR_6, &VAR_15->flags);

  VAR_11->close_conn(VAR_15, VAR_13);
  break;

 case 135:

  if (FUNC_12(VAR_0, &VAR_9->flags) &&
      !FUNC_12(VAR_7, &VAR_15->flags) &&
      VAR_15->state == 136)
   VAR_11->close_conn(VAR_15, 133);
  else
   FUNC_2(VAR_11, VAR_15, VAR_13);
  break;
 }
 FUNC_6(VAR_15);
}
