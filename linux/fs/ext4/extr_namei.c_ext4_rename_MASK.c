
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct inode {scalar_t__ i_nlink; scalar_t__ i_ino; void* i_mtime; void* i_ctime; int i_mode; int i_sb; } ;
struct ext4_renament {struct inode* bh; struct inode* dir_bh; struct inode* inode; struct inode* dir; struct dentry* dentry; TYPE_1__* de; int inlined; } ;
struct dentry {int d_name; struct inode* d_inode; } ;
typedef struct inode handle_t ;
struct TYPE_4__ {int i_projid; } ;
struct TYPE_3__ {int file_type; int inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int VAR_10 ;
 int FUNC_6 (struct inode*) ;
 unsigned int VAR_11 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 void* FUNC_10 (struct inode*) ;
 struct inode* FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,struct dentry*,struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,struct inode*) ;
 int FUNC_17 (struct inode*) ;
 void* FUNC_18 (struct inode*,int *,TYPE_1__**,int *) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*,struct inode*) ;
 struct inode* FUNC_21 (struct inode*,int ,int) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (struct inode*,struct inode*) ;
 int FUNC_24 (struct inode*,struct inode*) ;
 int FUNC_25 (struct inode*,struct ext4_renament*,int) ;
 int FUNC_26 (struct inode*,struct ext4_renament*,scalar_t__) ;
 int FUNC_27 (struct inode*,struct ext4_renament*) ;
 int FUNC_28 (struct inode*,struct ext4_renament*,scalar_t__,int ) ;
 scalar_t__ FUNC_29 (struct inode*,int ) ;
 int FUNC_30 (struct inode*) ;
 struct inode* FUNC_31 (struct ext4_renament*,int,struct inode**) ;
 int FUNC_32 (struct inode*) ;
 scalar_t__ FUNC_33 (int ) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int ,int ) ;
 int FUNC_36 (struct inode*) ;

