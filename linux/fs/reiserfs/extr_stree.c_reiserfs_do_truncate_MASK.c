
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct reiserfs_transaction_handle {int t_trans_id; } ;
struct page {int dummy; } ;
struct item_head {int dummy; } ;
struct inode {int i_size; void* i_ctime; void* i_mtime; TYPE_3__* i_sb; int i_mode; } ;
struct TYPE_13__ {struct cpu_key* k_objectid; } ;
struct cpu_key {TYPE_1__ on_disk_key; } ;
typedef int loff_t ;
struct TYPE_15__ {int s_blocksize; } ;
struct TYPE_14__ {int reada; int pos_in_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,char*,int,int,struct cpu_key*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_8 ;
 void* FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct item_head*) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,TYPE_3__*,scalar_t__) ;
 int FUNC_10 (struct reiserfs_transaction_handle*) ;
 scalar_t__ FUNC_11 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_12 (struct item_head*) ;
 int FUNC_13 (struct cpu_key*,struct inode*,int ,int ,int) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct item_head*,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (struct reiserfs_transaction_handle*,TYPE_2__*,struct cpu_key*,struct inode*,struct page*,int) ;
 int FUNC_19 (TYPE_3__*,char*,char*,...) ;
 scalar_t__ FUNC_20 (struct reiserfs_transaction_handle*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_23 (TYPE_3__*,char*,char*) ;
 TYPE_2__ VAR_9 ;
 int FUNC_24 (TYPE_3__*,struct cpu_key*,TYPE_2__*) ;
 int FUNC_25 (struct cpu_key*,int) ;
 struct item_head* FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (struct reiserfs_transaction_handle*,struct inode*) ;

int FUNC_28(struct reiserfs_transaction_handle *VAR_10,
    struct inode *VAR_11,
    struct page *VAR_12,




    int VAR_13
    )
{
 FUNC_1(VAR_9);
 struct item_head *VAR_14;


 struct cpu_key VAR_15;
 loff_t VAR_16,
  VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20 = 0;

 FUNC_0(!VAR_10->t_trans_id);
 if (!
     (FUNC_6(VAR_11->i_mode) || FUNC_4(VAR_11->i_mode)
      || FUNC_5(VAR_11->i_mode)))
  return 0;


 if (FUNC_4(VAR_11->i_mode)) {
  FUNC_27(VAR_10, VAR_11);
  return 0;
 }


 VAR_17 = VAR_11->i_size;


 FUNC_13(&VAR_15, VAR_11, FUNC_14(VAR_11),
       VAR_8, 3);

 VAR_19 =
     FUNC_24(VAR_11->i_sb, &VAR_15,
           &VAR_9);
 if (VAR_19 == VAR_2) {
  FUNC_19(VAR_11->i_sb, "vs-5657",
          "i/o failure occurred trying to truncate %K",
          &VAR_15);
  VAR_20 = -VAR_0;
  goto out;
 }
 if (VAR_19 == VAR_7 || VAR_19 == VAR_1) {
  FUNC_19(VAR_11->i_sb, "PAP-5660",
          "wrong result %d of search for %K", VAR_19,
          &VAR_15);

  VAR_20 = -VAR_0;
  goto out;
 }

 VAR_9.pos_in_item--;


 VAR_14 = FUNC_26(&VAR_9);
 if (FUNC_8(VAR_14))
  VAR_16 = 0;
 else {
  loff_t VAR_21 = FUNC_12(VAR_14);
  int VAR_22 =
      FUNC_15(VAR_14, VAR_11->i_sb->s_blocksize);






  VAR_16 = VAR_21 + VAR_22 - 1;
 }




 if (VAR_17 == 0)
  VAR_9.reada = VAR_5 | VAR_6;

 if (VAR_16 == 0 || VAR_16 < VAR_17) {
  goto update_and_out;
 }


 FUNC_25(&VAR_15, VAR_16);

 do {

  VAR_18 =
      FUNC_18(VAR_10, &VAR_9, &VAR_15,
        VAR_11, VAR_12, VAR_17);
  if (VAR_18 < 0) {
   FUNC_23(VAR_11->i_sb, "vs-5665",
      "reiserfs_cut_from_item failed");
   FUNC_17(&VAR_9);
   return 0;
  }

  FUNC_2(VAR_18 > VAR_16,
         "PAP-5670: reiserfs_cut_from_item: too many bytes deleted: deleted %d, file_size %lu, item_key %K",
         VAR_18, VAR_16, &VAR_15);


  VAR_16 -= VAR_18;

  FUNC_25(&VAR_15, VAR_16);
  if (FUNC_11(VAR_10, 0) ||
      FUNC_20(VAR_10) <= VAR_3) {
   FUNC_16(&VAR_9);

   if (VAR_13) {
    VAR_11->i_mtime = FUNC_7(VAR_11);
    VAR_11->i_ctime = FUNC_7(VAR_11);
   }
   FUNC_22(VAR_10, VAR_11);

   VAR_20 = FUNC_10(VAR_10);
   if (VAR_20)
    goto out;
   VAR_20 = FUNC_9(VAR_10, VAR_11->i_sb,
         VAR_3 + VAR_4 * 4) ;
   if (VAR_20)
    goto out;
   FUNC_21(VAR_11);
  }
 } while (VAR_16 > FUNC_3(VAR_17) &&
   FUNC_24(VAR_11->i_sb, &VAR_15,
         &VAR_9) == VAR_7);

 FUNC_2(VAR_16 > FUNC_3(VAR_17),
        "PAP-5680: truncate did not finish: new_file_size %lld, current %lld, oid %d",
        VAR_17, VAR_16, VAR_15.on_disk_key.k_objectid);

update_and_out:
 if (VAR_13) {

  VAR_11->i_mtime = FUNC_7(VAR_11);
  VAR_11->i_ctime = FUNC_7(VAR_11);
 }
 FUNC_22(VAR_10, VAR_11);

out:
 FUNC_16(&VAR_9);
 return VAR_20;
}
