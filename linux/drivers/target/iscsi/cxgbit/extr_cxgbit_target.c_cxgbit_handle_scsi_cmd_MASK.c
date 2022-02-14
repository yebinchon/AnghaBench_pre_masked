
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_scsi_req {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_2__ {scalar_t__ data_length; int se_cmd_flags; } ;
struct iscsi_cmd {TYPE_1__ se_cmd; } ;
struct cxgbit_sock {int skb; struct iscsi_conn* conn; } ;
struct cxgbit_lro_pdu_cb {scalar_t__ dlen; int nr_dfrags; scalar_t__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_scsi_req*,int) ;
 struct cxgbit_lro_pdu_cb* FUNC_1 (int ) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_scsi_req*) ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;

__attribute__((used)) static int
FUNC_4(struct cxgbit_sock *VAR_1, struct iscsi_cmd *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_1->conn;
 struct cxgbit_lro_pdu_cb *VAR_4 = FUNC_1(VAR_1->skb);
 struct iscsi_scsi_req *VAR_5 = (struct iscsi_scsi_req *)VAR_4->hdr;
 int VAR_6;
 bool VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_3, VAR_2, (unsigned char *)VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->dlen && (VAR_4->dlen == VAR_2->se_cmd.data_length) &&
     (VAR_4->nr_dfrags == 1))
  VAR_2->se_cmd.se_cmd_flags |= VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_5);
 if (VAR_6 < 0)
  return 0;
 else if (VAR_6 > 0)
  VAR_7 = 1;

 if (!VAR_4->dlen)
  return 0;

 return FUNC_0(VAR_2, VAR_5, VAR_7);
}
