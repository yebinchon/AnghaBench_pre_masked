
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct nfs_inode {scalar_t__ fileid; int read_cache_jiffies; } ;
struct nfs_fattr {int valid; scalar_t__ fileid; scalar_t__ mounted_on_fileid; int mode; scalar_t__ nlink; int time_start; int atime; int gid; int uid; int size; int ctime; int mtime; int change_attr; } ;
struct inode {int i_mode; scalar_t__ i_nlink; int i_atime; int i_gid; int i_uid; int i_ctime; int i_mtime; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ (* have_delegation ) (struct inode*,int ) ;} ;


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
 int VAR_12 ;
 int VAR_13 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct nfs_inode*) ;
 int FUNC_6 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct inode*,int ) ;
 struct timespec FUNC_9 (int ) ;
 int FUNC_10 (struct timespec*,int *) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_25, struct nfs_fattr *VAR_26)
{
 struct nfs_inode *VAR_27 = FUNC_0(VAR_25);
 loff_t VAR_28, VAR_29;
 unsigned long VAR_30 = 0;
 struct timespec VAR_31;

 if (FUNC_1(VAR_25)->have_delegation(VAR_25, VAR_1))
  return 0;

 if (!(VAR_26->valid & VAR_5)) {

  if (VAR_26->valid & VAR_8)
   return 0;

 } else if (VAR_27->fileid != VAR_26->fileid) {

  if ((VAR_26->valid & VAR_8) &&
      VAR_27->fileid == VAR_26->mounted_on_fileid)
   return 0;
  return -VAR_0;
 }
 if ((VAR_26->valid & VAR_13) && (VAR_25->i_mode & VAR_24) != (VAR_26->mode & VAR_24))
  return -VAR_0;


 if (!FUNC_5(VAR_27)) {

  if ((VAR_26->valid & VAR_3) != 0 && !FUNC_4(VAR_25, VAR_26->change_attr))
   VAR_30 |= VAR_17
    | VAR_22;

  VAR_31 = FUNC_9(VAR_25->i_mtime);
  if ((VAR_26->valid & VAR_9) && !FUNC_10(&VAR_31, &VAR_26->mtime))
   VAR_30 |= VAR_19;

  VAR_31 = FUNC_9(VAR_25->i_ctime);
  if ((VAR_26->valid & VAR_4) && !FUNC_10(&VAR_31, &VAR_26->ctime))
   VAR_30 |= VAR_18;

  if (VAR_26->valid & VAR_12) {
   VAR_28 = FUNC_3(VAR_25);
   VAR_29 = FUNC_7(VAR_26->size);
   if (VAR_28 != VAR_29)
    VAR_30 |= VAR_21
     | VAR_22;
  }
 }


 if ((VAR_26->valid & VAR_7) && (VAR_25->i_mode & VAR_23) != (VAR_26->mode & VAR_23))
  VAR_30 |= VAR_14
   | VAR_15
   | VAR_20;
 if ((VAR_26->valid & VAR_11) && !FUNC_11(VAR_25->i_uid, VAR_26->uid))
  VAR_30 |= VAR_14
   | VAR_15
   | VAR_20;
 if ((VAR_26->valid & VAR_6) && !FUNC_2(VAR_25->i_gid, VAR_26->gid))
  VAR_30 |= VAR_14
   | VAR_15
   | VAR_20;


 if ((VAR_26->valid & VAR_10) && VAR_25->i_nlink != VAR_26->nlink)
  VAR_30 |= VAR_20;

 VAR_31 = FUNC_9(VAR_25->i_atime);
 if ((VAR_26->valid & VAR_2) && !FUNC_10(&VAR_31, &VAR_26->atime))
  VAR_30 |= VAR_16;

 if (VAR_30 != 0)
  FUNC_6(VAR_25, VAR_30);

 VAR_27->read_cache_jiffies = VAR_26->time_start;
 return 0;
}
