
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int f_flags; int * f_op; int f_mode; } ;
typedef struct tcon_link dentry ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_pending_open {int dummy; } ;
struct cifs_fid {int dummy; } ;
struct cifsFileInfo {int dummy; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef int __u32 ;
struct TYPE_7__ {int mnt_cifs_flags; } ;
struct TYPE_6__ {int (* close ) (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;int (* new_lease_key ) (struct cifs_fid*) ;} ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_2 (struct tcon_link*) ;
 int FUNC_3 (struct tcon_link*,struct cifs_tcon*) ;
 int FUNC_4 (struct cifs_fid*,struct tcon_link*,struct cifs_pending_open*) ;
 int FUNC_5 (int ,char*,struct inode*,struct tcon_link*,struct tcon_link*) ;
 int FUNC_6 (struct cifs_pending_open*) ;
 int FUNC_7 (struct inode*,struct tcon_link*,unsigned int,struct tcon_link*,unsigned int,int ,int *,struct cifs_fid*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct tcon_link* FUNC_8 (struct inode*,struct tcon_link*,int ) ;
 struct cifsFileInfo* FUNC_9 (struct cifs_fid*,struct file*,struct tcon_link*,int ) ;
 int FUNC_10 (struct tcon_link*) ;
 struct tcon_link* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct tcon_link*) ;
 int FUNC_13 (struct file*,struct tcon_link*) ;
 int FUNC_14 (struct file*,struct tcon_link*,int ) ;
 int FUNC_15 (struct file*) ;
 int FUNC_16 (unsigned int) ;
 int VAR_11 ;
 unsigned int FUNC_17 () ;
 int FUNC_18 (struct cifs_fid*) ;
 int FUNC_19 (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;
 int FUNC_20 (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;
 struct cifs_tcon* FUNC_21 (struct tcon_link*) ;

int
FUNC_22(struct inode *VAR_12, struct dentry *VAR_13,
   struct file *VAR_14, unsigned VAR_15, umode_t VAR_16)
{
 int VAR_17;
 unsigned int VAR_18;
 struct tcon_link *VAR_19;
 struct cifs_tcon *VAR_20;
 struct TCP_Server_Info *VAR_21;
 struct cifs_fid VAR_22;
 struct cifs_pending_open VAR_23;
 __u32 VAR_24;
 struct cifsFileInfo *VAR_25;
 if (!(VAR_15 & VAR_6)) {
  struct dentry *VAR_26;





  if (!FUNC_12(VAR_13))
   return -VAR_2;

  VAR_26 = FUNC_8(VAR_12, VAR_13, 0);
  if (FUNC_1(VAR_26))
   return FUNC_2(VAR_26);

  return FUNC_13(VAR_14, VAR_26);
 }

 VAR_18 = FUNC_17();

 FUNC_5(VAR_5, "parent inode = 0x%p name is: %pd and dentry = 0x%p\n",
   VAR_12, VAR_13, VAR_13);

 VAR_19 = FUNC_11(FUNC_0(VAR_12->i_sb));
 if (FUNC_1(VAR_19)) {
  VAR_17 = FUNC_2(VAR_19);
  goto out_free_xid;
 }

 VAR_20 = FUNC_21(VAR_19);

 VAR_17 = FUNC_3(VAR_13, VAR_20);
 if (VAR_17)
  goto out;

 VAR_21 = VAR_20->ses->server;

 if (VAR_21->ops->new_lease_key)
  VAR_21->ops->new_lease_key(&VAR_22);

 FUNC_4(&VAR_22, VAR_19, &VAR_23);

 VAR_17 = FUNC_7(VAR_12, VAR_13, VAR_18, VAR_19, VAR_15, VAR_16,
       &VAR_24, &VAR_22);

 if (VAR_17) {
  FUNC_6(&VAR_23);
  goto out;
 }

 if ((VAR_15 & (VAR_6 | VAR_8)) == (VAR_6 | VAR_8))
  VAR_14->f_mode |= VAR_4;

 VAR_17 = FUNC_14(VAR_14, VAR_13, VAR_11);
 if (VAR_17) {
  if (VAR_21->ops->close)
   VAR_21->ops->close(VAR_18, VAR_20, &VAR_22);
  FUNC_6(&VAR_23);
  goto out;
 }

 if (VAR_14->f_flags & VAR_7 &&
     FUNC_0(VAR_12->i_sb)->mnt_cifs_flags & VAR_1) {
  if (FUNC_0(VAR_12->i_sb)->mnt_cifs_flags & VAR_0)
   VAR_14->f_op = &VAR_9;
  else
   VAR_14->f_op = &VAR_10;
  }

 VAR_25 = FUNC_9(&VAR_22, VAR_14, VAR_19, VAR_24);
 if (VAR_25 == ((void*)0)) {
  if (VAR_21->ops->close)
   VAR_21->ops->close(VAR_18, VAR_20, &VAR_22);
  FUNC_6(&VAR_23);
  FUNC_15(VAR_14);
  VAR_17 = -VAR_3;
 }

out:
 FUNC_10(VAR_19);
out_free_xid:
 FUNC_16(VAR_18);
 return VAR_17;
}
