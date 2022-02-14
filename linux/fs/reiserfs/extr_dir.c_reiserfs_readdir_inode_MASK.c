
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct reiserfs_key {int dummy; } ;
struct reiserfs_dir_entry {int de_entry_num; int de_item_num; struct item_head* de_ih; struct buffer_head* de_bh; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {struct reiserfs_key const ih_key; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dir_context {void* pos; } ;
struct cpu_key {int dummy; } ;
struct buffer_head {char* b_data; int b_size; } ;
typedef void* loff_t ;
typedef int ino_t ;
struct TYPE_16__ {int reada; } ;
struct TYPE_15__ {int s_blocksize; } ;


 struct reiserfs_de_head* FUNC_0 (struct buffer_head*,struct item_head*) ;
 char* FUNC_1 (struct buffer_head*,struct item_head*,struct reiserfs_de_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct reiserfs_key const*,struct cpu_key*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*,...) ;
 int VAR_10 ;
 int FUNC_7 (struct reiserfs_key const*,int *) ;
 void* FUNC_8 (struct cpu_key*) ;
 int FUNC_9 (struct reiserfs_de_head*) ;
 int FUNC_10 (struct reiserfs_de_head*) ;
 void* FUNC_11 (struct reiserfs_de_head*) ;
 int FUNC_12 (struct dir_context*,char*,int,int ,int ) ;
 int FUNC_13 (struct buffer_head*,struct item_head*,int) ;
 struct reiserfs_key* FUNC_14 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_15 (struct item_head*) ;
 scalar_t__ FUNC_16 (struct inode*,struct reiserfs_de_head*) ;
 scalar_t__ FUNC_17 (struct item_head*,TYPE_2__*) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (int,int ) ;
 void* FUNC_20 (int ,struct reiserfs_key const*) ;
 int FUNC_21 (struct cpu_key*,struct inode*,int ,int ,int) ;
 int FUNC_22 (char*,char*,int) ;
 TYPE_2__ VAR_11 ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_1__*,char*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*,int) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*,struct cpu_key*,TYPE_2__*,struct reiserfs_dir_entry*) ;
 int FUNC_31 (struct cpu_key*,void*) ;
 int FUNC_32 (struct item_head*,struct item_head*) ;
 int FUNC_33 (char*) ;

int FUNC_34(struct inode *VAR_12, struct dir_context *VAR_13)
{


 struct cpu_key VAR_14;

 FUNC_4(VAR_11);
 struct buffer_head *VAR_15;
 int VAR_16, VAR_17;
 const struct reiserfs_key *VAR_18;
 struct item_head *VAR_19, VAR_20;
 int VAR_21;
 char *VAR_22;
 loff_t VAR_23;
 char VAR_24[32];
 struct reiserfs_dir_entry VAR_25;
 int VAR_26 = 0;
 int VAR_27;

 FUNC_26(VAR_12->i_sb);

 FUNC_24(VAR_12->i_sb, "readdir");





 FUNC_21(&VAR_14, VAR_12, VAR_13->pos ?: VAR_0, VAR_10, 3);
 VAR_23 = FUNC_8(&VAR_14);

 VAR_11.reada = VAR_8;
 while (1) {
research:




  VAR_21 =
      FUNC_30(VAR_12->i_sb, &VAR_14, &VAR_11,
     &VAR_25);
  if (VAR_21 == VAR_5) {




   VAR_26 = -VAR_2;
   goto out;
  }
  VAR_17 = VAR_25.de_entry_num;
  VAR_15 = VAR_25.de_bh;
  VAR_16 = VAR_25.de_item_num;
  VAR_19 = VAR_25.de_ih;
  FUNC_32(&VAR_20, VAR_19);


  FUNC_6(FUNC_3(&VAR_19->ih_key, &VAR_14),
         "vs-9000: found item %h does not match to dir we readdir %K",
         VAR_19, &VAR_14);
  FUNC_6(VAR_16 > FUNC_2(VAR_15) - 1,
         "vs-9005 item_num == %d, item amount == %d",
         VAR_16, FUNC_2(VAR_15));





  FUNC_6(FUNC_15(VAR_19) < VAR_17,
         "vs-9010: entry number is too big %d (%d)",
         VAR_17, FUNC_15(VAR_19));





  if (VAR_21 == VAR_9
      || VAR_17 < FUNC_15(VAR_19)) {
   struct reiserfs_de_head *VAR_28 =
       FUNC_0(VAR_15, VAR_19) + VAR_17;

   for (; VAR_17 < FUNC_15(VAR_19);
        VAR_17++, VAR_28++) {
    int VAR_29;
    char *VAR_30;
    ino_t VAR_31;
    loff_t VAR_32 = FUNC_11(VAR_28);


    if (!FUNC_9(VAR_28))
     continue;
    VAR_29 = FUNC_13(VAR_15, VAR_19, VAR_17);
    VAR_30 = FUNC_1(VAR_15, VAR_19, VAR_28);

    if (VAR_29 <= 0 ||
        VAR_30 + VAR_29 > VAR_15->b_data + VAR_15->b_size) {




     FUNC_23(&VAR_11);
     VAR_26 = -VAR_2;
     goto out;
    }

    if (!VAR_30[VAR_29 - 1])
     VAR_29 = FUNC_33(VAR_30);


    if (VAR_29 >
        FUNC_5(VAR_12->i_sb->
            s_blocksize)) {
     continue;
    }


    if (FUNC_16(VAR_12, VAR_28))
     continue;

    VAR_13->pos = FUNC_11(VAR_28);
    VAR_31 = FUNC_10(VAR_28);
    if (VAR_29 <= 32) {
     VAR_22 = VAR_24;
    } else {
     VAR_22 = FUNC_19(VAR_29,
           VAR_4);
     if (!VAR_22) {
      FUNC_23(&VAR_11);
      VAR_26 = -VAR_3;
      goto out;
     }
     if (FUNC_17(&VAR_20, &VAR_11)) {
      FUNC_18(VAR_22);
      goto research;
     }
    }
    FUNC_22(VAR_22, VAR_30, VAR_29);





    VAR_27 = FUNC_29(VAR_12->i_sb);
    if (!FUNC_12
        (VAR_13, VAR_22, VAR_29, VAR_31,
         VAR_1)) {
     FUNC_27(VAR_12->i_sb, VAR_27);
     if (VAR_22 != VAR_24) {
      FUNC_18(VAR_22);
     }
     goto end;
    }
    FUNC_27(VAR_12->i_sb, VAR_27);
    if (VAR_22 != VAR_24) {
     FUNC_18(VAR_22);
    }


    VAR_23 = VAR_32 + 1;

    if (FUNC_17(&VAR_20, &VAR_11)) {
     FUNC_31(&VAR_14,
            VAR_23);
     goto research;
    }
   }
  }


  if (VAR_16 != FUNC_2(VAR_15) - 1)
   goto end;





  VAR_18 = FUNC_14(&VAR_11, VAR_12->i_sb);
  if (!FUNC_7(VAR_18, &VAR_7)) {




   FUNC_31(&VAR_14, VAR_23);
   continue;
  }


  if (FUNC_3(VAR_18, &VAR_14)) {
   goto end;
  }


  FUNC_31(&VAR_14,
         FUNC_20(VAR_6, VAR_18));

 }

end:
 VAR_13->pos = VAR_23;
 FUNC_23(&VAR_11);
 FUNC_25(&VAR_11);
out:
 FUNC_28(VAR_12->i_sb);
 return VAR_26;
}
