
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct ql4_chap_table {int secret_len; scalar_t__ secret; scalar_t__ name; } ;
struct iscsi_session {int password; int username; int password_in; int username_in; struct ddb_entry* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {int dummy; } ;
struct ddb_entry {int chap_tbl_idx; int ddb_type; struct iscsi_cls_conn* conn; struct scsi_qla_host* ha; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;
typedef int chap_tbl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iscsi_cls_session*,int,char*) ;
 int FUNC_1 (struct iscsi_cls_conn*,int const,char*,int ) ;
 int FUNC_2 (struct ql4_chap_table*,int ,int) ;
 int FUNC_3 (struct scsi_qla_host*,int ,int ,int ,int *) ;
 int FUNC_4 (struct scsi_qla_host*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct iscsi_cls_session *VAR_6,
         enum iscsi_param VAR_7, char *VAR_8)
{
 struct iscsi_session *VAR_9 = VAR_6->dd_data;
 struct ddb_entry *VAR_10 = VAR_9->dd_data;
 struct scsi_qla_host *VAR_11 = VAR_10->ha;
 struct iscsi_cls_conn *VAR_12 = VAR_10->conn;
 struct ql4_chap_table VAR_13;
 int VAR_14, VAR_15;
 uint16_t VAR_16;

 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 switch (VAR_7) {
 case 131:
  VAR_14 = FUNC_3(VAR_11, VAR_9->username_in,
           VAR_9->password_in, VAR_0,
           &VAR_16);
  if (VAR_14)
   VAR_15 = FUNC_5(VAR_8, "\n");
  else
   VAR_15 = FUNC_5(VAR_8, "%hu\n", VAR_16);
  break;
 case 130:
  if (VAR_10->ddb_type == VAR_1) {
   if (VAR_10->chap_tbl_idx != VAR_2) {
    VAR_16 = VAR_10->chap_tbl_idx;
    VAR_14 = VAR_5;
   } else {
    VAR_14 = VAR_4;
   }
  } else {
   VAR_14 = FUNC_3(VAR_11, VAR_9->username,
            VAR_9->password,
            VAR_3, &VAR_16);
  }
  if (VAR_14)
   VAR_15 = FUNC_5(VAR_8, "\n");
  else
   VAR_15 = FUNC_5(VAR_8, "%hu\n", VAR_16);
  break;
 case 128:
 case 129:




  if (VAR_10->ddb_type == VAR_1 &&
      VAR_10->chap_tbl_idx != VAR_2 &&
      !VAR_9->username && !VAR_9->password) {
   VAR_16 = VAR_10->chap_tbl_idx;
   VAR_14 = FUNC_4(VAR_11, VAR_13.name,
           VAR_13.secret,
           VAR_16);
   if (!VAR_14) {
    FUNC_1(VAR_12, 128,
      (char *)VAR_13.name,
      FUNC_6((char *)VAR_13.name));
    FUNC_1(VAR_12, 129,
      (char *)VAR_13.secret,
      VAR_13.secret_len);
   }
  }

 default:
  return FUNC_0(VAR_6, VAR_7, VAR_8);
 }

 return VAR_15;
}
