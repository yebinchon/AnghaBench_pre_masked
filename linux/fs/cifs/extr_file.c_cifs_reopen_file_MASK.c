
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_sb; int i_mapping; } ;
struct TYPE_6__ {int Capability; } ;
struct cifs_tcon {scalar_t__ unix_ext; TYPE_1__ fsUnixInfo; TYPE_5__* ses; } ;
struct cifs_sb_info {int mnt_file_mode; } ;
struct cifs_open_parms {int reconnect; int desired_access; int create_options; int disposition; char* path; TYPE_3__* fid; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifsInodeInfo {int dummy; } ;
struct TYPE_8__ {int netfid; } ;
struct cifsFileInfo {int invalidHandle; unsigned int f_flags; TYPE_3__ fid; int fh_mutex; int dentry; int tlink; } ;
struct TCP_Server_Info {TYPE_2__* ops; scalar_t__ oplocks; } ;
typedef int __u32 ;
struct TYPE_9__ {struct TCP_Server_Info* server; } ;
struct TYPE_7__ {int (* open ) (unsigned int,struct cifs_open_parms*,int *,int *) ;int (* set_fid ) (struct cifsFileInfo*,TYPE_3__*,int ) ;scalar_t__ (* is_read_op ) (int ) ;int (* get_lease_key ) (struct inode*,TYPE_3__*) ;} ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct cifs_sb_info*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct inode**,char*,int *,int ,unsigned int,int *) ;
 int FUNC_8 (struct inode**,char*,int ,unsigned int) ;
 scalar_t__ FUNC_9 (struct cifsInodeInfo*) ;
 int FUNC_10 (char*,int *,int ,int ,unsigned int,int *,int *,unsigned int) ;
 int FUNC_11 (struct cifsFileInfo*) ;
 struct inode* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (unsigned int) ;
 unsigned int FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct inode*,TYPE_3__*) ;
 int FUNC_23 (unsigned int,struct cifs_open_parms*,int *,int *) ;
 int FUNC_24 (unsigned int,struct cifs_open_parms*,int *,int *) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (struct cifsFileInfo*,TYPE_3__*,int ) ;
 struct cifs_tcon* FUNC_27 (int ) ;

__attribute__((used)) static int
FUNC_28(struct cifsFileInfo *VAR_12, bool VAR_13)
{
 int VAR_14 = -VAR_3;
 unsigned int VAR_15;
 __u32 VAR_16;
 struct cifs_sb_info *VAR_17;
 struct cifs_tcon *VAR_18;
 struct TCP_Server_Info *VAR_19;
 struct cifsInodeInfo *VAR_20;
 struct inode *VAR_21;
 char *VAR_22 = ((void*)0);
 int VAR_23;
 int VAR_24 = VAR_6;
 int VAR_25 = VAR_1;
 struct cifs_open_parms VAR_26;

 VAR_15 = FUNC_15();
 FUNC_20(&VAR_12->fh_mutex);
 if (!VAR_12->invalidHandle) {
  FUNC_21(&VAR_12->fh_mutex);
  VAR_14 = 0;
  FUNC_14(VAR_15);
  return VAR_14;
 }

 VAR_21 = FUNC_12(VAR_12->dentry);
 VAR_17 = FUNC_1(VAR_21->i_sb);
 VAR_18 = FUNC_27(VAR_12->tlink);
 VAR_19 = VAR_18->ses->server;







 VAR_22 = FUNC_3(VAR_12->dentry);
 if (VAR_22 == ((void*)0)) {
  VAR_14 = -VAR_5;
  FUNC_21(&VAR_12->fh_mutex);
  FUNC_14(VAR_15);
  return VAR_14;
 }

 FUNC_6(VAR_7, "inode = 0x%p file flags 0x%x for %s\n",
   VAR_21, VAR_12->f_flags, VAR_22);

 if (VAR_18->ses->server->oplocks)
  VAR_16 = VAR_11;
 else
  VAR_16 = 0;

 if (VAR_18->unix_ext && FUNC_4(VAR_18->ses) &&
     (VAR_0 &
    FUNC_18(VAR_18->fsUnixInfo.Capability))) {




  unsigned int VAR_27 = VAR_12->f_flags &
      ~(VAR_8 | VAR_9 | VAR_10);

  VAR_14 = FUNC_10(VAR_22, ((void*)0), VAR_21->i_sb,
         VAR_17->mnt_file_mode ,
         VAR_27, &VAR_16, &VAR_12->fid.netfid, VAR_15);
  if (VAR_14 == 0) {
   FUNC_6(VAR_7, "posix reopen succeeded\n");
   VAR_26.reconnect = 1;
   goto reopen_success;
  }




 }

 VAR_23 = FUNC_5(VAR_12->f_flags);

 if (FUNC_2(VAR_17))
  VAR_25 |= VAR_2;

 if (VAR_19->ops->get_lease_key)
  VAR_19->ops->get_lease_key(VAR_21, &VAR_12->fid);

 VAR_26.tcon = VAR_18;
 VAR_26.cifs_sb = VAR_17;
 VAR_26.desired_access = VAR_23;
 VAR_26.create_options = VAR_25;
 VAR_26.disposition = VAR_24;
 VAR_26.path = VAR_22;
 VAR_26.fid = &VAR_12->fid;
 VAR_26.reconnect = 1;
 VAR_14 = VAR_19->ops->open(VAR_15, &VAR_26, &VAR_16, ((void*)0));
 if (VAR_14 == -VAR_4 && VAR_26.reconnect == 0) {

  VAR_14 = VAR_19->ops->open(VAR_15, &VAR_26, &VAR_16, ((void*)0));

  VAR_26.reconnect = 1;
 }

 if (VAR_14) {
  FUNC_21(&VAR_12->fh_mutex);
  FUNC_6(VAR_7, "cifs_reopen returned 0x%x\n", VAR_14);
  FUNC_6(VAR_7, "oplock: %d\n", VAR_16);
  goto reopen_error_exit;
 }

reopen_success:
 VAR_12->invalidHandle = 0;
 FUNC_21(&VAR_12->fh_mutex);
 VAR_20 = FUNC_0(VAR_21);

 if (VAR_13) {
  VAR_14 = FUNC_13(VAR_21->i_mapping);
  if (!FUNC_16(VAR_14))
   FUNC_19(VAR_21->i_mapping, VAR_14);

  if (VAR_18->unix_ext)
   VAR_14 = FUNC_8(&VAR_21, VAR_22,
            VAR_21->i_sb, VAR_15);
  else
   VAR_14 = FUNC_7(&VAR_21, VAR_22, ((void*)0),
       VAR_21->i_sb, VAR_15, ((void*)0));
 }
 if (VAR_19->ops->is_read_op(VAR_16) && FUNC_9(VAR_20)) {
  FUNC_6(VAR_7, "Reset oplock val from read to None due to mand locks\n");
  VAR_16 = 0;
 }

 VAR_19->ops->set_fid(VAR_12, &VAR_12->fid, VAR_16);
 if (VAR_26.reconnect)
  FUNC_11(VAR_12);

reopen_error_exit:
 FUNC_17(VAR_22);
 FUNC_14(VAR_15);
 return VAR_14;
}
