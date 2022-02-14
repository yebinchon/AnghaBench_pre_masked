
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_fattr {int valid; int ctime; int mtime; int atime; int gencount; } ;
struct inode {int i_mode; int i_lock; void* i_ctime; void* i_mtime; void* i_atime; int i_gid; int i_uid; } ;
struct iattr {int ia_valid; int ia_mode; void* ia_mtime; void* ia_atime; int ia_gid; int ia_uid; int ia_size; } ;
struct TYPE_2__ {int cache_validity; int attr_gencount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct nfs_fattr*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*,struct nfs_fattr*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int ) ;

void FUNC_9(struct inode *VAR_19, struct iattr *VAR_20,
  struct nfs_fattr *VAR_21)
{

 FUNC_1(VAR_21);

 FUNC_6(&VAR_19->i_lock);
 FUNC_0(VAR_19)->attr_gencount = VAR_21->gencount;
 if ((VAR_20->ia_valid & VAR_6) != 0) {
  FUNC_3(VAR_19, VAR_17);
  FUNC_2(VAR_19, VAR_8);
  FUNC_5(VAR_19, VAR_20->ia_size);
 }
 if ((VAR_20->ia_valid & (VAR_3|VAR_7|VAR_2)) != 0) {
  FUNC_0(VAR_19)->cache_validity &= ~VAR_16;
  if ((VAR_20->ia_valid & VAR_3) != 0) {
   int VAR_22 = VAR_20->ia_mode & VAR_18;
   VAR_22 |= VAR_19->i_mode & ~VAR_18;
   VAR_19->i_mode = VAR_22;
  }
  if ((VAR_20->ia_valid & VAR_7) != 0)
   VAR_19->i_uid = VAR_20->ia_uid;
  if ((VAR_20->ia_valid & VAR_2) != 0)
   VAR_19->i_gid = VAR_20->ia_gid;
  if (VAR_21->valid & VAR_10)
   VAR_19->i_ctime = FUNC_8(VAR_21->ctime);
  else
   FUNC_3(VAR_19, VAR_15
     | VAR_16);
  FUNC_3(VAR_19, VAR_12
    | VAR_13);
 }
 if (VAR_20->ia_valid & (VAR_1|VAR_0)) {
  FUNC_0(VAR_19)->cache_validity &= ~(VAR_14
    | VAR_16);
  if (VAR_21->valid & VAR_9)
   VAR_19->i_atime = FUNC_8(VAR_21->atime);
  else if (VAR_20->ia_valid & VAR_1)
   VAR_19->i_atime = VAR_20->ia_atime;
  else
   FUNC_3(VAR_19, VAR_14);

  if (VAR_21->valid & VAR_10)
   VAR_19->i_ctime = FUNC_8(VAR_21->ctime);
  else
   FUNC_3(VAR_19, VAR_15
     | VAR_16);
 }
 if (VAR_20->ia_valid & (VAR_5|VAR_4)) {
  FUNC_0(VAR_19)->cache_validity &= ~(VAR_17
    | VAR_16);
  if (VAR_21->valid & VAR_11)
   VAR_19->i_mtime = FUNC_8(VAR_21->mtime);
  else if (VAR_20->ia_valid & VAR_5)
   VAR_19->i_mtime = VAR_20->ia_mtime;
  else
   FUNC_3(VAR_19, VAR_17);

  if (VAR_21->valid & VAR_10)
   VAR_19->i_ctime = FUNC_8(VAR_21->ctime);
  else
   FUNC_3(VAR_19, VAR_15
     | VAR_16);
 }
 if (VAR_21->valid)
  FUNC_4(VAR_19, VAR_21);
 FUNC_7(&VAR_19->i_lock);
}
