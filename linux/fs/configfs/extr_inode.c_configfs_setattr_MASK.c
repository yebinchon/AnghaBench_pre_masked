
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_gid; } ;
struct iattr {unsigned int ia_valid; int ia_mode; void* ia_ctime; void* ia_mtime; void* ia_atime; int ia_gid; int ia_uid; } ;
struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int s_mode; struct iattr* s_iattr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;
 struct iattr* FUNC_4 (int,int ) ;
 int FUNC_5 (struct dentry*,struct iattr*) ;
 void* FUNC_6 (void*,struct inode*) ;

int FUNC_7(struct dentry * VAR_13, struct iattr * VAR_14)
{
 struct inode * VAR_15 = FUNC_2(VAR_13);
 struct configfs_dirent * VAR_16 = VAR_13->d_fsdata;
 struct iattr * VAR_17;
 unsigned int VAR_18 = VAR_14->ia_valid;
 int VAR_19;

 if (!VAR_16)
  return -VAR_7;

 VAR_17 = VAR_16->s_iattr;
 if (!VAR_17) {

  VAR_17 = FUNC_4(sizeof(struct iattr), VAR_9);
  if (!VAR_17)
   return -VAR_8;

  VAR_17->ia_mode = VAR_16->s_mode;
  VAR_17->ia_uid = VAR_11;
  VAR_17->ia_gid = VAR_10;
  VAR_17->ia_atime = VAR_17->ia_mtime =
   VAR_17->ia_ctime = FUNC_1(VAR_15);
  VAR_16->s_iattr = VAR_17;
 }


 VAR_19 = FUNC_5(VAR_13, VAR_14);
 if (VAR_19)
  return VAR_19;

 if (VAR_18 & VAR_5)
  VAR_17->ia_uid = VAR_14->ia_uid;
 if (VAR_18 & VAR_2)
  VAR_17->ia_gid = VAR_14->ia_gid;
 if (VAR_18 & VAR_0)
  VAR_17->ia_atime = FUNC_6(VAR_14->ia_atime,
            VAR_15);
 if (VAR_18 & VAR_4)
  VAR_17->ia_mtime = FUNC_6(VAR_14->ia_mtime,
            VAR_15);
 if (VAR_18 & VAR_1)
  VAR_17->ia_ctime = FUNC_6(VAR_14->ia_ctime,
            VAR_15);
 if (VAR_18 & VAR_3) {
  umode_t VAR_20 = VAR_14->ia_mode;

  if (!FUNC_3(VAR_15->i_gid) && !FUNC_0(VAR_6))
   VAR_20 &= ~VAR_12;
  VAR_17->ia_mode = VAR_16->s_mode = VAR_20;
 }

 return VAR_19;
}
