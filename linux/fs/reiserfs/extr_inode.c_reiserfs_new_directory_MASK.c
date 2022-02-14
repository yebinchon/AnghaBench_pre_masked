
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; struct super_block* t_super; } ;
struct TYPE_3__ {int k_objectid; int k_dir_id; } ;
struct item_head {TYPE_1__ ih_key; } ;
struct inode {int dummy; } ;
struct cpu_key {int dummy; } ;
struct TYPE_4__ {int k_objectid; int k_dir_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct cpu_key*,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;
 int FUNC_6 (struct item_head*,int *,int ,int ,int ,int,int) ;
 scalar_t__ FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct treepath*) ;
 int FUNC_9 (struct super_block*,char*,char*) ;
 int FUNC_10 (struct reiserfs_transaction_handle*,struct treepath*,struct cpu_key*,struct item_head*,struct inode*,char*) ;
 int FUNC_11 (struct super_block*,char*,char*,TYPE_1__*) ;
 int FUNC_12 (struct super_block*,struct cpu_key*,struct treepath*) ;

__attribute__((used)) static int FUNC_13(struct reiserfs_transaction_handle *VAR_9,
      struct inode *VAR_10,
      struct item_head *VAR_11, struct treepath *VAR_12,
      struct inode *VAR_13)
{
 struct super_block *VAR_14 = VAR_9->t_super;
 char VAR_15[VAR_3];
 char *VAR_16 = VAR_15;
 struct cpu_key VAR_17;
 int VAR_18;

 FUNC_0(!VAR_9->t_trans_id);

 FUNC_2(&VAR_17, VAR_7, FUNC_3(VAR_11->ih_key.k_dir_id),
        FUNC_3(VAR_11->ih_key.k_objectid), VAR_0,
        VAR_8, 3 );






 if (FUNC_7(VAR_14)) {
  FUNC_6(VAR_11, ((void*)0), VAR_7, VAR_0,
      VAR_8, VAR_4, 2);

  FUNC_5(VAR_16, VAR_11->ih_key.k_dir_id,
           VAR_11->ih_key.k_objectid,
           FUNC_1(VAR_13)->k_dir_id,
           FUNC_1(VAR_13)->k_objectid);
 } else {
  FUNC_6(VAR_11, ((void*)0), VAR_7, VAR_0,
      VAR_8, VAR_3, 2);

  FUNC_4(VAR_16, VAR_11->ih_key.k_dir_id,
        VAR_11->ih_key.k_objectid,
        FUNC_1(VAR_13)->k_dir_id,
        FUNC_1(VAR_13)->k_objectid);
 }


 VAR_18 = FUNC_12(VAR_14, &VAR_17, VAR_12);
 if (VAR_18 == VAR_5) {
  FUNC_9(VAR_14, "vs-13080",
          "i/o failure occurred creating new directory");
  return -VAR_2;
 }
 if (VAR_18 == VAR_6) {
  FUNC_8(VAR_12);
  FUNC_11(VAR_14, "vs-13070",
     "object with this key exists (%k)",
     &(VAR_11->ih_key));
  return -VAR_1;
 }


 return FUNC_10(VAR_9, VAR_12, &VAR_17, VAR_11, VAR_10, VAR_16);
}
