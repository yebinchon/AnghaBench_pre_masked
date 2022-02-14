
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct reiserfs_super_block_v1 {int dummy; } ;
struct reiserfs_super_block {int s_unused; int s_uuid; int s_label; } ;
typedef int __u32 ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 struct reiserfs_super_block* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct reiserfs_super_block*) ;
 int FUNC_5 (struct reiserfs_super_block*) ;
 int FUNC_6 (struct reiserfs_super_block*,int) ;
 int FUNC_7 (struct reiserfs_super_block*,int) ;

int FUNC_8(struct super_block *VAR_1)
{
 struct reiserfs_super_block *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = (VAR_1->s_blocksize - VAR_0) / sizeof(__u32) / 2 * 2;
 int VAR_5 = FUNC_5(VAR_2);
 struct reiserfs_super_block_v1 *VAR_6;
 __le32 *VAR_7;
 int VAR_8;

 VAR_6 =
     (struct reiserfs_super_block_v1 *)(FUNC_0(VAR_1)->b_data);
 VAR_7 = (__le32 *) (VAR_6 + 1);

 if (VAR_3 > VAR_4) {




  VAR_7[VAR_4 - 1] = VAR_7[VAR_3 - 1];
  FUNC_6(VAR_2, VAR_4);
 }

 for (VAR_8 = VAR_4 - 1; VAR_8 >= 0; VAR_8--) {
  VAR_7[VAR_8 + (VAR_5 - VAR_4)] = VAR_7[VAR_8];
 }


 FUNC_7(VAR_2, VAR_4);


 FUNC_3(VAR_2->s_label, 0, sizeof(VAR_2->s_label));
 FUNC_2(VAR_2->s_uuid);


 FUNC_3(VAR_2->s_unused, 0, sizeof(VAR_2->s_unused));
 return 0;
}
