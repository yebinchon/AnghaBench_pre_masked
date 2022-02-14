
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_fsf_req {int req_id; int issued; int status; TYPE_2__* qtcb; TYPE_1__* adapter; } ;
struct TYPE_7__ {int fsf_status_qual; int prot_status_qual; int lun_handle; int port_handle; int fsf_status; int prot_status; int req_issued; } ;
struct TYPE_8__ {TYPE_3__ res; } ;
struct zfcp_dbf_hba {scalar_t__ fsf_cmd; int pl_len; TYPE_4__ u; int fsf_seq_no; int fsf_req_status; int fsf_req_id; int id; int tag; } ;
struct zfcp_dbf {int hba_lock; int hba; struct zfcp_dbf_hba hba_buf; } ;
struct fsf_qtcb_prefix {char prot_status_qual; int prot_status; int req_seq_no; } ;
struct fsf_qtcb_header {scalar_t__ fsf_command; char fsf_status_qual; int log_start; int log_length; int lun_handle; int port_handle; int fsf_status; } ;
struct TYPE_6__ {struct fsf_qtcb_header header; struct fsf_qtcb_prefix prefix; } ;
struct TYPE_5__ {struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,struct zfcp_dbf_hba*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct zfcp_dbf_hba*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct zfcp_dbf*,char*,int ,char*,int ) ;

void FUNC_6(char *VAR_5, int VAR_6, struct zfcp_fsf_req *VAR_7)
{
 struct zfcp_dbf *VAR_8 = VAR_7->adapter->dbf;
 struct fsf_qtcb_prefix *VAR_9 = &VAR_7->qtcb->prefix;
 struct fsf_qtcb_header *VAR_10 = &VAR_7->qtcb->header;
 struct zfcp_dbf_hba *VAR_11 = &VAR_8->hba_buf;
 unsigned long VAR_12;

 FUNC_3(&VAR_8->hba_lock, VAR_12);
 FUNC_2(VAR_11, 0, sizeof(*VAR_11));

 FUNC_1(VAR_11->tag, VAR_5, VAR_4);
 VAR_11->id = VAR_3;
 VAR_11->fsf_req_id = VAR_7->req_id;
 VAR_11->fsf_req_status = VAR_7->status;
 VAR_11->fsf_cmd = VAR_10->fsf_command;
 VAR_11->fsf_seq_no = VAR_9->req_seq_no;
 VAR_11->u.res.req_issued = VAR_7->issued;
 VAR_11->u.res.prot_status = VAR_9->prot_status;
 VAR_11->u.res.fsf_status = VAR_10->fsf_status;
 VAR_11->u.res.port_handle = VAR_10->port_handle;
 VAR_11->u.res.lun_handle = VAR_10->lun_handle;

 FUNC_1(VAR_11->u.res.prot_status_qual, &VAR_9->prot_status_qual,
        VAR_0);
 FUNC_1(VAR_11->u.res.fsf_status_qual, &VAR_10->fsf_status_qual,
        VAR_2);

 if (VAR_10->fsf_command != VAR_1) {
  VAR_11->pl_len = VAR_10->log_length;
  FUNC_5(VAR_8, (char *)VAR_9 + VAR_10->log_start,
      VAR_11->pl_len, "fsf_res", VAR_7->req_id);
 }

 FUNC_0(VAR_8->hba, VAR_6, VAR_11, sizeof(*VAR_11));
 FUNC_4(&VAR_8->hba_lock, VAR_12);
}
