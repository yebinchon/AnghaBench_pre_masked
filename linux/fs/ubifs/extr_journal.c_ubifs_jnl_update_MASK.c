
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
typedef int u8 ;
struct ubifs_wbuf {int dummy; } ;
struct ubifs_inode {int data_len; int ui_lock; int ui_size; int synced_i_size; int del_cmtno; int ui_mutex; } ;
struct TYPE_3__ {int node_type; } ;
struct ubifs_ino_node {char* name; int nlen; int type; int inum; int key; TYPE_1__ ch; } ;
struct ubifs_info {TYPE_2__* jheads; int cmt_no; } ;
struct ubifs_dent_node {char* name; int nlen; int type; int inum; int key; TYPE_1__ ch; } ;
struct inode {scalar_t__ i_nlink; int i_ino; int i_mode; } ;
struct fscrypt_name {int minor_hash; int hash; } ;
struct TYPE_4__ {struct ubifs_wbuf wbuf; } ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode const*) ;
 int FUNC_2 (struct inode const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key*,int ,struct fscrypt_name const*) ;
 int FUNC_6 (struct ubifs_info*,union ubifs_key*,int ,int ) ;
 int FUNC_7 (struct ubifs_info*) ;
 size_t FUNC_8 (struct fscrypt_name const*) ;
 int FUNC_9 (struct fscrypt_name const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_12 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_13 (struct ubifs_ino_node*) ;
 struct ubifs_ino_node* FUNC_14 (int,int ) ;
 int FUNC_15 (struct ubifs_info*,size_t,int) ;
 int FUNC_16 (struct ubifs_info*,struct ubifs_inode*) ;
 int FUNC_17 (char*,int ,size_t) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct ubifs_info*,struct ubifs_ino_node*,struct inode const*,int) ;
 int FUNC_20 (struct ubifs_info*,size_t) ;
 int FUNC_21 (struct ubifs_info*,struct ubifs_ino_node*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct ubifs_info*,int) ;
 int FUNC_25 (struct ubifs_info*,int,int) ;
 int FUNC_26 (struct ubifs_info*,int ) ;
 int FUNC_27 (struct ubifs_info*,int ) ;
 scalar_t__ FUNC_28 (struct ubifs_info*) ;
 scalar_t__ FUNC_29 (struct ubifs_info*) ;
 int FUNC_30 (struct ubifs_info*,int ) ;
 struct ubifs_inode* FUNC_31 (struct inode const*) ;
 int FUNC_32 (struct ubifs_info*,struct ubifs_ino_node*,int *) ;
 int FUNC_33 (struct ubifs_info*,struct ubifs_ino_node*,int,int ) ;
 int FUNC_34 (struct ubifs_info*,int) ;
 int FUNC_35 (struct ubifs_info*,union ubifs_key*,int,int,int,int *) ;
 int FUNC_36 (struct ubifs_info*,union ubifs_key*,int,int,int,int *,struct fscrypt_name const*) ;
 int FUNC_37 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_38 (struct ubifs_info*,union ubifs_key*,struct fscrypt_name const*) ;
 int FUNC_39 (struct ubifs_wbuf*,int ) ;
 int FUNC_40 (struct ubifs_info*,size_t,struct ubifs_ino_node*,int,int*,int*,int) ;
 int FUNC_41 (struct ubifs_info*,union ubifs_key*,int ,struct fscrypt_name const*) ;
 int FUNC_42 (struct ubifs_ino_node*) ;

