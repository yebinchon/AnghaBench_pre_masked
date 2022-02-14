
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_lock; int i_gid; int i_uid; int * i_fop; int * i_op; int i_mode; } ;
struct cifs_tcon {int unix_ext; scalar_t__ pipe; int resource_id; } ;
struct cifs_sb_info {int mnt_cifs_flags; int mnt_gid; int mnt_uid; scalar_t__ prepath; } ;
struct TYPE_2__ {int uniqueid; } ;


 int FUNC_0 (struct cifs_sb_info*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_2 (struct super_block*) ;
 long VAR_1 ;
 long VAR_2 ;
 struct inode* FUNC_3 (long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*) ;
 long FUNC_5 (struct inode**,char*,int *,struct super_block*,unsigned int,int *) ;
 long FUNC_6 (struct inode**,char*,struct super_block*,unsigned int) ;
 int VAR_7 ;
 struct cifs_tcon* FUNC_7 (struct cifs_sb_info*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 () ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,int ) ;
 char* FUNC_14 (int,int ) ;
 int FUNC_15 (char*,scalar_t__,int) ;
 int FUNC_16 (struct inode*,int) ;
 int VAR_8 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (scalar_t__) ;

struct inode *FUNC_20(struct super_block *VAR_9)
{
 unsigned int VAR_10;
 struct cifs_sb_info *VAR_11 = FUNC_2(VAR_9);
 struct inode *VAR_12 = ((void*)0);
 long VAR_13;
 struct cifs_tcon *VAR_14 = FUNC_7(VAR_11);
 char *VAR_15 = ((void*)0);
 int VAR_16;

 if ((VAR_11->mnt_cifs_flags & VAR_0)
     && VAR_11->prepath) {
  VAR_16 = FUNC_19(VAR_11->prepath);
  VAR_15 = FUNC_14(VAR_16 + 2 , VAR_4);
  if (VAR_15 == ((void*)0))
   return FUNC_3(-VAR_1);
  VAR_15[0] = '/';
  FUNC_15(VAR_15+1, VAR_11->prepath, VAR_16);
 } else {
  VAR_15 = FUNC_13("", VAR_4);
  if (VAR_15 == ((void*)0))
   return FUNC_3(-VAR_1);
 }

 VAR_10 = FUNC_10();
 if (VAR_14->unix_ext) {
  VAR_13 = FUNC_6(&VAR_12, VAR_15, VAR_9, VAR_10);

  if (VAR_13 != -VAR_2)
   goto iget_no_retry;
  FUNC_4(VAR_6, "server does not support POSIX extensions");
  VAR_14->unix_ext = 0;
 }

 FUNC_8(VAR_15, FUNC_0(VAR_11));
 VAR_13 = FUNC_5(&VAR_12, VAR_15, ((void*)0), VAR_9, VAR_10, ((void*)0));

iget_no_retry:
 if (!VAR_12) {
  VAR_12 = FUNC_3(VAR_13);
  goto out;
 }






 if (VAR_13 && VAR_14->pipe) {
  FUNC_4(VAR_3, "ipc connection - fake read inode\n");
  FUNC_17(&VAR_12->i_lock);
  VAR_12->i_mode |= VAR_5;
  FUNC_16(VAR_12, 2);
  VAR_12->i_op = &VAR_7;
  VAR_12->i_fop = &VAR_8;
  VAR_12->i_uid = VAR_11->mnt_uid;
  VAR_12->i_gid = VAR_11->mnt_gid;
  FUNC_18(&VAR_12->i_lock);
 } else if (VAR_13) {
  FUNC_11(VAR_12);
  VAR_12 = FUNC_3(VAR_13);
 }

out:
 FUNC_12(VAR_15);
 FUNC_9(VAR_10);
 return VAR_12;
}
