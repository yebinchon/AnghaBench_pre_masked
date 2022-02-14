
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int valid; int pre_size; void* pre_mtime; void* pre_ctime; int pre_change_attr; } ;
struct inode {int i_mtime; int i_ctime; } ;


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
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct nfs_fattr*) ;
 int FUNC_3 (struct inode*,struct nfs_fattr*,int) ;
 void* FUNC_4 (int ) ;

int FUNC_5(struct inode *VAR_12, struct nfs_fattr *VAR_13)
{
 int VAR_14;


 if ((VAR_13->valid & VAR_0) == 0 ||
   !FUNC_2(VAR_12, VAR_13)) {
  VAR_13->valid &= ~(VAR_4
    | VAR_7
    | VAR_6
    | VAR_5);
  goto out_noforce;
 }
 if ((VAR_13->valid & VAR_1) != 0 &&
   (VAR_13->valid & VAR_4) == 0) {
  VAR_13->pre_change_attr = FUNC_1(VAR_12);
  VAR_13->valid |= VAR_4;
 }
 if ((VAR_13->valid & VAR_2) != 0 &&
   (VAR_13->valid & VAR_5) == 0) {
  VAR_13->pre_ctime = FUNC_4(VAR_12->i_ctime);
  VAR_13->valid |= VAR_5;
 }
 if ((VAR_13->valid & VAR_3) != 0 &&
   (VAR_13->valid & VAR_6) == 0) {
  VAR_13->pre_mtime = FUNC_4(VAR_12->i_mtime);
  VAR_13->valid |= VAR_6;
 }
 if ((VAR_13->valid & VAR_8) != 0 &&
   (VAR_13->valid & VAR_7) == 0) {
  VAR_13->pre_size = FUNC_0(VAR_12);
  VAR_13->valid |= VAR_7;
 }
out_noforce:
 VAR_14 = FUNC_3(VAR_12, VAR_13,
   VAR_9
   | VAR_10
   | VAR_11);
 return VAR_14;
}
