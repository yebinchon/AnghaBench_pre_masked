
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct migrate_struct {int first_pblock; scalar_t__ first_block; scalar_t__ last_block; } ;
struct inode {int dummy; } ;
struct ext4_extent {int ee_len; int ee_block; } ;
struct ext4_ext_path {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int i_data_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (struct ext4_ext_path*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,scalar_t__,struct ext4_ext_path*) ;
 int FUNC_7 (struct ext4_ext_path*) ;
 int FUNC_8 (int *,struct inode*,struct ext4_ext_path**,struct ext4_extent*,int ) ;
 int FUNC_9 (struct ext4_extent*,int ) ;
 struct ext4_ext_path* FUNC_10 (struct inode*,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (struct ext4_ext_path*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_1, struct inode *VAR_2,
    struct migrate_struct *VAR_3)

{
 int VAR_4 = 0, VAR_5;
 struct ext4_extent VAR_6;
 struct ext4_ext_path *VAR_7;
 if (VAR_3->first_pblock == 0)
  return 0;


 VAR_6.ee_block = FUNC_4(VAR_3->first_block);
 VAR_6.ee_len = FUNC_3(VAR_3->last_block - VAR_3->first_block + 1);
 FUNC_9(&VAR_6, VAR_3->first_pblock);

 FUNC_5(&FUNC_0(VAR_2)->i_data_sem);
 VAR_7 = FUNC_10(VAR_2, VAR_3->first_block, ((void*)0), 0);
 if (FUNC_1(VAR_7)) {
  VAR_4 = FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
  goto err_out;
 }







 VAR_5 = FUNC_6(VAR_2,
      VAR_3->last_block - VAR_3->first_block + 1, VAR_7);




 if (VAR_5 && FUNC_11(VAR_1,
      VAR_0)) {
  FUNC_15((&FUNC_0(VAR_2)->i_data_sem));
  VAR_4 = FUNC_13(VAR_1, VAR_5);
  FUNC_5((&FUNC_0(VAR_2)->i_data_sem));
  if (VAR_4)
   goto err_out;
 } else if (VAR_5) {
  VAR_4 = FUNC_12(VAR_1, VAR_5);
  if (VAR_4) {



   FUNC_15((&FUNC_0(VAR_2)->i_data_sem));
   VAR_4 = FUNC_13(VAR_1, VAR_5);
   FUNC_5((&FUNC_0(VAR_2)->i_data_sem));
   if (VAR_4)
    goto err_out;
  }
 }
 VAR_4 = FUNC_8(VAR_1, VAR_2, &VAR_7, &VAR_6, 0);
err_out:
 FUNC_15((&FUNC_0(VAR_2)->i_data_sem));
 FUNC_7(VAR_7);
 FUNC_14(VAR_7);
 VAR_3->first_pblock = 0;
 return VAR_4;
}
