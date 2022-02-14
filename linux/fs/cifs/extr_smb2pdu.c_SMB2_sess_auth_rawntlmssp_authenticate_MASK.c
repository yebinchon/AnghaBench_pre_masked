
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int SessionId; } ;
struct smb2_sess_setup_rsp {int SessionFlags; TYPE_3__ sync_hdr; } ;
struct TYPE_4__ {int SessionId; } ;
struct smb2_sess_setup_req {TYPE_1__ sync_hdr; } ;
struct cifs_ses {unsigned char* ntlmssp; int session_flags; int Suid; } ;
struct SMB2_sess_data {int result; int * func; TYPE_2__* iov; int nls_cp; struct cifs_ses* ses; } ;
struct TYPE_5__ {unsigned char* iov_base; int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SMB2_sess_data*) ;
 int FUNC_1 (struct SMB2_sess_data*) ;
 int FUNC_2 (struct SMB2_sess_data*) ;
 int FUNC_3 (struct SMB2_sess_data*) ;
 int VAR_2 ;
 int FUNC_4 (unsigned char**,int *,struct cifs_ses*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct SMB2_sess_data *VAR_3)
{
 int VAR_4;
 struct cifs_ses *VAR_5 = VAR_3->ses;
 struct smb2_sess_setup_req *VAR_6;
 struct smb2_sess_setup_rsp *VAR_7 = ((void*)0);
 unsigned char *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 u16 VAR_10 = 0;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  goto out;

 VAR_6 = (struct smb2_sess_setup_req *) VAR_3->iov[0].iov_base;
 VAR_6->sync_hdr.SessionId = VAR_5->Suid;

 VAR_4 = FUNC_4(&VAR_8, &VAR_10, VAR_5,
     VAR_3->nls_cp);
 if (VAR_4) {
  FUNC_5(VAR_1, "build_ntlmssp_auth_blob failed %d\n", VAR_4);
  goto out;
 }

 if (VAR_9) {

  FUNC_5(VAR_2, "spnego not supported for SMB2 yet\n");
  VAR_4 = -VAR_0;
  goto out;
 }
 VAR_3->iov[1].iov_base = VAR_8;
 VAR_3->iov[1].iov_len = VAR_10;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto out;

 VAR_7 = (struct smb2_sess_setup_rsp *)VAR_3->iov[0].iov_base;

 VAR_5->Suid = VAR_7->sync_hdr.SessionId;
 VAR_5->session_flags = FUNC_7(VAR_7->SessionFlags);

 VAR_4 = FUNC_1(VAR_3);
out:
 FUNC_6(VAR_8);
 FUNC_2(VAR_3);
 FUNC_6(VAR_5->ntlmssp);
 VAR_5->ntlmssp = ((void*)0);
 VAR_3->result = VAR_4;
 VAR_3->func = ((void*)0);
}
