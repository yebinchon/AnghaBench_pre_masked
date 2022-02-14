
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smb_hdr {int WordCount; int Uid; int Flags2; } ;
struct sess_data {int result; int * func; int nls_cp; TYPE_2__* iov; struct cifs_ses* ses; } ;
struct TYPE_10__ {int * response; } ;
struct cifs_ses {int capabilities; int Suid; TYPE_4__ auth_key; int * user_name; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_9__ {int Action; } ;
struct TYPE_7__ {void* CaseSensitivePasswordLength; void* CaseInsensitivePasswordLength; int Capabilities; } ;
struct TYPE_11__ {TYPE_3__ resp; TYPE_1__ req_no_secext; } ;
struct TYPE_8__ {char* iov_base; int iov_len; } ;
typedef TYPE_5__ SESSION_SETUP_ANDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char**,struct cifs_ses*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct cifs_ses*,TYPE_5__*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char**,scalar_t__,struct cifs_ses*,int ) ;
 int FUNC_6 (char**,scalar_t__,struct cifs_ses*,int ) ;
 scalar_t__ FUNC_7 (struct smb_hdr*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int *,int ) ;
 char* FUNC_11 (struct smb_hdr*) ;
 int FUNC_12 (struct sess_data*,int) ;
 int FUNC_13 (struct sess_data*) ;
 int FUNC_14 (struct sess_data*) ;
 int FUNC_15 (struct sess_data*) ;
 int FUNC_16 (struct cifs_ses*,int ) ;
 int FUNC_17 (char**,struct cifs_ses*,int ) ;

__attribute__((used)) static void
FUNC_18(struct sess_data *VAR_8)
{
 int VAR_9 = 0;
 struct smb_hdr *VAR_10;
 SESSION_SETUP_ANDX *VAR_11;
 char *VAR_12;
 struct cifs_ses *VAR_13 = VAR_8->ses;
 __u32 VAR_14;
 __u16 VAR_15;



 VAR_9 = FUNC_12(VAR_8, 13);
 if (VAR_9)
  goto out;

 VAR_11 = (SESSION_SETUP_ANDX *)VAR_8->iov[0].iov_base;
 VAR_12 = VAR_8->iov[2].iov_base;
 VAR_14 = FUNC_2(VAR_13, VAR_11);

 VAR_11->req_no_secext.Capabilities = FUNC_4(VAR_14);
 if (VAR_13->user_name != ((void*)0)) {
  VAR_11->req_no_secext.CaseInsensitivePasswordLength =
    FUNC_3(VAR_1);
  VAR_11->req_no_secext.CaseSensitivePasswordLength =
    FUNC_3(VAR_1);


  VAR_9 = FUNC_16(VAR_13, VAR_8->nls_cp);
  if (VAR_9) {
   FUNC_1(VAR_7, "Error %d during NTLM authentication\n",
      VAR_9);
   goto out;
  }


  FUNC_10(VAR_12, VAR_13->auth_key.response + VAR_2,
    VAR_1);
  VAR_12 += VAR_1;
  FUNC_10(VAR_12, VAR_13->auth_key.response + VAR_2,
    VAR_1);
  VAR_12 += VAR_1;
 } else {
  VAR_11->req_no_secext.CaseInsensitivePasswordLength = 0;
  VAR_11->req_no_secext.CaseSensitivePasswordLength = 0;
 }

 if (VAR_13->capabilities & VAR_0) {

  if (VAR_8->iov[0].iov_len % 2) {
   *VAR_12 = 0;
   VAR_12++;
  }
  FUNC_17(&VAR_12, VAR_13, VAR_8->nls_cp);
 } else {
  FUNC_0(&VAR_12, VAR_13, VAR_8->nls_cp);
 }


 VAR_8->iov[2].iov_len = (long) VAR_12 -
   (long) VAR_8->iov[2].iov_base;

 VAR_9 = FUNC_15(VAR_8);
 if (VAR_9)
  goto out;

 VAR_11 = (SESSION_SETUP_ANDX *)VAR_8->iov[0].iov_base;
 VAR_10 = (struct smb_hdr *)VAR_8->iov[0].iov_base;

 if (VAR_10->WordCount != 3) {
  VAR_9 = -VAR_3;
  FUNC_1(VAR_7, "bad word count %d\n", VAR_10->WordCount);
  goto out;
 }

 if (FUNC_9(VAR_11->resp.Action) & VAR_5)
  FUNC_1(VAR_4, "Guest login\n");

 VAR_13->Suid = VAR_10->Uid;
 FUNC_1(VAR_4, "UID = %llu\n", VAR_13->Suid);

 VAR_15 = FUNC_7(VAR_10);
 VAR_12 = FUNC_11(VAR_10);


 if (VAR_15 == 0) {

 } else if (VAR_10->Flags2 & VAR_6) {

  if (((unsigned long) VAR_12 - (unsigned long) VAR_10) % 2) {
   ++VAR_12;
   --VAR_15;
  }
  FUNC_6(&VAR_12, VAR_15, VAR_13,
          VAR_8->nls_cp);
 } else {
  FUNC_5(&VAR_12, VAR_15, VAR_13,
        VAR_8->nls_cp);
 }

 VAR_9 = FUNC_13(VAR_8);
out:
 VAR_8->result = VAR_9;
 VAR_8->func = ((void*)0);
 FUNC_14(VAR_8);
 FUNC_8(VAR_13->auth_key.response);
 VAR_13->auth_key.response = ((void*)0);
}
