
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_ctime; int ia_mtime; int ia_atime; int ia_gid; int ia_uid; int ia_mode; } ;
struct hostfs_iattr {scalar_t__ ia_size; int ia_valid; void* ia_ctime; void* ia_mtime; void* ia_atime; int ia_gid; int ia_uid; int ia_mode; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int fd; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_19 ;
 struct inode* FUNC_2 (struct dentry*) ;
 char* FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int VAR_20 ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (char*,struct hostfs_iattr*,int) ;
 int FUNC_9 (struct inode*,struct iattr*) ;
 int FUNC_10 (struct dentry*,struct iattr*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_21, struct iattr *VAR_22)
{
 struct inode *VAR_23 = FUNC_2(VAR_21);
 struct hostfs_iattr VAR_24;
 char *VAR_25;
 int VAR_26;

 int VAR_27 = FUNC_0(VAR_23)->fd;

 VAR_26 = FUNC_10(VAR_21, VAR_22);
 if (VAR_26)
  return VAR_26;

 if (VAR_19)
  VAR_22->ia_valid &= ~VAR_7;

 VAR_24.ia_valid = 0;
 if (VAR_22->ia_valid & VAR_4) {
  VAR_24.ia_valid |= VAR_14;
  VAR_24.ia_mode = VAR_22->ia_mode;
 }
 if (VAR_22->ia_valid & VAR_8) {
  VAR_24.ia_valid |= VAR_18;
  VAR_24.ia_uid = FUNC_5(&VAR_20, VAR_22->ia_uid);
 }
 if (VAR_22->ia_valid & VAR_3) {
  VAR_24.ia_valid |= VAR_13;
  VAR_24.ia_gid = FUNC_4(&VAR_20, VAR_22->ia_gid);
 }
 if (VAR_22->ia_valid & VAR_7) {
  VAR_24.ia_valid |= VAR_17;
  VAR_24.ia_size = VAR_22->ia_size;
 }
 if (VAR_22->ia_valid & VAR_0) {
  VAR_24.ia_valid |= VAR_10;
  VAR_24.ia_atime = FUNC_11(VAR_22->ia_atime);
 }
 if (VAR_22->ia_valid & VAR_5) {
  VAR_24.ia_valid |= VAR_15;
  VAR_24.ia_mtime = FUNC_11(VAR_22->ia_mtime);
 }
 if (VAR_22->ia_valid & VAR_2) {
  VAR_24.ia_valid |= VAR_12;
  VAR_24.ia_ctime = FUNC_11(VAR_22->ia_ctime);
 }
 if (VAR_22->ia_valid & VAR_1) {
  VAR_24.ia_valid |= VAR_11;
 }
 if (VAR_22->ia_valid & VAR_6) {
  VAR_24.ia_valid |= VAR_16;
 }
 VAR_25 = FUNC_3(VAR_21);
 if (VAR_25 == ((void*)0))
  return -VAR_9;
 VAR_26 = FUNC_8(VAR_25, &VAR_24, VAR_27);
 FUNC_1(VAR_25);
 if (VAR_26)
  return VAR_26;

 if ((VAR_22->ia_valid & VAR_7) &&
     VAR_22->ia_size != FUNC_6(VAR_23))
  FUNC_12(VAR_23, VAR_22->ia_size);

 FUNC_9(VAR_23, VAR_22);
 FUNC_7(VAR_23);
 return 0;
}
