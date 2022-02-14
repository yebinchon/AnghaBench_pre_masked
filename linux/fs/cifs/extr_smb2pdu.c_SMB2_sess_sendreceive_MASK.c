
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; TYPE_1__* rq_iov; } ;
struct smb2_sess_setup_req {void* SecurityBufferLength; void* SecurityBufferOffset; } ;
struct kvec {int member_1; int * member_0; } ;
struct SMB2_sess_data {TYPE_1__* iov; int buf0_type; int ses; int xid; } ;
struct TYPE_2__ {int iov_len; struct smb2_sess_setup_req* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct smb_rqst*,int *,int,struct kvec*) ;
 int FUNC_1 (struct smb2_sess_setup_req*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,struct kvec*,int) ;
 int FUNC_4 (struct smb_rqst*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct SMB2_sess_data *VAR_2)
{
 int VAR_3;
 struct smb_rqst VAR_4;
 struct smb2_sess_setup_req *VAR_5 = VAR_2->iov[0].iov_base;
 struct kvec VAR_6 = { ((void*)0), 0 };


 VAR_5->SecurityBufferOffset =
  FUNC_2(sizeof(struct smb2_sess_setup_req) - 1 );
 VAR_5->SecurityBufferLength = FUNC_2(VAR_2->iov[1].iov_len);

 FUNC_4(&VAR_4, 0, sizeof(struct smb_rqst));
 VAR_4.rq_iov = VAR_2->iov;
 VAR_4.rq_nvec = 2;


 VAR_3 = FUNC_0(VAR_2->xid, VAR_2->ses,
       &VAR_4,
       &VAR_2->buf0_type,
       VAR_0 | VAR_1, &VAR_6);
 FUNC_1(VAR_2->iov[0].iov_base);
 FUNC_3(&VAR_2->iov[0], &VAR_6, sizeof(struct kvec));

 return VAR_3;
}
