
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
typedef int u8 ;
struct ubifs_inode {int flags; int compr_type; } ;
struct ubifs_info {int write_reserve_mutex; TYPE_2__* jheads; struct ubifs_data_node* write_reserve_buf; } ;
struct TYPE_3__ {int node_type; } ;
struct ubifs_data_node {int compr_type; scalar_t__ compr_size; int data; int size; int key; TYPE_1__ ch; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int wbuf; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (union ubifs_key const*,char*,unsigned long,int ,int) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key const*) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,union ubifs_key const*) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key const*,int *) ;
 int FUNC_8 (struct ubifs_data_node*) ;
 struct ubifs_data_node* FUNC_9 (int,int) ;
 int FUNC_10 (struct ubifs_info*,size_t,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ubifs_info*,size_t) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,int) ;
 int FUNC_16 (struct ubifs_info*) ;
 scalar_t__ FUNC_17 (struct ubifs_info*) ;
 int FUNC_18 (struct ubifs_info*,void const*,int,int *,int*,int*) ;
 int FUNC_19 (struct inode const*) ;
 int FUNC_20 (struct inode const*,struct ubifs_data_node*,int,int*,int ) ;
 struct ubifs_inode* FUNC_21 (struct inode const*) ;
 int FUNC_22 (struct ubifs_info*,struct ubifs_data_node*,int *) ;
 int FUNC_23 (struct ubifs_info*,struct ubifs_data_node*,int,int ) ;
 int FUNC_24 (struct ubifs_info*,int) ;
 int FUNC_25 (struct ubifs_info*,union ubifs_key const*,int,int,int,int *) ;
 int FUNC_26 (int *,scalar_t__) ;
 int FUNC_27 (struct ubifs_info*,size_t,struct ubifs_data_node*,int,int*,int*,int ) ;

int FUNC_28(struct ubifs_info *VAR_11, const struct inode *VAR_12,
    const union ubifs_key *VAR_13, const void *VAR_14, int VAR_15)
{
 struct ubifs_data_node *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24 = VAR_0, VAR_25 = 1;
 int VAR_26;
 struct ubifs_inode *VAR_27 = FUNC_21(VAR_12);
 bool VAR_28 = FUNC_19(VAR_12);
 u8 VAR_29[VAR_9];

 FUNC_3(VAR_13, "ino %lu, blk %u, len %d, key ",
  (unsigned long)FUNC_6(VAR_11, VAR_13), FUNC_5(VAR_11, VAR_13), VAR_15);
 FUNC_15(VAR_11, VAR_15 <= VAR_3);

 if (VAR_28)
  VAR_24 += VAR_4;

 VAR_23 = FUNC_16(VAR_11);

 VAR_16 = FUNC_9(VAR_24 + VAR_23, VAR_2 | VAR_10);
 if (!VAR_16) {







  VAR_25 = 0;
  FUNC_11(&VAR_11->write_reserve_mutex);
  VAR_16 = VAR_11->write_reserve_buf;
 }

 VAR_16->ch.node_type = VAR_7;
 FUNC_7(VAR_11, VAR_13, &VAR_16->key);
 VAR_16->size = FUNC_2(VAR_15);

 if (!(VAR_27->flags & VAR_5))

  VAR_20 = VAR_6;
 else
  VAR_20 = VAR_27->compr_type;

 VAR_21 = VAR_22 = VAR_24 - VAR_8;
 FUNC_18(VAR_11, VAR_14, VAR_15, &VAR_16->data, &VAR_22, &VAR_20);
 FUNC_15(VAR_11, VAR_22 <= VAR_3);

 if (VAR_28) {
  VAR_17 = FUNC_20(VAR_12, VAR_16, VAR_22, &VAR_21, FUNC_5(VAR_11, VAR_13));
  if (VAR_17)
   goto out_free;

 } else {
  VAR_16->compr_size = 0;
  VAR_21 = VAR_22;
 }

 VAR_24 = VAR_8 + VAR_21;
 if (FUNC_17(VAR_11))
  VAR_26 = FUNC_0(VAR_24, 8) + VAR_23;
 else
  VAR_26 = VAR_24;

 VAR_16->compr_type = FUNC_1(VAR_20);


 VAR_17 = FUNC_10(VAR_11, VAR_1, VAR_26);
 if (VAR_17)
  goto out_free;

 FUNC_23(VAR_11, VAR_16, VAR_24, 0);
 VAR_17 = FUNC_27(VAR_11, VAR_1, VAR_16, VAR_26, &VAR_18, &VAR_19, 0);
 if (VAR_17)
  goto out_release;

 VAR_17 = FUNC_22(VAR_11, VAR_16, VAR_29);
 if (VAR_17)
  goto out_release;

 FUNC_26(&VAR_11->jheads[VAR_1].wbuf, FUNC_6(VAR_11, VAR_13));
 FUNC_13(VAR_11, VAR_1);

 FUNC_14(VAR_11, VAR_18);

 VAR_17 = FUNC_25(VAR_11, VAR_13, VAR_18, VAR_19, VAR_24, VAR_29);
 if (VAR_17)
  goto out_ro;

 FUNC_4(VAR_11);
 if (!VAR_25)
  FUNC_12(&VAR_11->write_reserve_mutex);
 else
  FUNC_8(VAR_16);
 return 0;

out_release:
 FUNC_13(VAR_11, VAR_1);
out_ro:
 FUNC_24(VAR_11, VAR_17);
 FUNC_4(VAR_11);
out_free:
 if (!VAR_25)
  FUNC_12(&VAR_11->write_reserve_mutex);
 else
  FUNC_8(VAR_16);
 return VAR_17;
}
