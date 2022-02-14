
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int hdr_len; int hdr_itt; int lun; struct iscsi_conn* conn; } ;
struct iscsi_r2t_info {unsigned int data_length; unsigned int sent; unsigned int datasn; unsigned int data_offset; unsigned int data_count; int exp_statsn; int ttt; } ;
struct iscsi_data {scalar_t__ flags; int dlength; void* offset; int exp_statsn; int itt; int lun; int opcode; void* datasn; int ttt; } ;
struct iscsi_conn {unsigned int max_xmit_dlength; int dataout_pdus_cnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct iscsi_data*,int ,int) ;

void FUNC_3(struct iscsi_task *VAR_2, struct iscsi_r2t_info *VAR_3,
      struct iscsi_data *VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_2->conn;
 unsigned int VAR_6 = VAR_3->data_length - VAR_3->sent;

 VAR_2->hdr_len = sizeof(struct iscsi_data);

 FUNC_2(VAR_4, 0, sizeof(struct iscsi_data));
 VAR_4->ttt = VAR_3->ttt;
 VAR_4->datasn = FUNC_0(VAR_3->datasn);
 VAR_3->datasn++;
 VAR_4->opcode = VAR_1;
 VAR_4->lun = VAR_2->lun;
 VAR_4->itt = VAR_2->hdr_itt;
 VAR_4->exp_statsn = VAR_3->exp_statsn;
 VAR_4->offset = FUNC_0(VAR_3->data_offset + VAR_3->sent);
 if (VAR_6 > VAR_5->max_xmit_dlength) {
  FUNC_1(VAR_4->dlength, VAR_5->max_xmit_dlength);
  VAR_3->data_count = VAR_5->max_xmit_dlength;
  VAR_4->flags = 0;
 } else {
  FUNC_1(VAR_4->dlength, VAR_6);
  VAR_3->data_count = VAR_6;
  VAR_4->flags = VAR_0;
 }
 VAR_5->dataout_pdus_cnt++;
}
