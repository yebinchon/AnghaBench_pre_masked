
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb_vol {int no_linux_ext; int password; struct smb_vol* username; int sign; int sectype; int local_lease; int nohandlecache; int nocase; int retry; int UNC; void* cred_uid; void* linux_uid; int local_nls; } ;
struct cifs_tcon {scalar_t__ posix_extensions; TYPE_1__* ses; int unix_ext; int local_lease; int nohandlecache; int nocase; int retry; int treeName; } ;
struct cifs_ses {scalar_t__ posix_extensions; TYPE_1__* ses; int unix_ext; int local_lease; int nohandlecache; int nocase; int retry; int treeName; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
typedef void* kuid_t ;
struct TYPE_5__ {int srv_count; } ;
struct TYPE_4__ {TYPE_2__* server; int sign; int sectype; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cifs_tcon* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct cifs_tcon*) ;
 scalar_t__ FUNC_2 (struct cifs_tcon*) ;
 struct cifs_tcon* FUNC_3 (TYPE_2__*,struct smb_vol*) ;
 struct cifs_tcon* FUNC_4 (struct cifs_tcon*,struct smb_vol*) ;
 int FUNC_5 (struct cifs_tcon*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 struct cifs_tcon* FUNC_7 (struct cifs_sb_info*) ;
 int FUNC_8 (struct smb_vol*,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_9 (struct smb_vol*) ;
 struct smb_vol* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct cifs_tcon*,int *,struct smb_vol*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static struct cifs_tcon *
FUNC_15(struct cifs_sb_info *VAR_4, kuid_t VAR_5)
{
 int VAR_6;
 struct cifs_tcon *VAR_7 = FUNC_7(VAR_4);
 struct cifs_ses *VAR_8;
 struct cifs_tcon *VAR_9 = ((void*)0);
 struct smb_vol *VAR_10;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_10->local_nls = VAR_4->local_nls;
 VAR_10->linux_uid = VAR_5;
 VAR_10->cred_uid = VAR_5;
 VAR_10->UNC = VAR_7->treeName;
 VAR_10->retry = VAR_7->retry;
 VAR_10->nocase = VAR_7->nocase;
 VAR_10->nohandlecache = VAR_7->nohandlecache;
 VAR_10->local_lease = VAR_7->local_lease;
 VAR_10->no_linux_ext = !VAR_7->unix_ext;
 VAR_10->sectype = VAR_7->ses->sectype;
 VAR_10->sign = VAR_7->ses->sign;

 VAR_6 = FUNC_8(VAR_10, VAR_7->ses);
 if (VAR_6) {
  VAR_9 = FUNC_0(VAR_6);
  goto out;
 }


 FUNC_13(&VAR_3);
 ++VAR_7->ses->server->srv_count;
 FUNC_14(&VAR_3);

 VAR_8 = FUNC_3(VAR_7->ses->server, VAR_10);
 if (FUNC_1(VAR_8)) {
  VAR_9 = (struct cifs_tcon *)VAR_8;
  FUNC_6(VAR_7->ses->server, 0);
  goto out;
 }

 VAR_9 = FUNC_4(VAR_8, VAR_10);
 if (FUNC_1(VAR_9)) {
  FUNC_5(VAR_8);
  goto out;
 }


 if (VAR_9->posix_extensions)
  VAR_4->mnt_cifs_flags |= VAR_0;

 if (FUNC_2(VAR_8))
  FUNC_12(0, VAR_9, ((void*)0), VAR_10);

out:
 FUNC_9(VAR_10->username);
 FUNC_11(VAR_10->password);
 FUNC_9(VAR_10);

 return VAR_9;
}
