
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int s_flags; } ;
struct stat_data {int dummy; } ;
struct reiserfs_transaction_handle {int displace_new_blocks; scalar_t__ t_trans_id; } ;
struct reiserfs_security_handle {scalar_t__ name; } ;
struct reiserfs_iget_args {void* objectid; void* dirid; } ;
struct TYPE_9__ {scalar_t__ k_objectid; scalar_t__ k_dir_id; } ;
struct item_head {TYPE_3__ ih_key; } ;
struct inode {int i_flags; struct super_block* i_sb; int i_size; scalar_t__ i_bytes; scalar_t__ i_blocks; int i_ctime; int i_atime; int i_mtime; void* i_generation; void* i_ino; int i_nlink; } ;
struct dentry {int dummy; } ;
struct cpu_key {int dummy; } ;
typedef int loff_t ;
struct TYPE_11__ {int i_first_direct_byte; int i_attrs; scalar_t__ new_packing_locality; int * i_jl; scalar_t__ i_trans_id; scalar_t__ i_prealloc_count; scalar_t__ i_prealloc_block; scalar_t__ i_flags; int i_prealloc_list; } ;
struct TYPE_10__ {TYPE_1__* s_rs; } ;
struct TYPE_8__ {scalar_t__ k_objectid; } ;
struct TYPE_7__ {scalar_t__ s_inode_generation; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__* FUNC_5 (struct inode*) ;
 int VAR_11 ;
 TYPE_4__* FUNC_6 (struct super_block*) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_10 (struct cpu_key*,int ,void*,void*,int ,int ,int) ;
 int FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 void* VAR_22 ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct stat_data*,struct inode*,int ) ;
 int FUNC_20 (struct stat_data*,struct inode*,int ) ;
 int FUNC_21 (struct inode*,void*,int ,struct reiserfs_iget_args*) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (struct reiserfs_transaction_handle*) ;
 void* FUNC_24 (scalar_t__) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct item_head*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_27 (TYPE_2__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_28 (struct super_block*) ;
 int VAR_23 ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (struct inode*) ;
 int VAR_24 ;
 int FUNC_32 (struct reiserfs_transaction_handle*) ;
 int FUNC_33 (struct reiserfs_transaction_handle*,struct inode*,struct dentry*,struct inode*) ;
 int FUNC_34 (struct inode*) ;
 int FUNC_35 (struct reiserfs_transaction_handle*,int *,struct cpu_key*,struct item_head*,struct inode*,char*) ;
 int FUNC_36 (struct reiserfs_transaction_handle*,struct inode*,struct item_head*,int *,struct inode*) ;
 int FUNC_37 (struct reiserfs_transaction_handle*,struct inode*,struct item_head*,int *,char const*,int ) ;
 scalar_t__ FUNC_38 (struct super_block*) ;
 int FUNC_39 (struct reiserfs_transaction_handle*,struct inode*,struct reiserfs_security_handle*) ;
 int FUNC_40 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_41 (struct super_block*,char*,char*) ;
 int FUNC_42 (struct super_block*) ;
 int FUNC_43 (struct super_block*,int) ;
 int FUNC_44 (struct super_block*) ;
 int FUNC_45 (struct super_block*) ;
 int FUNC_46 (int,struct inode*) ;
 int FUNC_47 (struct super_block*,struct cpu_key*,int *) ;
 int FUNC_48 (struct inode*,int ) ;
 int FUNC_49 (struct inode*,int ) ;
 int FUNC_50 (struct inode*,int) ;
 int FUNC_51 (struct inode*) ;

int FUNC_52(struct reiserfs_transaction_handle *VAR_25,
         struct inode *VAR_26, umode_t VAR_27, const char *VAR_28,


         loff_t VAR_29, struct dentry *VAR_30,
         struct inode *VAR_31,
         struct reiserfs_security_handle *VAR_32)
{
 struct super_block *VAR_33 = VAR_26->i_sb;
 struct reiserfs_iget_args VAR_34;
 FUNC_1(VAR_23);
 struct cpu_key VAR_35;
 struct item_head VAR_36;
 struct stat_data VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40;

 FUNC_0(!VAR_25->t_trans_id);

 VAR_40 = FUNC_45(VAR_33);
 VAR_39 = FUNC_14(VAR_31);
 FUNC_43(VAR_33, VAR_40);
 if (VAR_39)
  goto out_end_trans;
 if (!VAR_26->i_nlink) {
  VAR_39 = -VAR_4;
  goto out_bad_inode;
 }


 VAR_36.ih_key.k_dir_id = FUNC_31(VAR_26);
 VAR_36.ih_key.k_objectid = FUNC_12(FUNC_32(VAR_25));
 if (!VAR_36.ih_key.k_objectid) {
  VAR_39 = -VAR_3;
  goto out_bad_inode;
 }
 VAR_34.objectid = VAR_31->i_ino = FUNC_24(VAR_36.ih_key.k_objectid);
 if (FUNC_28(VAR_33))
  FUNC_26(&VAR_36, ((void*)0), VAR_7, VAR_13,
      VAR_20, VAR_15, VAR_10);
 else
  FUNC_26(&VAR_36, ((void*)0), VAR_8, VAR_13,
      VAR_20, VAR_14, VAR_10);
 FUNC_27(FUNC_3(VAR_31), &VAR_36.ih_key, VAR_9);
 VAR_34.dirid = FUNC_24(VAR_36.ih_key.k_dir_id);

 VAR_40 = FUNC_45(VAR_31->i_sb);
 VAR_39 = FUNC_21(VAR_31, VAR_34.objectid,
        VAR_24, &VAR_34);
 FUNC_43(VAR_31->i_sb, VAR_40);
 if (VAR_39) {
  VAR_39 = -VAR_1;
  goto out_bad_inode;
 }

 if (FUNC_28(VAR_33))






  VAR_31->i_generation = FUNC_24(FUNC_3(VAR_26)->k_objectid);
 else




  VAR_31->i_generation = ++VAR_22;



 FUNC_50(VAR_31, (FUNC_8(VAR_27) ? 2 : 1));



 VAR_31->i_mtime = VAR_31->i_atime = VAR_31->i_ctime = FUNC_13(VAR_31);
 VAR_31->i_size = VAR_29;
 VAR_31->i_blocks = 0;
 VAR_31->i_bytes = 0;
 FUNC_5(VAR_31)->i_first_direct_byte = FUNC_9(VAR_27) ? 1 :
     VAR_21 ;

 FUNC_2(&FUNC_5(VAR_31)->i_prealloc_list);
 FUNC_5(VAR_31)->i_flags = 0;
 FUNC_5(VAR_31)->i_prealloc_block = 0;
 FUNC_5(VAR_31)->i_prealloc_count = 0;
 FUNC_5(VAR_31)->i_trans_id = 0;
 FUNC_5(VAR_31)->i_jl = ((void*)0);
 FUNC_5(VAR_31)->i_attrs =
     FUNC_5(VAR_26)->i_attrs & VAR_11;
 FUNC_46(FUNC_5(VAR_31)->i_attrs, VAR_31);
 FUNC_34(VAR_31);


 FUNC_10(&VAR_35, VAR_8, FUNC_24(VAR_36.ih_key.k_dir_id),
        FUNC_24(VAR_36.ih_key.k_objectid), VAR_13,
        VAR_20, 3 );


 VAR_38 = FUNC_47(VAR_33, &VAR_35, &VAR_23);
 if (VAR_38 == VAR_5) {
  VAR_39 = -VAR_2;
  goto out_bad_inode;
 }
 if (VAR_38 == VAR_6) {
  FUNC_29(&VAR_23);
  VAR_39 = -VAR_0;
  goto out_bad_inode;
 }
 if (FUNC_28(VAR_33)) {

  if (FUNC_18(VAR_31) & ~0xffff || FUNC_17(VAR_31) & ~0xffff) {
   FUNC_29(&VAR_23);
   VAR_39 = -VAR_1;
   goto out_bad_inode;
  }
  FUNC_20(&VAR_37, VAR_31, VAR_31->i_size);
 } else {
  FUNC_19(&VAR_37, VAR_31, VAR_31->i_size);
 }





 if (FUNC_28(VAR_33) || FUNC_8(VAR_27) || FUNC_9(VAR_27))
  FUNC_48(VAR_31, VAR_7);
 else
  FUNC_48(VAR_31, VAR_8);
 if (FUNC_28(VAR_33))
  FUNC_49(VAR_31, VAR_16);
 else
  FUNC_49(VAR_31, VAR_17);






 VAR_38 =
     FUNC_35(VAR_25, &VAR_23, &VAR_35, &VAR_36, VAR_31,
     (char *)(&VAR_37));
 if (VAR_38) {
  VAR_39 = VAR_38;
  FUNC_30(&VAR_23);
  goto out_bad_inode;
 }




 if (FUNC_8(VAR_27)) {

  VAR_38 =
      FUNC_36(VAR_25, VAR_31, &VAR_36, &VAR_23, VAR_26);
 }

 if (FUNC_9(VAR_27)) {

  if (!FUNC_28(VAR_33))
   VAR_29 = FUNC_7(VAR_29);
  VAR_38 =
      FUNC_37(VAR_25, VAR_31, &VAR_36, &VAR_23, VAR_28,
      VAR_29);
 }
 if (VAR_38) {
  VAR_39 = VAR_38;
  FUNC_30(&VAR_23);
  FUNC_23(VAR_25);
  goto out_inserted_sd;
 }

 if (FUNC_38(VAR_31->i_sb)) {
  FUNC_44(VAR_31->i_sb);
  VAR_38 = FUNC_33(VAR_25, VAR_26, VAR_30, VAR_31);
  FUNC_42(VAR_31->i_sb);
  if (VAR_38) {
   VAR_39 = VAR_38;
   FUNC_30(&VAR_23);
   FUNC_23(VAR_25);
   goto out_inserted_sd;
  }
 } else if (VAR_31->i_sb->s_flags & VAR_12) {
  FUNC_41(VAR_31->i_sb, "jdm-13090",
     "ACLs aren't enabled in the fs, "
     "but vfs thinks they are!");
 } else if (FUNC_4(VAR_26))
  VAR_31->i_flags |= VAR_19;

 if (VAR_32->name) {
  FUNC_44(VAR_31->i_sb);
  VAR_38 = FUNC_39(VAR_25, VAR_31, VAR_32);
  FUNC_42(VAR_31->i_sb);
  if (VAR_38) {
   VAR_39 = VAR_38;
   FUNC_30(&VAR_23);
   VAR_38 = FUNC_23(VAR_25);
   if (VAR_38)
    VAR_39 = VAR_38;
   goto out_inserted_sd;
  }
 }

 FUNC_40(VAR_25, VAR_31);
 FUNC_30(&VAR_23);

 return 0;

out_bad_inode:

 FUNC_3(VAR_31)->k_objectid = 0;


 VAR_40 = FUNC_45(VAR_31->i_sb);
 FUNC_16(VAR_31);
 FUNC_43(VAR_31->i_sb, VAR_40);

out_end_trans:
 FUNC_23(VAR_25);




 VAR_40 = FUNC_45(VAR_31->i_sb);
 FUNC_15(VAR_31);
 FUNC_43(VAR_31->i_sb, VAR_40);
 VAR_31->i_flags |= VAR_18;
 FUNC_25(VAR_31);

out_inserted_sd:
 FUNC_11(VAR_31);
 VAR_25->t_trans_id = 0;
 FUNC_51(VAR_31);
 FUNC_22(VAR_31);
 return VAR_39;
}
