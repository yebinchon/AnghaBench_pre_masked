
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct se_cmd {scalar_t__ data_length; } ;
struct iscsi_data {int flags; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ first_burst_len; struct se_cmd se_cmd; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ FirstBurstLength; scalar_t__ InitialR2T; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct se_cmd*,int ,int ) ;

int FUNC_3(struct iscsi_cmd *VAR_3, unsigned char *VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_3->conn;
 struct se_cmd *VAR_6 = &VAR_3->se_cmd;
 struct iscsi_data *VAR_7 = (struct iscsi_data *) VAR_4;
 u32 VAR_8 = FUNC_0(VAR_7->dlength);

 if (VAR_5->sess->sess_ops->InitialR2T) {
  FUNC_1("Received unexpected unsolicited data"
   " while InitialR2T=Yes, protocol error.\n");
  FUNC_2(VAR_6,
    VAR_2, 0);
  return -1;
 }

 if ((VAR_3->first_burst_len + VAR_8) >
      VAR_5->sess->sess_ops->FirstBurstLength) {
  FUNC_1("Total %u bytes exceeds FirstBurstLength: %u"
   " for this Unsolicited DataOut Burst.\n",
   (VAR_3->first_burst_len + VAR_8),
    VAR_5->sess->sess_ops->FirstBurstLength);
  FUNC_2(VAR_6,
    VAR_1, 0);
  return -1;
 }

 if (!(VAR_7->flags & VAR_0))
  return 0;

 if (((VAR_3->first_burst_len + VAR_8) != VAR_3->se_cmd.data_length) &&
     ((VAR_3->first_burst_len + VAR_8) !=
       VAR_5->sess->sess_ops->FirstBurstLength)) {
  FUNC_1("Unsolicited non-immediate data received %u"
   " does not equal FirstBurstLength: %u, and does"
   " not equal ExpXferLen %u.\n",
   (VAR_3->first_burst_len + VAR_8),
   VAR_5->sess->sess_ops->FirstBurstLength, VAR_3->se_cmd.data_length);
  FUNC_2(VAR_6,
    VAR_1, 0);
  return -1;
 }
 return 0;
}
