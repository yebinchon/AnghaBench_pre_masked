
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct migrate_struct {scalar_t__ curr_block; } ;
struct inode {scalar_t__ i_blocks; int i_ino; TYPE_1__* i_sb; int i_mode; } ;
struct ext4_inode_info {scalar_t__* i_data; int i_data_sem; } ;
typedef int lb ;
typedef struct inode handle_t ;
typedef int __u32 ;
typedef scalar_t__ __le32 ;
struct TYPE_4__ {int s_blocksize; int s_root; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,struct inode*,struct inode*) ;
 int FUNC_10 (struct inode*,struct inode*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct inode*,int) ;
 struct inode* FUNC_14 (struct inode*,int ,int) ;
 int FUNC_15 (struct inode*) ;
 struct inode* FUNC_16 (struct inode*,int ,int ,int *,int,int *,int ) ;
 int FUNC_17 (struct inode*,struct inode*) ;
 int FUNC_18 (int *,struct inode*) ;
 int FUNC_19 (struct inode*,int ) ;
 scalar_t__ FUNC_20 (struct inode*,int ) ;
 int FUNC_21 (struct inode*,struct inode*,struct migrate_struct*) ;
 int FUNC_22 (struct inode*,struct inode*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct inode*,int ) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (struct migrate_struct*,int ,int) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (struct inode*,struct inode*,int ,struct migrate_struct*) ;
 int FUNC_33 (struct inode*,struct inode*,int ,struct migrate_struct*) ;
 int FUNC_34 (struct inode*,struct inode*,int ,struct migrate_struct*) ;
 int FUNC_35 (struct inode*,struct inode*,int ,struct migrate_struct*) ;

int FUNC_36(struct inode *VAR_9)
{
 handle_t *VAR_10;
 int VAR_11 = 0, VAR_12;
 __le32 *VAR_13;
 struct ext4_inode_info *VAR_14;
 struct inode *VAR_15 = ((void*)0);
 struct migrate_struct VAR_16;
 unsigned long VAR_17;
 __u32 VAR_18;
 uid_t VAR_19[2];





 if (!FUNC_11(VAR_9->i_sb) ||
     (FUNC_20(VAR_9, VAR_4)))
  return -VAR_0;

 if (FUNC_5(VAR_9->i_mode) && VAR_9->i_blocks == 0)



  return VAR_11;






 VAR_10 = FUNC_14(VAR_9, VAR_2,
  4 + FUNC_2(VAR_9->i_sb));

 if (FUNC_3(VAR_10)) {
  VAR_11 = FUNC_4(VAR_10);
  return VAR_11;
 }
 VAR_18 = (((VAR_9->i_ino - 1) / FUNC_1(VAR_9->i_sb)) *
  FUNC_1(VAR_9->i_sb)) + 1;
 VAR_19[0] = FUNC_26(VAR_9);
 VAR_19[1] = FUNC_23(VAR_9);
 VAR_15 = FUNC_16(VAR_10, FUNC_7(VAR_9->i_sb->s_root),
       VAR_8, ((void*)0), VAR_18, VAR_19, 0);
 if (FUNC_3(VAR_15)) {
  VAR_11 = FUNC_4(VAR_15);
  FUNC_15(VAR_10);
  return VAR_11;
 }
 FUNC_25(VAR_15, FUNC_24(VAR_9));




 FUNC_6(VAR_15);

 FUNC_10(VAR_10, VAR_15);
 FUNC_17(VAR_10, VAR_15);
 FUNC_15(VAR_10);
 FUNC_8(&FUNC_0(VAR_9)->i_data_sem);
 FUNC_19(VAR_9, VAR_6);
 FUNC_31((&FUNC_0(VAR_9)->i_data_sem));

 VAR_10 = FUNC_14(VAR_9, VAR_2, 1);
 if (FUNC_3(VAR_10)) {





  FUNC_18(((void*)0), VAR_15);
  VAR_11 = FUNC_4(VAR_10);
  goto out;
 }

 VAR_14 = FUNC_0(VAR_9);
 VAR_13 = VAR_14->i_data;
 FUNC_29(&VAR_16, 0, sizeof(VAR_16));


 VAR_17 = VAR_9->i_sb->s_blocksize >> 2;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (VAR_13[VAR_12]) {
   VAR_11 = FUNC_33(VAR_10, VAR_15,
      FUNC_28(VAR_13[VAR_12]), &VAR_16);
   if (VAR_11)
    goto err_out;
  } else
   VAR_16.curr_block++;
 }
 if (VAR_13[VAR_3]) {
  VAR_11 = FUNC_34(VAR_10, VAR_15,
    FUNC_28(VAR_13[VAR_3]), &VAR_16);
  if (VAR_11)
   goto err_out;
 } else
  VAR_16.curr_block += VAR_17;
 if (VAR_13[VAR_1]) {
  VAR_11 = FUNC_32(VAR_10, VAR_15,
    FUNC_28(VAR_13[VAR_1]), &VAR_16);
  if (VAR_11)
   goto err_out;
 } else
  VAR_16.curr_block += VAR_17 * VAR_17;
 if (VAR_13[VAR_7]) {
  VAR_11 = FUNC_35(VAR_10, VAR_15,
    FUNC_28(VAR_13[VAR_7]), &VAR_16);
  if (VAR_11)
   goto err_out;
 }



 VAR_11 = FUNC_21(VAR_10, VAR_15, &VAR_16);
err_out:
 if (VAR_11)




  FUNC_22(VAR_10, VAR_15);
 else {
  VAR_11 = FUNC_9(VAR_10, VAR_9, VAR_15);
  if (VAR_11)




   FUNC_22(VAR_10, VAR_15);
 }


 if (FUNC_12(VAR_10, 1) != 0)
  FUNC_13(VAR_10, 1);




 FUNC_25(VAR_15, 0);
 VAR_15->i_blocks = 0;


 FUNC_10(VAR_10, VAR_15);
 FUNC_15(VAR_10);
out:
 FUNC_30(VAR_15);
 FUNC_27(VAR_15);

 return VAR_11;
}
