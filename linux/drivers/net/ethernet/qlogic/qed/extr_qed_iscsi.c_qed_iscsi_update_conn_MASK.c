
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_iscsi_params_update {int exp_stat_sn; int first_seq_length; int max_send_pdu_length; int max_recv_pdu_length; int max_seq_size; int update_flag; } ;
struct qed_iscsi_conn {int exp_stat_sn; int first_seq_length; int max_send_pdu_length; int max_recv_pdu_length; int max_seq_size; int update_flag; } ;
struct qed_hash_iscsi_con {struct qed_iscsi_conn* con; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 struct qed_hash_iscsi_con* FUNC_2 (struct qed_dev*,int ) ;
 int FUNC_3 (int ,struct qed_iscsi_conn*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_2,
     u32 VAR_3,
     struct qed_iscsi_params_update *VAR_4)
{
 struct qed_hash_iscsi_con *VAR_5;
 struct qed_iscsi_conn *VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_2, "Failed to find connection for handle %d\n",
     VAR_3);
  return -VAR_0;
 }


 VAR_6 = VAR_5->con;
 VAR_6->update_flag = VAR_4->update_flag;
 VAR_6->max_seq_size = VAR_4->max_seq_size;
 VAR_6->max_recv_pdu_length = VAR_4->max_recv_pdu_length;
 VAR_6->max_send_pdu_length = VAR_4->max_send_pdu_length;
 VAR_6->first_seq_length = VAR_4->first_seq_length;
 VAR_6->exp_stat_sn = VAR_4->exp_stat_sn;

 return FUNC_3(FUNC_1(VAR_2), VAR_6,
     VAR_1, ((void*)0));
}
