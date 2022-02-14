
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
struct affs_ext_key {int dummy; } ;
struct TYPE_4__ {int* i_lc; int i_lc_shift; int i_extcnt; int i_lc_size; int i_lc_mask; struct affs_ext_key* i_ac; } ;
struct TYPE_3__ {int extension; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct super_block*,struct buffer_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct buffer_head* FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_5, u32 VAR_6)
{
 struct super_block *VAR_7 = VAR_5->i_sb;
 struct buffer_head *VAR_8;
 u32 VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (!FUNC_0(VAR_5)->i_lc) {
  char *VAR_13 = (char *)FUNC_5(VAR_4);
  if (!VAR_13)
   return -VAR_3;
  FUNC_0(VAR_5)->i_lc = (u32 *)VAR_13;
  FUNC_0(VAR_5)->i_ac = (struct affs_ext_key *)(VAR_13 + VAR_0 / 2);
 }

 VAR_9 = VAR_1 << FUNC_0(VAR_5)->i_lc_shift;

 if (FUNC_0(VAR_5)->i_extcnt > VAR_9) {
  u32 VAR_14, VAR_15, VAR_16, VAR_17;


  VAR_14 = FUNC_0(VAR_5)->i_lc_shift;
  VAR_16 = (FUNC_0(VAR_5)->i_extcnt / VAR_1) >> VAR_14;
  for (; VAR_16; VAR_16 >>= 1)
   VAR_14++;
  VAR_15 = (1 << VAR_14) - 1;


  VAR_6 >>= (VAR_14 - FUNC_0(VAR_5)->i_lc_shift);
  FUNC_0(VAR_5)->i_lc_size >>= (VAR_14 - FUNC_0(VAR_5)->i_lc_shift);


  VAR_17 = 1 << (VAR_14 - FUNC_0(VAR_5)->i_lc_shift);
  for (VAR_10 = 1, VAR_11 = VAR_17; VAR_11 < VAR_1; VAR_10++, VAR_11 += VAR_17)
   FUNC_0(VAR_5)->i_ac[VAR_10] = FUNC_0(VAR_5)->i_ac[VAR_11];

  FUNC_0(VAR_5)->i_lc_shift = VAR_14;
  FUNC_0(VAR_5)->i_lc_mask = VAR_15;
 }


 VAR_10 = FUNC_0(VAR_5)->i_lc_size;
 FUNC_0(VAR_5)->i_lc_size = VAR_6 + 1;
 for (; VAR_10 <= VAR_6; VAR_10++) {
  if (!VAR_10) {
   FUNC_0(VAR_5)->i_lc[0] = VAR_5->i_ino;
   continue;
  }
  VAR_12 = FUNC_0(VAR_5)->i_lc[VAR_10 - 1];
  VAR_11 = FUNC_0(VAR_5)->i_lc_mask + 1;

  for (; VAR_11 > 0; VAR_11--) {
   VAR_8 = FUNC_2(VAR_7, VAR_12);
   if (!VAR_8)
    goto err;
   VAR_12 = FUNC_4(FUNC_1(VAR_7, VAR_8)->extension);
   FUNC_3(VAR_8);
  }

  FUNC_0(VAR_5)->i_lc[VAR_10] = VAR_12;
 }

 return 0;

err:

 return -VAR_2;
}
