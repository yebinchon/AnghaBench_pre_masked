
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_11__ {scalar_t__ CifsError; } ;
struct smb_hdr {int WordCount; int Uid; TYPE_3__ Status; } ;
struct sess_data {scalar_t__ buf0_type; int result; int * func; TYPE_2__* iov; struct cifs_ses* ses; } ;
struct ntlmssp_auth {int dummy; } ;
struct TYPE_13__ {TYPE_7__* response; } ;
struct cifs_ses {int Suid; TYPE_7__* ntlmssp; TYPE_5__ auth_key; } ;
typedef int __u16 ;
struct TYPE_15__ {int sesskey_per_smbsess; } ;
struct TYPE_12__ {int SecurityBlobLength; } ;
struct TYPE_9__ {int SecurityBlobLength; scalar_t__ SecurityBlob; } ;
struct TYPE_14__ {TYPE_4__ resp; TYPE_1__ req; } ;
struct TYPE_10__ {int iov_len; scalar_t__ iov_base; } ;
typedef TYPE_6__ SESSION_SETUP_ANDX ;
typedef int NEGOTIATE_MESSAGE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sess_data*) ;
 int FUNC_1 (scalar_t__,struct cifs_ses*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int,struct cifs_ses*) ;
 int FUNC_6 (struct smb_hdr*) ;
 int FUNC_7 (TYPE_7__*) ;
 TYPE_7__* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (struct smb_hdr*) ;
 int FUNC_11 (struct sess_data*,int) ;
 int * VAR_8 ;
 int FUNC_12 (struct sess_data*) ;
 int FUNC_13 (struct sess_data*) ;

__attribute__((used)) static void
FUNC_14(struct sess_data *VAR_9)
{
 int VAR_10;
 struct smb_hdr *VAR_11;
 SESSION_SETUP_ANDX *VAR_12;
 struct cifs_ses *VAR_13 = VAR_9->ses;
 __u16 VAR_14;
 char *VAR_15;
 u16 VAR_16;

 FUNC_2(VAR_4, "rawntlmssp session setup negotiate phase\n");





 VAR_13->ntlmssp = FUNC_8(sizeof(struct ntlmssp_auth), VAR_5);
 if (!VAR_13->ntlmssp) {
  VAR_10 = -VAR_3;
  goto out;
 }
 VAR_13->ntlmssp->sesskey_per_smbsess = 0;


 VAR_10 = FUNC_11(VAR_9, 12);
 if (VAR_10)
  goto out;

 VAR_12 = (SESSION_SETUP_ANDX *)VAR_9->iov[0].iov_base;


 FUNC_1(VAR_12->req.SecurityBlob, VAR_13);
 VAR_9->iov[1].iov_len = sizeof(NEGOTIATE_MESSAGE);
 VAR_9->iov[1].iov_base = VAR_12->req.SecurityBlob;
 VAR_12->req.SecurityBlobLength = FUNC_3(sizeof(NEGOTIATE_MESSAGE));

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_13(VAR_9);

 VAR_12 = (SESSION_SETUP_ANDX *)VAR_9->iov[0].iov_base;
 VAR_11 = (struct smb_hdr *)VAR_9->iov[0].iov_base;


 if (VAR_9->buf0_type != VAR_0 &&
     VAR_11->Status.CifsError ==
   FUNC_4(VAR_6))
  VAR_10 = 0;

 if (VAR_10)
  goto out;

 FUNC_2(VAR_4, "rawntlmssp session setup challenge phase\n");

 if (VAR_11->WordCount != 4) {
  VAR_10 = -VAR_2;
  FUNC_2(VAR_7, "bad word count %d\n", VAR_11->WordCount);
  goto out;
 }

 VAR_13->Suid = VAR_11->Uid;
 FUNC_2(VAR_4, "UID = %llu\n", VAR_13->Suid);

 VAR_14 = FUNC_6(VAR_11);
 VAR_15 = FUNC_10(VAR_11);

 VAR_16 = FUNC_9(VAR_12->resp.SecurityBlobLength);
 if (VAR_16 > VAR_14) {
  FUNC_2(VAR_7, "bad security blob length %d\n",
    VAR_16);
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_5(VAR_15, VAR_16, VAR_13);
out:
 FUNC_12(VAR_9);

 if (!VAR_10) {
  VAR_9->func = VAR_8;
  return;
 }


 FUNC_7(VAR_13->auth_key.response);
 VAR_13->auth_key.response = ((void*)0);
 FUNC_7(VAR_13->ntlmssp);
 VAR_13->ntlmssp = ((void*)0);

 VAR_9->func = ((void*)0);
 VAR_9->result = VAR_10;
}
