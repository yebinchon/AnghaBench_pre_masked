
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_mtime; int i_ctime; int i_lock; int i_sb; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct cifsInodeInfo {scalar_t__ time; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* rmdir ) (unsigned int,struct cifs_tcon*,char*,struct cifs_sb_info*) ;} ;
struct TYPE_3__ {struct TCP_Server_Info* server; } ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct tcon_link*) ;
 int FUNC_3 (struct tcon_link*) ;
 char* FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ,char*,struct inode*) ;
 int FUNC_6 (struct tcon_link*) ;
 struct tcon_link* FUNC_7 (struct cifs_sb_info*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 struct inode* FUNC_10 (struct dentry*) ;
 int FUNC_11 (unsigned int) ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (unsigned int,struct cifs_tcon*,char*,struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_18 (struct tcon_link*) ;

int FUNC_19(struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;
 struct cifs_sb_info *VAR_7;
 struct tcon_link *VAR_8;
 struct cifs_tcon *VAR_9;
 struct TCP_Server_Info *VAR_10;
 char *VAR_11 = ((void*)0);
 struct cifsInodeInfo *VAR_12;

 FUNC_5(VAR_2, "cifs_rmdir, inode = 0x%p\n", VAR_3);

 VAR_6 = FUNC_12();

 VAR_11 = FUNC_4(VAR_4);
 if (VAR_11 == ((void*)0)) {
  VAR_5 = -VAR_0;
  goto rmdir_exit;
 }

 VAR_7 = FUNC_1(VAR_3->i_sb);
 VAR_8 = FUNC_7(VAR_7);
 if (FUNC_2(VAR_8)) {
  VAR_5 = FUNC_3(VAR_8);
  goto rmdir_exit;
 }
 VAR_9 = FUNC_18(VAR_8);
 VAR_10 = VAR_9->ses->server;

 if (!VAR_10->ops->rmdir) {
  VAR_5 = -VAR_1;
  FUNC_6(VAR_8);
  goto rmdir_exit;
 }

 VAR_5 = VAR_10->ops->rmdir(VAR_6, VAR_9, VAR_11, VAR_7);
 FUNC_6(VAR_8);

 if (!VAR_5) {
  FUNC_15(&FUNC_10(VAR_4)->i_lock);
  FUNC_13(FUNC_10(VAR_4), 0);
  FUNC_8(FUNC_10(VAR_4));
  FUNC_16(&FUNC_10(VAR_4)->i_lock);
 }

 VAR_12 = FUNC_0(FUNC_10(VAR_4));

 VAR_12->time = 0;

 VAR_12 = FUNC_0(VAR_3);




 VAR_12->time = 0;

 FUNC_10(VAR_4)->i_ctime = VAR_3->i_ctime = VAR_3->i_mtime =
  FUNC_9(VAR_3);

rmdir_exit:
 FUNC_14(VAR_11);
 FUNC_11(VAR_6);
 return VAR_5;
}
