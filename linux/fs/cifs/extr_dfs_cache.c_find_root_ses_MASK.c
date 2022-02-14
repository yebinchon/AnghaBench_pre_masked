
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vol ;
struct smb_vol {int dummy; } ;
struct dfs_info3_param {int member_0; } ;
struct dfs_cache_vol_info {int vi_mntdata; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifs_ses {int dummy; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; } ;
struct TYPE_6__ {TYPE_2__* server; } ;
struct TYPE_5__ {TYPE_1__* vals; } ;
struct TYPE_4__ {scalar_t__ header_preamble_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cifs_ses* FUNC_0 (char*) ;
 struct cifs_ses* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct TCP_Server_Info*) ;
 int FUNC_4 (struct smb_vol*) ;
 char* FUNC_5 (int ,char*,struct dfs_info3_param*,char**) ;
 struct TCP_Server_Info* FUNC_6 (struct smb_vol*) ;
 struct cifs_ses* FUNC_7 (struct TCP_Server_Info*,struct smb_vol*) ;
 int FUNC_8 (struct TCP_Server_Info*,int ) ;
 int FUNC_9 (struct smb_vol*,char*,char*,int) ;
 int FUNC_10 (char*,struct dfs_info3_param*,int *) ;
 int FUNC_11 (struct dfs_info3_param*) ;
 char* FUNC_12 (char const*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct smb_vol*,int ,int) ;

__attribute__((used)) static struct cifs_ses *FUNC_15(struct dfs_cache_vol_info *VAR_2,
          struct cifs_tcon *VAR_3, const char *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 struct dfs_info3_param VAR_7 = {0};
 char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 bool VAR_10 = VAR_3->ses->server->vals->header_preamble_size == 0;
 struct TCP_Server_Info *VAR_11;
 struct cifs_ses *VAR_12;
 struct smb_vol VAR_13;

 VAR_5 = FUNC_12(VAR_4);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 FUNC_14(&VAR_13, 0, sizeof(VAR_13));

 VAR_6 = FUNC_10(VAR_5, &VAR_7, ((void*)0));
 if (VAR_6) {
  VAR_12 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_8 = FUNC_5(VAR_2->vi_mntdata, VAR_5, &VAR_7,
        &VAR_9);
 FUNC_11(&VAR_7);

 if (FUNC_2(VAR_8)) {
  VAR_12 = FUNC_0(VAR_8);
  VAR_8 = ((void*)0);
  goto out;
 }

 VAR_6 = FUNC_9(&VAR_13, VAR_8, VAR_9, VAR_10);
 FUNC_13(VAR_9);

 if (VAR_6) {
  VAR_12 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_11 = FUNC_6(&VAR_13);
 if (FUNC_3(VAR_11)) {
  VAR_12 = FUNC_1(-VAR_1);
  goto out;
 }
 if (VAR_11->tcpStatus != VAR_0) {
  FUNC_8(VAR_11, 0);
  VAR_12 = FUNC_1(-VAR_1);
  goto out;
 }

 VAR_12 = FUNC_7(VAR_11, &VAR_13);

out:
 FUNC_4(&VAR_13);
 FUNC_13(VAR_8);
 FUNC_13(VAR_5);

 return VAR_12;
}