__attribute__((used)) static int FUNC_37(struct inode *VAR_12, struct dentry *VAR_13,
         struct inode *VAR_14, struct dentry *VAR_15,
         unsigned int VAR_16)
{
 handle_t *VAR_17 = ((void*)0);
 struct ext4_renament VAR_18 = {
  .dir = VAR_12,
  .dentry = VAR_13,
  .inode = FUNC_11(VAR_13),
 };
 struct ext4_renament VAR_19 = {
  .dir = VAR_14,
  .dentry = VAR_15,
  .inode = FUNC_11(VAR_15),
 };
 int VAR_20;
 int VAR_21;
 struct inode *VAR_22 = ((void*)0);
 int VAR_23;
 u8 VAR_24;

 if (VAR_19.inode && VAR_19.inode->i_nlink == 0) {
  FUNC_2(VAR_19.inode,
     "target of rename is already freed");
  return -VAR_0;
 }

 if ((FUNC_29(VAR_14, VAR_9)) &&
     (!FUNC_34(FUNC_3(VAR_14)->i_projid,
   FUNC_3(VAR_13->d_inode)->i_projid)))
  return -VAR_4;

 VAR_21 = FUNC_12(VAR_18.dir);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_12(VAR_19.dir);
 if (VAR_21)
  return VAR_21;



 if (VAR_19.inode) {
  VAR_21 = FUNC_12(VAR_19.inode);
  if (VAR_21)
   return VAR_21;
 }

 VAR_18.bh = FUNC_18(VAR_18.dir, &VAR_18.dentry->d_name, &VAR_18.de, ((void*)0));
 if (FUNC_5(VAR_18.bh))
  return FUNC_6(VAR_18.bh);






 VAR_21 = -VAR_2;
 if (!VAR_18.bh || FUNC_33(VAR_18.de->inode) != VAR_18.inode->i_ino)
  goto end_rename;

 VAR_19.bh = FUNC_18(VAR_19.dir, &VAR_19.dentry->d_name,
     &VAR_19.de, &VAR_19.inlined);
 if (FUNC_5(VAR_19.bh)) {
  VAR_21 = FUNC_6(VAR_19.bh);
  VAR_19.bh = ((void*)0);
  goto end_rename;
 }
 if (VAR_19.bh) {
  if (!VAR_19.inode) {
   FUNC_8(VAR_19.bh);
   VAR_19.bh = ((void*)0);
  }
 }
 if (VAR_19.inode && !FUNC_35(VAR_19.dir->i_sb, VAR_10))
  FUNC_15(VAR_18.inode);

 VAR_23 = (2 * FUNC_0(VAR_18.dir->i_sb) +
     VAR_7 + 2);
 if (!(VAR_16 & VAR_11)) {
  VAR_17 = FUNC_21(VAR_18.dir, VAR_6, VAR_23);
  if (FUNC_5(VAR_17)) {
   VAR_21 = FUNC_6(VAR_17);
   VAR_17 = ((void*)0);
   goto end_rename;
  }
 } else {
  VAR_22 = FUNC_31(&VAR_18, VAR_23, &VAR_17);
  if (FUNC_5(VAR_22)) {
   VAR_21 = FUNC_6(VAR_22);
   VAR_22 = ((void*)0);
   goto end_rename;
  }
 }

 if (FUNC_4(VAR_18.dir) || FUNC_4(VAR_19.dir))
  FUNC_19(VAR_17);

 if (FUNC_7(VAR_18.inode->i_mode)) {
  if (VAR_19.inode) {
   VAR_21 = -VAR_3;
   if (!FUNC_17(VAR_19.inode))
    goto end_rename;
  } else {
   VAR_21 = -VAR_1;
   if (VAR_19.dir != VAR_18.dir && FUNC_1(VAR_19.dir))
    goto end_rename;
  }
  VAR_21 = FUNC_27(VAR_17, &VAR_18);
  if (VAR_21)
   goto end_rename;
 }







 VAR_20 = (VAR_19.dir->i_ino == VAR_18.dir->i_ino &&
   FUNC_29(VAR_19.dir, VAR_8));

 VAR_24 = VAR_18.de->file_type;
 if (VAR_22) {




  VAR_21 = FUNC_28(VAR_17, &VAR_18, VAR_22->i_ino,
         VAR_5);
  if (VAR_21)
   goto end_rename;
  FUNC_23(VAR_17, VAR_22);
 }
 if (!VAR_19.bh) {
  VAR_21 = FUNC_14(VAR_17, VAR_19.dentry, VAR_18.inode);
  if (VAR_21)
   goto end_rename;
 } else {
  VAR_21 = FUNC_28(VAR_17, &VAR_19,
         VAR_18.inode->i_ino, VAR_24);
  if (VAR_21)
   goto end_rename;
 }
 if (VAR_20)
  VAR_20 = !FUNC_29(VAR_19.dir,
           VAR_8);





 VAR_18.inode->i_ctime = FUNC_10(VAR_18.inode);
 FUNC_23(VAR_17, VAR_18.inode);

 if (!VAR_22) {



  FUNC_25(VAR_17, &VAR_18, VAR_20);
 }

 if (VAR_19.inode) {
  FUNC_16(VAR_17, VAR_19.inode);
  VAR_19.inode->i_ctime = FUNC_10(VAR_19.inode);
 }
 VAR_18.dir->i_ctime = VAR_18.dir->i_mtime = FUNC_10(VAR_18.dir);
 FUNC_30(VAR_18.dir);
 if (VAR_18.dir_bh) {
  VAR_21 = FUNC_26(VAR_17, &VAR_18, VAR_19.dir->i_ino);
  if (VAR_21)
   goto end_rename;

  FUNC_16(VAR_17, VAR_18.dir);
  if (VAR_19.inode) {



   FUNC_9(VAR_19.inode);
  } else {
   FUNC_20(VAR_17, VAR_19.dir);
   FUNC_30(VAR_19.dir);
   FUNC_23(VAR_17, VAR_19.dir);
  }
 }
 FUNC_23(VAR_17, VAR_18.dir);
 if (VAR_19.inode) {
  FUNC_23(VAR_17, VAR_19.inode);
  if (!VAR_19.inode->i_nlink)
   FUNC_24(VAR_17, VAR_19.inode);
 }
 VAR_21 = 0;

end_rename:
 FUNC_8(VAR_18.dir_bh);
 FUNC_8(VAR_18.bh);
 FUNC_8(VAR_19.bh);
 if (VAR_22) {
  if (VAR_21)
   FUNC_13(VAR_22);
  FUNC_36(VAR_22);
  FUNC_32(VAR_22);
 }
 if (VAR_17)
  FUNC_22(VAR_17);
 return VAR_21;
}
