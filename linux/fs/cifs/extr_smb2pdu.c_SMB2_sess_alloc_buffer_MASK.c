
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CreditRequest; scalar_t__ SessionId; } ;
struct smb2_sess_setup_req {scalar_t__ Channel; scalar_t__ Capabilities; scalar_t__ SecurityMode; TYPE_1__ sync_hdr; scalar_t__ Flags; int PreviousSessionId; } ;
struct cifs_ses {struct TCP_Server_Info* server; } ;
struct TCP_Server_Info {scalar_t__ sign; } ;
struct SMB2_sess_data {int buf0_type; TYPE_2__* iov; int previous_session; struct cifs_ses* ses; } ;
struct TYPE_4__ {char* iov_base; unsigned int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int *,void**,unsigned int*) ;

__attribute__((used)) static int
FUNC_3(struct SMB2_sess_data *VAR_7)
{
 int VAR_8;
 struct cifs_ses *VAR_9 = VAR_7->ses;
 struct smb2_sess_setup_req *VAR_10;
 struct TCP_Server_Info *VAR_11 = VAR_9->server;
 unsigned int VAR_12;

 VAR_8 = FUNC_2(VAR_5, ((void*)0), (void **) &VAR_10,
        &VAR_12);
 if (VAR_8)
  return VAR_8;


 VAR_10->sync_hdr.SessionId = 0;


 VAR_10->PreviousSessionId = VAR_7->previous_session;

 VAR_10->Flags = 0;


 VAR_10->sync_hdr.CreditRequest = FUNC_0(130);


 if (VAR_11->sign)
  VAR_10->SecurityMode = VAR_4;
 else if (VAR_6 & VAR_0)
  VAR_10->SecurityMode = VAR_3;
 else
  VAR_10->SecurityMode = 0;




 VAR_10->Capabilities = 0;


 VAR_10->Channel = 0;

 VAR_7->iov[0].iov_base = (char *)VAR_10;

 VAR_7->iov[0].iov_len = VAR_12 - 1;




 VAR_7->buf0_type = VAR_1;

 return 0;
}
