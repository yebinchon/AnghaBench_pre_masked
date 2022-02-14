
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; TYPE_1__* mnt; } ;
struct nfs_server {int flags; int dtsize; } ;
struct kstat {int result_mask; int blksize; int ino; } ;
struct inode {int i_mode; int i_mapping; } ;
struct TYPE_4__ {int cache_validity; } ;
struct TYPE_3__ {int mnt_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 struct nfs_server* FUNC_2 (struct inode*) ;
 unsigned long FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct nfs_server*,struct inode*) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,struct kstat*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,int) ;

int FUNC_16(const struct path *VAR_18, struct kstat *VAR_19,
  u32 VAR_20, unsigned int VAR_21)
{
 struct inode *VAR_22 = FUNC_7(VAR_18->dentry);
 struct nfs_server *VAR_23 = FUNC_2(VAR_22);
 unsigned long VAR_24;
 int VAR_25 = 0;
 bool VAR_26 = VAR_21 & VAR_1;
 bool VAR_27 = 0;

 FUNC_14(VAR_22);

 if ((VAR_21 & VAR_0) && !VAR_26)
  goto out_no_update;


 if ((VAR_20 & (VAR_11|VAR_14)) &&
   FUNC_5(VAR_22->i_mode)) {
  VAR_25 = FUNC_8(VAR_22->i_mapping);
  if (VAR_25)
   goto out;
 }
 if ((VAR_18->mnt->mnt_flags & VAR_2) ||
     ((VAR_18->mnt->mnt_flags & VAR_3) && FUNC_4(VAR_22->i_mode)))
  VAR_20 &= ~VAR_9;


 if (!(VAR_20 & (VAR_13|VAR_15|VAR_9|VAR_11|
     VAR_14|VAR_17|VAR_12|
     VAR_16|VAR_10)))
  goto out_no_revalidate;


 VAR_27 |= VAR_26 || FUNC_10(VAR_22);
 VAR_24 = FUNC_3(FUNC_1(VAR_22)->cache_validity);
 VAR_27 |= VAR_24 &
  (VAR_5|VAR_6);
 if (VAR_20 & VAR_9)
  VAR_27 |= VAR_24 & VAR_4;
 if (VAR_20 & (VAR_11|VAR_14))
  VAR_27 |= VAR_24 & VAR_7;
 if (VAR_27) {

  if (!(VAR_23->flags & VAR_8))
   FUNC_13(VAR_18->dentry);
  else
   FUNC_12(VAR_18->dentry);
  VAR_25 = FUNC_6(VAR_23, VAR_22);
  if (VAR_25)
   goto out;
 } else
  FUNC_12(VAR_18->dentry);
out_no_revalidate:

 VAR_19->result_mask &= VAR_20;
out_no_update:
 FUNC_9(VAR_22, VAR_19);
 VAR_19->ino = FUNC_11(FUNC_0(VAR_22));
 if (FUNC_4(VAR_22->i_mode))
  VAR_19->blksize = FUNC_2(VAR_22)->dtsize;
out:
 FUNC_15(VAR_22, VAR_25);
 return VAR_25;
}
