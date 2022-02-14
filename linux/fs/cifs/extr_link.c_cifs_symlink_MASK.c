
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {scalar_t__ unix_ext; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;


 int FUNC_0 (unsigned int,struct cifs_tcon*,char*,char const*,int ,int ) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct tcon_link*) ;
 int FUNC_3 (struct tcon_link*) ;
 char* FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct inode**,char*,int *,int ,unsigned int,int *) ;
 int FUNC_7 (struct inode**,char*,int ,unsigned int) ;
 int FUNC_8 (struct tcon_link*) ;
 int FUNC_9 (struct cifs_sb_info*) ;
 struct tcon_link* FUNC_10 (struct cifs_sb_info*) ;
 int FUNC_11 (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,char*,char const*) ;
 int FUNC_12 (struct dentry*,struct inode*) ;
 int FUNC_13 (unsigned int) ;
 unsigned int FUNC_14 () ;
 int FUNC_15 (char*) ;
 struct cifs_tcon* FUNC_16 (struct tcon_link*) ;

int
FUNC_17(struct inode *VAR_4, struct dentry *VAR_5, const char *VAR_6)
{
 int VAR_7 = -VAR_2;
 unsigned int VAR_8;
 struct cifs_sb_info *VAR_9 = FUNC_1(VAR_4->i_sb);
 struct tcon_link *VAR_10;
 struct cifs_tcon *VAR_11;
 char *VAR_12 = ((void*)0);
 struct inode *VAR_13 = ((void*)0);

 VAR_8 = FUNC_14();

 VAR_10 = FUNC_10(VAR_9);
 if (FUNC_2(VAR_10)) {
  VAR_7 = FUNC_3(VAR_10);
  goto symlink_exit;
 }
 VAR_11 = FUNC_16(VAR_10);

 VAR_12 = FUNC_4(VAR_5);
 if (VAR_12 == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto symlink_exit;
 }

 FUNC_5(VAR_3, "Full path: %s\n", VAR_12);
 FUNC_5(VAR_3, "symname is %s\n", VAR_6);


 if (VAR_9->mnt_cifs_flags & VAR_0)
  VAR_7 = FUNC_11(VAR_8, VAR_11, VAR_9, VAR_12, VAR_6);
 else if (VAR_11->unix_ext)
  VAR_7 = FUNC_0(VAR_8, VAR_11, VAR_12, VAR_6,
        VAR_9->local_nls,
        FUNC_9(VAR_9));




 if (VAR_7 == 0) {
  if (VAR_11->unix_ext)
   VAR_7 = FUNC_7(&VAR_13, VAR_12,
            VAR_4->i_sb, VAR_8);
  else
   VAR_7 = FUNC_6(&VAR_13, VAR_12, ((void*)0),
       VAR_4->i_sb, VAR_8, ((void*)0));

  if (VAR_7 != 0) {
   FUNC_5(VAR_3, "Create symlink ok, getinodeinfo fail rc = %d\n",
     VAR_7);
  } else {
   FUNC_12(VAR_5, VAR_13);
  }
 }
symlink_exit:
 FUNC_15(VAR_12);
 FUNC_8(VAR_10);
 FUNC_13(VAR_8);
 return VAR_7;
}