int FUNC_43(struct ubifs_info *VAR_8, const struct inode *VAR_9,
       const struct fscrypt_name *VAR_10, const struct inode *VAR_11,
       int VAR_12, int VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23 = FUNC_1(VAR_9);
 int VAR_24 = !!(VAR_12 && VAR_11->i_nlink == 0);
 struct ubifs_inode *VAR_25 = FUNC_31(VAR_11);
 struct ubifs_inode *VAR_26 = FUNC_31(VAR_9);
 struct ubifs_dent_node *VAR_27;
 struct ubifs_ino_node *VAR_28;
 union ubifs_key VAR_29, VAR_30;
 u8 VAR_31[VAR_5];
 u8 VAR_32[VAR_5];
 u8 VAR_33[VAR_5];

 FUNC_27(VAR_8, FUNC_18(&VAR_26->ui_mutex));

 VAR_15 = VAR_4 + FUNC_8(VAR_10) + 1;
 VAR_16 = VAR_6;







 if (!VAR_24) {
  VAR_16 += VAR_25->data_len;
  VAR_23 |= FUNC_2(VAR_11);
 }

 VAR_21 = FUNC_0(VAR_15, 8);
 VAR_22 = FUNC_0(VAR_16, 8);

 VAR_17 = VAR_21 + VAR_22 + VAR_6;

 if (FUNC_29(VAR_8))
  VAR_17 += FUNC_0(VAR_26->data_len, 8) + FUNC_28(VAR_8);
 else
  VAR_17 += VAR_26->data_len;

 VAR_27 = FUNC_14(VAR_17, VAR_2);
 if (!VAR_27)
  return -VAR_1;


 VAR_14 = FUNC_15(VAR_8, VAR_0, VAR_17);
 if (VAR_14)
  goto out_free;

 if (!VAR_13) {
  VAR_27->ch.node_type = VAR_3;
  if (VAR_10->hash)
   FUNC_6(VAR_8, &VAR_29, VAR_9->i_ino, VAR_10->hash);
  else
   FUNC_5(VAR_8, &VAR_29, VAR_9->i_ino, VAR_10);
 } else {
  VAR_27->ch.node_type = VAR_7;
  FUNC_41(VAR_8, &VAR_29, VAR_9->i_ino, VAR_10);
 }

 FUNC_12(VAR_8, &VAR_29, VAR_27->key);
 VAR_27->inum = VAR_12 ? 0 : FUNC_4(VAR_11->i_ino);
 VAR_27->type = FUNC_10(VAR_11->i_mode);
 VAR_27->nlen = FUNC_3(FUNC_8(VAR_10));
 FUNC_17(VAR_27->name, FUNC_9(VAR_10), FUNC_8(VAR_10));
 VAR_27->name[FUNC_8(VAR_10)] = '\0';
 FUNC_21(VAR_8, VAR_27);

 FUNC_42(VAR_27);
 FUNC_33(VAR_8, VAR_27, VAR_15, 0);
 VAR_14 = FUNC_32(VAR_8, VAR_27, VAR_31);
 if (VAR_14)
  goto out_release;

 VAR_28 = (void *)VAR_27 + VAR_21;
 FUNC_19(VAR_8, VAR_28, VAR_11, 0);
 VAR_14 = FUNC_32(VAR_8, VAR_28, VAR_32);
 if (VAR_14)
  goto out_release;

 VAR_28 = (void *)VAR_28 + VAR_22;
 FUNC_19(VAR_8, VAR_28, VAR_9, 1);
 VAR_14 = FUNC_32(VAR_8, VAR_28, VAR_33);
 if (VAR_14)
  goto out_release;

 if (VAR_24) {
  VAR_14 = FUNC_26(VAR_8, VAR_11->i_ino);
  if (VAR_14) {
   FUNC_20(VAR_8, VAR_0);
   goto out_finish;
  }
  VAR_25->del_cmtno = VAR_8->cmt_no;
 }

 VAR_14 = FUNC_40(VAR_8, VAR_0, VAR_27, VAR_17, &VAR_18, &VAR_20, VAR_23);
 if (VAR_14)
  goto out_release;
 if (!VAR_23) {
  struct ubifs_wbuf *VAR_34 = &VAR_8->jheads[VAR_0].wbuf;

  FUNC_39(VAR_34, VAR_11->i_ino);
  FUNC_39(VAR_34, VAR_9->i_ino);
 }
 FUNC_20(VAR_8, VAR_0);
 FUNC_13(VAR_27);
 FUNC_24(VAR_8, VAR_18);

 if (VAR_12) {
  if (VAR_10->hash)
   VAR_14 = FUNC_37(VAR_8, &VAR_29, VAR_10->minor_hash);
  else
   VAR_14 = FUNC_38(VAR_8, &VAR_29, VAR_10);
  if (VAR_14)
   goto out_ro;
  VAR_14 = FUNC_25(VAR_8, VAR_18, VAR_15);
 } else
  VAR_14 = FUNC_36(VAR_8, &VAR_29, VAR_18, VAR_20, VAR_15,
           VAR_31, VAR_10);
 if (VAR_14)
  goto out_ro;







 FUNC_11(VAR_8, &VAR_30, VAR_11->i_ino);
 VAR_19 = VAR_20 + VAR_21;
 VAR_14 = FUNC_35(VAR_8, &VAR_30, VAR_18, VAR_19, VAR_16, VAR_32);
 if (VAR_14)
  goto out_ro;

 FUNC_11(VAR_8, &VAR_30, VAR_9->i_ino);
 VAR_19 += VAR_22;
 VAR_14 = FUNC_35(VAR_8, &VAR_30, VAR_18, VAR_19,
       VAR_6 + VAR_26->data_len, VAR_33);
 if (VAR_14)
  goto out_ro;

 FUNC_7(VAR_8);
 FUNC_22(&VAR_25->ui_lock);
 VAR_25->synced_i_size = VAR_25->ui_size;
 FUNC_23(&VAR_25->ui_lock);
 if (VAR_13) {
  FUNC_22(&VAR_26->ui_lock);
  VAR_26->synced_i_size = VAR_26->ui_size;
  FUNC_23(&VAR_26->ui_lock);
 }
 FUNC_16(VAR_8, VAR_25);
 FUNC_16(VAR_8, VAR_26);
 return 0;

out_finish:
 FUNC_7(VAR_8);
out_free:
 FUNC_13(VAR_27);
 return VAR_14;

out_release:
 FUNC_20(VAR_8, VAR_0);
 FUNC_13(VAR_27);
out_ro:
 FUNC_34(VAR_8, VAR_14);
 if (VAR_24)
  FUNC_30(VAR_8, VAR_11->i_ino);
 FUNC_7(VAR_8);
 return VAR_14;
}
