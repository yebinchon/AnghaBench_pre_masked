
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_blocks; int i_flags; int i_lock; int i_mode; int i_gid; int i_uid; int i_rdev; int i_ctime; int i_mtime; int i_atime; int i_sb; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifs_fattr {int cf_flags; int cf_bytes; int cf_eof; int cf_cifsattrs; int cf_mode; int cf_gid; int cf_uid; int cf_rdev; int cf_ctime; int cf_mtime; int cf_atime; } ;
struct cifsInodeInfo {int server_eof; int flags; scalar_t__ time; int cifsAttrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct inode*,struct cifs_fattr*) ;
 int FUNC_3 (struct inode*,struct cifs_fattr*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct inode*,int ) ;
 scalar_t__ FUNC_7 (struct cifsInodeInfo*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;

void
FUNC_12(struct inode *VAR_8, struct cifs_fattr *VAR_9)
{
 struct cifsInodeInfo *VAR_10 = FUNC_0(VAR_8);
 struct cifs_sb_info *VAR_11 = FUNC_1(VAR_8->i_sb);

 FUNC_3(VAR_8, VAR_9);

 FUNC_9(&VAR_8->i_lock);

 if (FUNC_11(&VAR_9->cf_atime, &VAR_9->cf_mtime))
  VAR_8->i_atime = VAR_9->cf_mtime;
 else
  VAR_8->i_atime = VAR_9->cf_atime;
 VAR_8->i_mtime = VAR_9->cf_mtime;
 VAR_8->i_ctime = VAR_9->cf_ctime;
 VAR_8->i_rdev = VAR_9->cf_rdev;
 FUNC_2(VAR_8, VAR_9);
 VAR_8->i_uid = VAR_9->cf_uid;
 VAR_8->i_gid = VAR_9->cf_gid;


 if (VAR_8->i_state & VAR_5 ||
     !(VAR_11->mnt_cifs_flags & VAR_4))
  VAR_8->i_mode = VAR_9->cf_mode;

 VAR_10->cifsAttrs = VAR_9->cf_cifsattrs;

 if (VAR_9->cf_flags & VAR_2)
  VAR_10->time = 0;
 else
  VAR_10->time = VAR_7;

 if (VAR_9->cf_flags & VAR_0)
  FUNC_8(VAR_3, &VAR_10->flags);
 else
  FUNC_5(VAR_3, &VAR_10->flags);

 VAR_10->server_eof = VAR_9->cf_eof;




 if (FUNC_7(VAR_10, VAR_9->cf_eof)) {
  FUNC_6(VAR_8, VAR_9->cf_eof);






  VAR_8->i_blocks = (512 - 1 + VAR_9->cf_bytes) >> 9;
 }
 FUNC_10(&VAR_8->i_lock);

 if (VAR_9->cf_flags & VAR_1)
  VAR_8->i_flags |= VAR_6;
 if (VAR_8->i_state & VAR_5)
  FUNC_4(VAR_8);
}
