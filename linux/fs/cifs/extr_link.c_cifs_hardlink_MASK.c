
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {TYPE_1__* ses; scalar_t__ unix_ext; } ;
struct cifs_sb_info {int local_nls; } ;
struct cifsInodeInfo {scalar_t__ time; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
struct TYPE_8__ {int i_lock; } ;
struct TYPE_7__ {int (* create_hardlink ) (unsigned int,struct cifs_tcon*,char*,char*,struct cifs_sb_info*) ;} ;
struct TYPE_6__ {struct TCP_Server_Info* server; } ;


 int FUNC_0 (unsigned int,struct cifs_tcon*,char*,char*,int ,int ) ;
 struct cifsInodeInfo* FUNC_1 (TYPE_3__*) ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct tcon_link*) ;
 int FUNC_4 (struct tcon_link*) ;
 char* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct cifs_sb_info*) ;
 struct tcon_link* FUNC_8 (struct cifs_sb_info*) ;
 int FUNC_9 (struct dentry*) ;
 TYPE_3__* FUNC_10 (struct dentry*) ;
 scalar_t__ FUNC_11 (struct dentry*) ;
 int FUNC_12 (unsigned int) ;
 unsigned int FUNC_13 () ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (unsigned int,struct cifs_tcon*,char*,char*,struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_19 (struct tcon_link*) ;

int
FUNC_20(struct dentry *VAR_6, struct inode *VAR_7,
       struct dentry *VAR_8)
{
 int VAR_9 = -VAR_0;
 unsigned int VAR_10;
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 struct cifs_sb_info *VAR_13 = FUNC_2(VAR_7->i_sb);
 struct tcon_link *VAR_14;
 struct cifs_tcon *VAR_15;
 struct TCP_Server_Info *VAR_16;
 struct cifsInodeInfo *VAR_17;

 VAR_14 = FUNC_8(VAR_13);
 if (FUNC_3(VAR_14))
  return FUNC_4(VAR_14);
 VAR_15 = FUNC_19(VAR_14);

 VAR_10 = FUNC_13();

 VAR_11 = FUNC_5(VAR_6);
 VAR_12 = FUNC_5(VAR_8);
 if ((VAR_11 == ((void*)0)) || (VAR_12 == ((void*)0))) {
  VAR_9 = -VAR_3;
  goto cifs_hl_exit;
 }

 if (VAR_15->unix_ext)
  VAR_9 = FUNC_0(VAR_10, VAR_15, VAR_11, VAR_12,
         VAR_13->local_nls,
         FUNC_7(VAR_13));
 else {
  VAR_16 = VAR_15->ses->server;
  if (!VAR_16->ops->create_hardlink) {
   VAR_9 = -VAR_4;
   goto cifs_hl_exit;
  }
  VAR_9 = VAR_16->ops->create_hardlink(VAR_10, VAR_15, VAR_11, VAR_12,
        VAR_13);
  if ((VAR_9 == -VAR_2) || (VAR_9 == -VAR_1))
   VAR_9 = -VAR_5;
 }

 FUNC_9(VAR_8);





 if (FUNC_11(VAR_6)) {
  VAR_17 = FUNC_1(FUNC_10(VAR_6));
  if (VAR_9 == 0) {
   FUNC_16(&FUNC_10(VAR_6)->i_lock);
   FUNC_14(FUNC_10(VAR_6));
   FUNC_17(&FUNC_10(VAR_6)->i_lock);







  }






  VAR_17->time = 0;
 }

cifs_hl_exit:
 FUNC_15(VAR_11);
 FUNC_15(VAR_12);
 FUNC_12(VAR_10);
 FUNC_6(VAR_14);
 return VAR_9;
}
