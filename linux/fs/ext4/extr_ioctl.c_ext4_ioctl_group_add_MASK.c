
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct file {int dummy; } ;
struct ext4_new_group_data {int group; } ;
struct TYPE_4__ {scalar_t__ s_journal; } ;
struct TYPE_3__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct super_block*,struct ext4_new_group_data*) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int ,char*) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;
 TYPE_1__* FUNC_8 (struct file*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct file*) ;
 int FUNC_13 (struct file*) ;
 scalar_t__ FUNC_14 (struct super_block*,int ) ;

__attribute__((used)) static long FUNC_15(struct file *VAR_3,
     struct ext4_new_group_data *VAR_4)
{
 struct super_block *VAR_5 = FUNC_8(VAR_3)->i_sb;
 int VAR_6, VAR_7=0;

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (FUNC_2(VAR_5)) {
  FUNC_4(VAR_5, VAR_2,
    "Online resizing not supported with bigalloc");
  VAR_6 = -VAR_0;
  goto group_add_out;
 }

 VAR_6 = FUNC_13(VAR_3);
 if (VAR_6)
  goto group_add_out;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (FUNC_0(VAR_5)->s_journal) {
  FUNC_10(FUNC_0(VAR_5)->s_journal);
  VAR_7 = FUNC_9(FUNC_0(VAR_5)->s_journal);
  FUNC_11(FUNC_0(VAR_5)->s_journal);
 }
 if (VAR_6 == 0)
  VAR_6 = VAR_7;
 FUNC_12(VAR_3);
 if (!VAR_6 && FUNC_3(VAR_5) &&
     FUNC_14(VAR_5, VAR_1))
  VAR_6 = FUNC_5(VAR_5, VAR_4->group);
group_add_out:
 FUNC_7(VAR_5);
 return VAR_6;
}
