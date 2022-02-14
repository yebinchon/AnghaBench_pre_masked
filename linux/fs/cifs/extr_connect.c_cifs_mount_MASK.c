
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_ses {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cifs_sb_info*,struct smb_vol*,unsigned int,struct TCP_Server_Info*,struct cifs_tcon*) ;
 int FUNC_2 (struct smb_vol*,struct cifs_sb_info*,unsigned int*,struct TCP_Server_Info**,struct cifs_ses**,struct cifs_tcon**) ;
 int FUNC_3 (struct cifs_sb_info*,unsigned int,struct TCP_Server_Info*,struct cifs_ses*,struct cifs_tcon*) ;
 int FUNC_4 (struct cifs_sb_info*,struct cifs_ses*,struct cifs_tcon*) ;

int FUNC_5(struct cifs_sb_info *VAR_2, struct smb_vol *VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5;
 struct cifs_ses *VAR_6;
 struct cifs_tcon *VAR_7;
 struct TCP_Server_Info *VAR_8;

 VAR_4 = FUNC_2(VAR_3, VAR_2, &VAR_5, &VAR_8, &VAR_6, &VAR_7);
 if (VAR_4)
  goto error;

 if (VAR_7) {
  VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_8, VAR_7);
  if (VAR_4 == -VAR_1)
   VAR_4 = -VAR_0;
  if (VAR_4)
   goto error;
 }

 FUNC_0(VAR_5);

 return FUNC_4(VAR_2, VAR_6, VAR_7);

error:
 FUNC_3(VAR_2, VAR_5, VAR_8, VAR_6, VAR_7);
 return VAR_4;
}
