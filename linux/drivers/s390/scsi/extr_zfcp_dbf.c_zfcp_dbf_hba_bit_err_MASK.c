
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_fsf_req {int status; int req_id; struct fsf_status_read_buffer* data; TYPE_1__* adapter; } ;
struct TYPE_5__ {int be; } ;
struct zfcp_dbf_hba {TYPE_2__ u; int fsf_cmd; int fsf_req_status; int fsf_req_id; int id; int * tag; } ;
struct zfcp_dbf {int hba_lock; int hba; struct zfcp_dbf_hba hba_buf; } ;
struct TYPE_6__ {char bit_error; } ;
struct fsf_status_read_buffer {TYPE_3__ payload; } ;
struct fsf_bit_error_payload {int dummy; } ;
struct TYPE_4__ {struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const,struct zfcp_dbf_hba*,int) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct zfcp_dbf_hba*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(char *VAR_3, struct zfcp_fsf_req *VAR_4)
{
 struct zfcp_dbf *VAR_5 = VAR_4->adapter->dbf;
 struct zfcp_dbf_hba *VAR_6 = &VAR_5->hba_buf;
 struct fsf_status_read_buffer *VAR_7 = VAR_4->data;
 static int const VAR_8 = 1;
 unsigned long VAR_9;

 if (FUNC_6(!FUNC_1(VAR_5->hba, VAR_8)))
  return;

 FUNC_4(&VAR_5->hba_lock, VAR_9);
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));

 FUNC_2(VAR_6->tag, VAR_3, VAR_2);
 VAR_6->id = VAR_1;
 VAR_6->fsf_req_id = VAR_4->req_id;
 VAR_6->fsf_req_status = VAR_4->status;
 VAR_6->fsf_cmd = VAR_0;
 FUNC_2(&VAR_6->u.be, &VAR_7->payload.bit_error,
        sizeof(struct fsf_bit_error_payload));

 FUNC_0(VAR_5->hba, VAR_8, VAR_6, sizeof(*VAR_6));
 FUNC_5(&VAR_5->hba_lock, VAR_9);
}
