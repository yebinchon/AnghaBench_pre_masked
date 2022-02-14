
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_5__ {int Capability; } ;
struct cifs_tcon {TYPE_1__ fsUnixInfo; TYPE_3__* ses; scalar_t__ posix_extensions; } ;
struct cifs_sb_info {int dummy; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
struct TYPE_8__ {scalar_t__ time; } ;
struct TYPE_7__ {struct TCP_Server_Info* server; } ;
struct TYPE_6__ {int (* posix_mkdir ) (unsigned int,struct inode*,int ,struct cifs_tcon*,char*,struct cifs_sb_info*) ;int (* mkdir ) (unsigned int,struct inode*,int ,struct cifs_tcon*,char*,struct cifs_sb_info*) ;} ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct tcon_link*) ;
 int FUNC_3 (struct tcon_link*) ;
 char* FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct inode*,struct dentry*,int ,char*,struct cifs_sb_info*,struct cifs_tcon*,unsigned int) ;
 int FUNC_8 (struct inode*,struct dentry*,int ,char*,struct cifs_sb_info*,struct cifs_tcon*,unsigned int) ;
 int FUNC_9 (struct tcon_link*) ;
 struct tcon_link* FUNC_10 (struct cifs_sb_info*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (unsigned int) ;
 unsigned int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (unsigned int,struct inode*,int ,struct cifs_tcon*,char*,struct cifs_sb_info*) ;
 int FUNC_17 (unsigned int,struct inode*,int ,struct cifs_tcon*,char*,struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_18 (struct tcon_link*) ;

int FUNC_19(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;
 struct cifs_sb_info *VAR_10;
 struct tcon_link *VAR_11;
 struct cifs_tcon *VAR_12;
 struct TCP_Server_Info *VAR_13;
 char *VAR_14;

 FUNC_6(VAR_4, "In cifs_mkdir, mode = 0x%hx inode = 0x%p\n",
   VAR_7, VAR_5);

 VAR_10 = FUNC_1(VAR_5->i_sb);
 VAR_11 = FUNC_10(VAR_10);
 if (FUNC_2(VAR_11))
  return FUNC_3(VAR_11);
 VAR_12 = FUNC_18(VAR_11);

 VAR_9 = FUNC_13();

 VAR_14 = FUNC_4(VAR_6);
 if (VAR_14 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto mkdir_out;
 }

 VAR_13 = VAR_12->ses->server;

 if ((VAR_13->ops->posix_mkdir) && (VAR_12->posix_extensions)) {
  VAR_8 = VAR_13->ops->posix_mkdir(VAR_9, VAR_5, VAR_7, VAR_12, VAR_14,
           VAR_10);
  FUNC_11(VAR_6);
  goto mkdir_out;
 }

 if (FUNC_5(VAR_12->ses) && (VAR_0 &
    FUNC_15(VAR_12->fsUnixInfo.Capability))) {
  VAR_8 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_14, VAR_10,
          VAR_12, VAR_9);
  if (VAR_8 != -VAR_3)
   goto mkdir_out;
 }

 if (!VAR_13->ops->mkdir) {
  VAR_8 = -VAR_2;
  goto mkdir_out;
 }


 VAR_8 = VAR_13->ops->mkdir(VAR_9, VAR_5, VAR_7, VAR_12, VAR_14, VAR_10);
 if (VAR_8) {
  FUNC_6(VAR_4, "cifs_mkdir returned 0x%x\n", VAR_8);
  FUNC_11(VAR_6);
  goto mkdir_out;
 }


 VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_14, VAR_10, VAR_12,
         VAR_9);
mkdir_out:




 FUNC_0(VAR_5)->time = 0;
 FUNC_14(VAR_14);
 FUNC_12(VAR_9);
 FUNC_9(VAR_11);
 return VAR_8;
}
