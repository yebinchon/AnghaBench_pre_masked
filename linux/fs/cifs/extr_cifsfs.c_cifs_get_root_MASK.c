
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct smb_vol {int dummy; } ;
struct inode {int i_mode; } ;
struct dentry {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;


 char FUNC_0 (struct cifs_sb_info*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (struct smb_vol*,struct cifs_sb_info*,int ,int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (struct cifs_sb_info*) ;
 struct inode* FUNC_8 (struct dentry*) ;
 struct dentry* FUNC_9 (int ) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (char*) ;
 struct dentry* FUNC_12 (char*,struct dentry*,int) ;

__attribute__((used)) static struct dentry *
FUNC_13(struct smb_vol *VAR_5, struct super_block *VAR_6)
{
 struct dentry *VAR_7;
 struct cifs_sb_info *VAR_8 = FUNC_1(VAR_6);
 char *VAR_9 = ((void*)0);
 char *VAR_10, *VAR_11;
 char VAR_12;

 if (VAR_8->mnt_cifs_flags & VAR_0)
  return FUNC_9(VAR_6->s_root);

 VAR_9 = FUNC_5(VAR_5, VAR_8,
    FUNC_7(VAR_8), 0);
 if (VAR_9 == ((void*)0))
  return FUNC_2(-VAR_2);

 FUNC_6(VAR_4, "Get root dentry for %s\n", VAR_9);

 VAR_12 = FUNC_0(VAR_8);
 VAR_7 = FUNC_9(VAR_6->s_root);
 VAR_11 = VAR_10 = VAR_9;

 do {
  struct inode *VAR_13 = FUNC_8(VAR_7);
  struct dentry *VAR_14;

  if (!VAR_13) {
   FUNC_10(VAR_7);
   VAR_7 = FUNC_2(-VAR_1);
   break;
  }
  if (!FUNC_4(VAR_13->i_mode)) {
   FUNC_10(VAR_7);
   VAR_7 = FUNC_2(-VAR_3);
   break;
  }


  while (*VAR_10 == VAR_12)
   VAR_10++;
  if (!*VAR_10)
   break;
  VAR_11 = VAR_10++;

  while (*VAR_10 && *VAR_10 != VAR_12)
   VAR_10++;

  VAR_14 = FUNC_12(VAR_11, VAR_7, VAR_10 - VAR_11);
  FUNC_10(VAR_7);
  VAR_7 = VAR_14;
 } while (!FUNC_3(VAR_7));
 FUNC_11(VAR_9);
 return VAR_7;
}
