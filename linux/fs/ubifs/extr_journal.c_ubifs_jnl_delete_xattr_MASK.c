
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
typedef int u8 ;
struct ubifs_inode {int data_len; int ui_lock; int ui_size; int synced_i_size; int ui_mutex; } ;
struct ubifs_ino_node {int dummy; } ;
struct ubifs_info {TYPE_2__* jheads; } ;
struct TYPE_3__ {int node_type; } ;
struct ubifs_dent_node {char* name; int nlen; int type; scalar_t__ inum; int key; TYPE_1__ ch; } ;
struct inode {scalar_t__ i_nlink; int i_ino; int i_mode; } ;
struct fscrypt_name {int dummy; } ;
struct TYPE_4__ {int wbuf; } ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct ubifs_info*) ;
 size_t FUNC_4 (struct fscrypt_name const*) ;
 int FUNC_5 (struct fscrypt_name const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_8 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_10 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_11 (int,int ) ;
 int FUNC_12 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_13 (struct ubifs_info*,size_t,int) ;
 int FUNC_14 (struct ubifs_info*,struct ubifs_inode*) ;
 int FUNC_15 (char*,int ,size_t) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ubifs_info*,struct ubifs_ino_node*,struct inode const*,int) ;
 int FUNC_18 (struct ubifs_info*,size_t) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct ubifs_info*,int) ;
 int FUNC_22 (struct ubifs_info*,int,int) ;
 int FUNC_23 (struct ubifs_info*,int) ;
 int FUNC_24 (struct ubifs_info*) ;
 struct ubifs_inode* FUNC_25 (struct inode const*) ;
 int FUNC_26 (struct ubifs_info*,struct ubifs_ino_node*,int *) ;
 int FUNC_27 (struct ubifs_info*,struct ubifs_dent_node*,int,int ) ;
 int FUNC_28 (struct ubifs_info*,int) ;
 int FUNC_29 (struct ubifs_info*,union ubifs_key*,int,int,int,int *) ;
 int FUNC_30 (struct ubifs_info*,union ubifs_key*,struct fscrypt_name const*) ;
 int FUNC_31 (struct ubifs_info*,union ubifs_key*,union ubifs_key*) ;
 int FUNC_32 (int *,int ) ;
 int FUNC_33 (struct ubifs_info*,size_t,struct ubifs_dent_node*,int,int*,int*,int) ;
 int FUNC_34 (struct ubifs_info*,union ubifs_key*,int ,struct fscrypt_name const*) ;
 int FUNC_35 (struct ubifs_dent_node*) ;

int FUNC_36(struct ubifs_info *VAR_7, const struct inode *VAR_8,
      const struct inode *VAR_9,
      const struct fscrypt_name *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 struct ubifs_dent_node *VAR_19;
 struct ubifs_ino_node *VAR_20;
 union ubifs_key VAR_21, VAR_22, VAR_23;
 int VAR_24 = FUNC_1(VAR_8);
 struct ubifs_inode *VAR_25 = FUNC_25(VAR_8);
 u8 VAR_26[VAR_4];

 FUNC_23(VAR_7, VAR_9->i_nlink == 0);
 FUNC_23(VAR_7, FUNC_16(&VAR_25->ui_mutex));





 VAR_12 = VAR_3 + FUNC_4(VAR_10) + 1;
 VAR_17 = FUNC_0(VAR_12, 8);
 VAR_13 = VAR_25->data_len + VAR_5;
 VAR_14 = VAR_17 + VAR_5 + FUNC_0(VAR_13, 8);

 VAR_18 = VAR_14 + FUNC_24(VAR_7);

 VAR_19 = FUNC_11(VAR_18, VAR_2);
 if (!VAR_19)
  return -VAR_1;


 VAR_11 = FUNC_13(VAR_7, VAR_0, VAR_18);
 if (VAR_11) {
  FUNC_10(VAR_19);
  return VAR_11;
 }

 VAR_19->ch.node_type = VAR_6;
 FUNC_34(VAR_7, &VAR_21, VAR_8->i_ino, VAR_10);
 FUNC_9(VAR_7, &VAR_21, VAR_19->key);
 VAR_19->inum = 0;
 VAR_19->type = FUNC_6(VAR_9->i_mode);
 VAR_19->nlen = FUNC_2(FUNC_4(VAR_10));
 FUNC_15(VAR_19->name, FUNC_5(VAR_10), FUNC_4(VAR_10));
 VAR_19->name[FUNC_4(VAR_10)] = '\0';
 FUNC_35(VAR_19);
 FUNC_27(VAR_7, VAR_19, VAR_12, 0);

 VAR_20 = (void *)VAR_19 + VAR_17;
 FUNC_17(VAR_7, VAR_20, VAR_9, 0);
 VAR_20 = (void *)VAR_20 + VAR_5;
 FUNC_17(VAR_7, VAR_20, VAR_8, 1);
 VAR_11 = FUNC_26(VAR_7, VAR_20, VAR_26);
 if (VAR_11)
  goto out_release;

 VAR_11 = FUNC_33(VAR_7, VAR_0, VAR_19, VAR_18, &VAR_15, &VAR_16, VAR_24);
 if (!VAR_24 && !VAR_11)
  FUNC_32(&VAR_7->jheads[VAR_0].wbuf, VAR_8->i_ino);
 FUNC_18(VAR_7, VAR_0);

 FUNC_21(VAR_7, VAR_15);
 FUNC_10(VAR_19);
 if (VAR_11)
  goto out_ro;


 VAR_11 = FUNC_30(VAR_7, &VAR_21, VAR_10);
 if (VAR_11)
  goto out_ro;
 VAR_11 = FUNC_22(VAR_7, VAR_15, VAR_12);
 if (VAR_11)
  goto out_ro;





 FUNC_12(VAR_7, &VAR_22, VAR_9->i_ino);
 FUNC_7(VAR_7, &VAR_23, VAR_9->i_ino);
 VAR_11 = FUNC_31(VAR_7, &VAR_22, &VAR_23);
 if (VAR_11)
  goto out_ro;
 VAR_11 = FUNC_22(VAR_7, VAR_15, VAR_5);
 if (VAR_11)
  goto out_ro;


 FUNC_8(VAR_7, &VAR_22, VAR_8->i_ino);
 VAR_11 = FUNC_29(VAR_7, &VAR_22, VAR_15, VAR_16 + VAR_14 - VAR_13, VAR_13, VAR_26);
 if (VAR_11)
  goto out_ro;

 FUNC_3(VAR_7);
 FUNC_19(&VAR_25->ui_lock);
 VAR_25->synced_i_size = VAR_25->ui_size;
 FUNC_20(&VAR_25->ui_lock);
 FUNC_14(VAR_7, VAR_25);
 return 0;

out_release:
 FUNC_10(VAR_19);
 FUNC_18(VAR_7, VAR_0);
out_ro:
 FUNC_28(VAR_7, VAR_11);
 FUNC_3(VAR_7);
 return VAR_11;
}
