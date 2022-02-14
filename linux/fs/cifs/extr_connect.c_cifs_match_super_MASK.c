
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct super_block {int dummy; } ;
struct smb_vol {int dummy; } ;
struct cifs_tcon {struct cifs_ses* ses; } ;
struct cifs_ses {struct TCP_Server_Info* server; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_mnt_data {struct smb_vol* vol; } ;
struct TCP_Server_Info {int dummy; } ;


 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 struct tcon_link* FUNC_2 (int ) ;
 int FUNC_3 (struct tcon_link*) ;
 int FUNC_4 (struct cifs_sb_info*) ;
 int VAR_0 ;
 int FUNC_5 (struct super_block*,struct cifs_mnt_data*) ;
 int FUNC_6 (struct super_block*,struct cifs_mnt_data*) ;
 int FUNC_7 (struct TCP_Server_Info*,struct smb_vol*) ;
 int FUNC_8 (struct cifs_ses*,struct smb_vol*) ;
 int FUNC_9 (struct cifs_tcon*,struct smb_vol*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct cifs_tcon* FUNC_12 (struct tcon_link*) ;

int
FUNC_13(struct super_block *VAR_1, void *VAR_2)
{
 struct cifs_mnt_data *VAR_3 = (struct cifs_mnt_data *)VAR_2;
 struct smb_vol *VAR_4;
 struct cifs_sb_info *VAR_5;
 struct TCP_Server_Info *VAR_6;
 struct cifs_ses *VAR_7;
 struct cifs_tcon *VAR_8;
 struct tcon_link *VAR_9;
 int VAR_10 = 0;

 FUNC_10(&VAR_0);
 VAR_5 = FUNC_0(VAR_1);
 VAR_9 = FUNC_2(FUNC_4(VAR_5));
 if (FUNC_1(VAR_9)) {
  FUNC_11(&VAR_0);
  return VAR_10;
 }
 VAR_8 = FUNC_12(VAR_9);
 VAR_7 = VAR_8->ses;
 VAR_6 = VAR_7->server;

 VAR_4 = VAR_3->vol;

 if (!FUNC_7(VAR_6, VAR_4) ||
     !FUNC_8(VAR_7, VAR_4) ||
     !FUNC_9(VAR_8, VAR_4) ||
     !FUNC_6(VAR_1, VAR_3)) {
  VAR_10 = 0;
  goto out;
 }

 VAR_10 = FUNC_5(VAR_1, VAR_3);
out:
 FUNC_11(&VAR_0);
 FUNC_3(VAR_9);
 return VAR_10;
}
