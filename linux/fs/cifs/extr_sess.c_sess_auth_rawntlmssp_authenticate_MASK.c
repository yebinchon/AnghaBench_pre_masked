
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct smb_hdr {int Uid; int WordCount; int Flags2; } ;
struct sess_data {int result; int * func; int nls_cp; TYPE_2__* iov; struct cifs_ses* ses; } ;
struct TYPE_9__ {unsigned char* response; } ;
struct cifs_ses {int Suid; unsigned char* ntlmssp; TYPE_4__ auth_key; } ;
typedef int __u16 ;
struct TYPE_8__ {int SecurityBlobLength; int Action; } ;
struct TYPE_6__ {int SecurityBlobLength; } ;
struct TYPE_10__ {TYPE_3__ resp; TYPE_1__ req; } ;
struct TYPE_7__ {unsigned char* iov_base; int iov_len; } ;
typedef TYPE_5__ SESSION_SETUP_ANDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sess_data*) ;
 int FUNC_1 (unsigned char**,int*,struct cifs_ses*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char**,int,struct cifs_ses*,int ) ;
 int FUNC_5 (char**,int,struct cifs_ses*,int ) ;
 int FUNC_6 (struct smb_hdr*) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (struct smb_hdr*) ;
 int FUNC_10 (struct sess_data*,int) ;
 int FUNC_11 (struct sess_data*) ;
 int FUNC_12 (struct sess_data*) ;
 int FUNC_13 (struct sess_data*) ;

__attribute__((used)) static void
FUNC_14(struct sess_data *VAR_6)
{
 int VAR_7;
 struct smb_hdr *VAR_8;
 SESSION_SETUP_ANDX *VAR_9;
 struct cifs_ses *VAR_10 = VAR_6->ses;
 __u16 VAR_11;
 char *VAR_12;
 unsigned char *VAR_13 = ((void*)0);
 u16 VAR_14;

 FUNC_2(VAR_2, "rawntlmssp session setup authenticate phase\n");


 VAR_7 = FUNC_10(VAR_6, 12);
 if (VAR_7)
  goto out;


 VAR_9 = (SESSION_SETUP_ANDX *)VAR_6->iov[0].iov_base;
 VAR_8 = (struct smb_hdr *)VAR_9;
 VAR_7 = FUNC_1(&VAR_13,
     &VAR_14, VAR_10, VAR_6->nls_cp);
 if (VAR_7)
  goto out_free_ntlmsspblob;
 VAR_6->iov[1].iov_len = VAR_14;
 VAR_6->iov[1].iov_base = VAR_13;
 VAR_9->req.SecurityBlobLength = FUNC_3(VAR_14);





 VAR_8->Uid = VAR_10->Suid;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  goto out_free_ntlmsspblob;

 VAR_7 = FUNC_13(VAR_6);
 if (VAR_7)
  goto out_free_ntlmsspblob;

 VAR_9 = (SESSION_SETUP_ANDX *)VAR_6->iov[0].iov_base;
 VAR_8 = (struct smb_hdr *)VAR_6->iov[0].iov_base;
 if (VAR_8->WordCount != 4) {
  VAR_7 = -VAR_1;
  FUNC_2(VAR_5, "bad word count %d\n", VAR_8->WordCount);
  goto out_free_ntlmsspblob;
 }

 if (FUNC_8(VAR_9->resp.Action) & VAR_3)
  FUNC_2(VAR_2, "Guest login\n");

 if (VAR_10->Suid != VAR_8->Uid) {
  VAR_10->Suid = VAR_8->Uid;
  FUNC_2(VAR_2, "UID changed! new UID = %llu\n", VAR_10->Suid);
 }

 VAR_11 = FUNC_6(VAR_8);
 VAR_12 = FUNC_9(VAR_8);
 VAR_14 = FUNC_8(VAR_9->resp.SecurityBlobLength);
 if (VAR_14 > VAR_11) {
  FUNC_2(VAR_5, "bad security blob length %d\n",
    VAR_14);
  VAR_7 = -VAR_0;
  goto out_free_ntlmsspblob;
 }
 VAR_12 += VAR_14;
 VAR_11 -= VAR_14;



 if (VAR_11 == 0) {

 } else if (VAR_8->Flags2 & VAR_4) {

  if (((unsigned long) VAR_12 - (unsigned long) VAR_8) % 2) {
   ++VAR_12;
   --VAR_11;
  }
  FUNC_5(&VAR_12, VAR_11, VAR_10,
          VAR_6->nls_cp);
 } else {
  FUNC_4(&VAR_12, VAR_11, VAR_10,
        VAR_6->nls_cp);
 }

out_free_ntlmsspblob:
 FUNC_7(VAR_13);
out:
 FUNC_12(VAR_6);

  if (!VAR_7)
  VAR_7 = FUNC_11(VAR_6);


 FUNC_7(VAR_10->auth_key.response);
 VAR_10->auth_key.response = ((void*)0);
 FUNC_7(VAR_10->ntlmssp);
 VAR_10->ntlmssp = ((void*)0);

 VAR_6->func = ((void*)0);
 VAR_6->result = VAR_7;
}
