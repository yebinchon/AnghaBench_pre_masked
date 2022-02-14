
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsInodeInfo {int cifsAttrs; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* query_symlink ) (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,char*,char**,int) ;} ;
struct TYPE_3__ {struct TCP_Server_Info* server; } ;


 int VAR_0 ;
 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* FUNC_2 (struct tcon_link*) ;
 char const* FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct tcon_link*) ;
 char* FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,char*,char*,struct inode*) ;
 int FUNC_7 (struct tcon_link*) ;
 struct tcon_link* FUNC_8 (struct cifs_sb_info*) ;
 int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int VAR_6 ;
 int FUNC_12 (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,char*,char**) ;
 int FUNC_13 (struct delayed_call*,int ,char*) ;
 int FUNC_14 (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,char*,char**,int) ;
 struct cifs_tcon* FUNC_15 (struct tcon_link*) ;

const char *
FUNC_16(struct dentry *VAR_7, struct inode *VAR_8,
       struct delayed_call *VAR_9)
{
 int VAR_10 = -VAR_4;
 unsigned int VAR_11;
 char *VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);
 struct cifs_sb_info *VAR_14 = FUNC_1(VAR_8->i_sb);
 struct tcon_link *VAR_15 = ((void*)0);
 struct cifs_tcon *VAR_16;
 struct TCP_Server_Info *VAR_17;

 if (!VAR_7)
  return FUNC_3(-VAR_3);

 VAR_11 = FUNC_10();

 VAR_15 = FUNC_8(VAR_14);
 if (FUNC_4(VAR_15)) {
  FUNC_9(VAR_11);
  return FUNC_2(VAR_15);
 }
 VAR_16 = FUNC_15(VAR_15);
 VAR_17 = VAR_16->ses->server;

 VAR_12 = FUNC_5(VAR_7);
 if (!VAR_12) {
  FUNC_9(VAR_11);
  FUNC_7(VAR_15);
  return FUNC_3(-VAR_4);
 }

 FUNC_6(VAR_5, "Full path: %s inode = 0x%p\n", VAR_12, VAR_8);

 VAR_10 = -VAR_2;




 if (VAR_14->mnt_cifs_flags & VAR_1)
  VAR_10 = FUNC_12(VAR_11, VAR_16, VAR_14, VAR_12,
          &VAR_13);

 if (VAR_10 != 0 && VAR_17->ops->query_symlink) {
  struct cifsInodeInfo *VAR_18 = FUNC_0(VAR_8);
  bool VAR_19 = 0;

  if (VAR_18->cifsAttrs & VAR_0)
   VAR_19 = 1;

  VAR_10 = VAR_17->ops->query_symlink(VAR_11, VAR_16, VAR_14, VAR_12,
      &VAR_13, VAR_19);
 }

 FUNC_11(VAR_12);
 FUNC_9(VAR_11);
 FUNC_7(VAR_15);
 if (VAR_10 != 0) {
  FUNC_11(VAR_13);
  return FUNC_3(VAR_10);
 }
 FUNC_13(VAR_9, VAR_6, VAR_13);
 return VAR_13;
}
