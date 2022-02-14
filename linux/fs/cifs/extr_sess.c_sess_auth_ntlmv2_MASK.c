
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
struct TYPE_10__ {int len; int * response; } ;
struct cifs_ses {int capabilities; int Suid; TYPE_4__ auth_key; int * user_name; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_9__ {int Action; } ;
struct TYPE_7__ {scalar_t__ CaseSensitivePasswordLength; scalar_t__ CaseInsensitivePasswordLength; int Capabilities; } ;
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
 int FUNC_0 (char**,struct cifs_ses*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct cifs_ses*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char**,scalar_t__,struct cifs_ses*,int ) ;
 int FUNC_6 (char**,scalar_t__,struct cifs_ses*,int ) ;
 scalar_t__ FUNC_7 (struct smb_hdr*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int *,int) ;
 char* FUNC_11 (struct smb_hdr*) ;
 int FUNC_12 (struct sess_data*,int) ;
 int FUNC_13 (struct sess_data*) ;
 int FUNC_14 (struct sess_data*) ;
 int FUNC_15 (struct sess_data*) ;
 int FUNC_16 (struct cifs_ses*,int ) ;
 int FUNC_17 (char**,struct cifs_ses*,int ) ;

__attribute__((used)) static void
FUNC_18(struct sess_data *VAR_7)
{
 int VAR_8 = 0;
 struct smb_hdr *VAR_9;
 SESSION_SETUP_ANDX *VAR_10;
 char *VAR_11;
 struct cifs_ses *VAR_12 = VAR_7->ses;
 __u32 VAR_13;
 __u16 VAR_14;



 VAR_8 = FUNC_12(VAR_7, 13);
 if (VAR_8)
  goto out;

 VAR_10 = (SESSION_SETUP_ANDX *)VAR_7->iov[0].iov_base;
 VAR_11 = VAR_7->iov[2].iov_base;
 VAR_13 = FUNC_2(VAR_12, VAR_10);

 VAR_10->req_no_secext.Capabilities = FUNC_4(VAR_13);


 VAR_10->req_no_secext.CaseInsensitivePasswordLength = 0;

 if (VAR_12->user_name != ((void*)0)) {

  VAR_8 = FUNC_16(VAR_12, VAR_7->nls_cp);
  if (VAR_8) {
   FUNC_1(VAR_6, "Error %d during NTLMv2 authentication\n", VAR_8);
   goto out;
  }

  FUNC_10(VAR_11, VAR_12->auth_key.response + VAR_1,
    VAR_12->auth_key.len - VAR_1);
  VAR_11 += VAR_12->auth_key.len - VAR_1;




  VAR_10->req_no_secext.CaseSensitivePasswordLength =
   FUNC_3(VAR_12->auth_key.len - VAR_1);
 } else {
  VAR_10->req_no_secext.CaseSensitivePasswordLength = 0;
 }

 if (VAR_12->capabilities & VAR_0) {
  if (VAR_7->iov[0].iov_len % 2) {
   *VAR_11 = 0;
   VAR_11++;
  }
  FUNC_17(&VAR_11, VAR_12, VAR_7->nls_cp);
 } else {
  FUNC_0(&VAR_11, VAR_12, VAR_7->nls_cp);
 }


 VAR_7->iov[2].iov_len = (long) VAR_11 -
   (long) VAR_7->iov[2].iov_base;

 VAR_8 = FUNC_15(VAR_7);
 if (VAR_8)
  goto out;

 VAR_10 = (SESSION_SETUP_ANDX *)VAR_7->iov[0].iov_base;
 VAR_9 = (struct smb_hdr *)VAR_7->iov[0].iov_base;

 if (VAR_9->WordCount != 3) {
  VAR_8 = -VAR_2;
  FUNC_1(VAR_6, "bad word count %d\n", VAR_9->WordCount);
  goto out;
 }

 if (FUNC_9(VAR_10->resp.Action) & VAR_4)
  FUNC_1(VAR_3, "Guest login\n");

 VAR_12->Suid = VAR_9->Uid;
 FUNC_1(VAR_3, "UID = %llu\n", VAR_12->Suid);

 VAR_14 = FUNC_7(VAR_9);
 VAR_11 = FUNC_11(VAR_9);


 if (VAR_14 == 0) {

 } else if (VAR_9->Flags2 & VAR_5) {

  if (((unsigned long) VAR_11 - (unsigned long) VAR_9) % 2) {
   ++VAR_11;
   --VAR_14;
  }
  FUNC_6(&VAR_11, VAR_14, VAR_12,
          VAR_7->nls_cp);
 } else {
  FUNC_5(&VAR_11, VAR_14, VAR_12,
        VAR_7->nls_cp);
 }

 VAR_8 = FUNC_13(VAR_7);
out:
 VAR_7->result = VAR_8;
 VAR_7->func = ((void*)0);
 FUNC_14(VAR_7);
 FUNC_8(VAR_12->auth_key.response);
 VAR_12->auth_key.response = ((void*)0);
}
