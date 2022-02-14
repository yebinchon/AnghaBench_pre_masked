
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct path {struct dentry* dentry; } ;
struct kstat {int attributes_mask; int attributes; int gid; int uid; int btime; int result_mask; int ino; int blksize; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct dentry {int d_sb; } ;
struct cifs_tcon {int unix_ext; } ;
struct cifs_sb_info {int mnt_cifs_flags; int bsize; } ;
struct TYPE_6__ {int cifsAttrs; scalar_t__ createtime; int uniqueid; } ;
struct TYPE_5__ {scalar_t__ nrpages; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 struct cifs_tcon* FUNC_5 (struct cifs_sb_info*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct inode* FUNC_9 (struct dentry*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct inode*,struct kstat*) ;
 int FUNC_12 (TYPE_1__*,int) ;

int FUNC_13(const struct path *VAR_9, struct kstat *VAR_10,
   u32 VAR_11, unsigned int VAR_12)
{
 struct dentry *VAR_13 = VAR_9->dentry;
 struct cifs_sb_info *VAR_14 = FUNC_2(VAR_13->d_sb);
 struct cifs_tcon *VAR_15 = FUNC_5(VAR_14);
 struct inode *VAR_16 = FUNC_9(VAR_13);
 int VAR_17;





 if (!FUNC_0(FUNC_1(VAR_16)) && VAR_16->i_mapping &&
     VAR_16->i_mapping->nrpages != 0) {
  VAR_17 = FUNC_10(VAR_16->i_mapping);
  if (VAR_17) {
   FUNC_12(VAR_16->i_mapping, VAR_17);
   return VAR_17;
  }
 }

 VAR_17 = FUNC_4(VAR_13);
 if (VAR_17)
  return VAR_17;

 FUNC_11(VAR_16, VAR_10);
 VAR_10->blksize = VAR_14->bsize;
 VAR_10->ino = FUNC_1(VAR_16)->uniqueid;


 if (FUNC_1(VAR_16)->createtime) {
  VAR_10->result_mask |= VAR_8;
  VAR_10->btime =
        FUNC_3(FUNC_6(FUNC_1(VAR_16)->createtime));
 }

 VAR_10->attributes_mask |= (VAR_6 | VAR_7);
 if (FUNC_1(VAR_16)->cifsAttrs & VAR_4)
  VAR_10->attributes |= VAR_6;
 if (FUNC_1(VAR_16)->cifsAttrs & VAR_5)
  VAR_10->attributes |= VAR_7;






 if ((VAR_14->mnt_cifs_flags & VAR_1) &&
     !(VAR_14->mnt_cifs_flags & VAR_0) &&
     !VAR_15->unix_ext) {
  if (!(VAR_14->mnt_cifs_flags & VAR_3))
   VAR_10->uid = FUNC_8();
  if (!(VAR_14->mnt_cifs_flags & VAR_2))
   VAR_10->gid = FUNC_7();
 }
 return VAR_17;
}
