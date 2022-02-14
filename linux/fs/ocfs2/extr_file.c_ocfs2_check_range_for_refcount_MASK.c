
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef scalar_t__ loff_t ;
struct TYPE_5__ {int ip_dyn_features; } ;
struct TYPE_4__ {scalar_t__ s_clustersize_bits; } ;


 unsigned int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(struct inode *VAR_2, loff_t VAR_3,
       size_t VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 struct super_block *VAR_11 = VAR_2->i_sb;

 if (!FUNC_6(FUNC_1(VAR_2->i_sb)) ||
     !FUNC_5(VAR_2) ||
     FUNC_0(VAR_2)->ip_dyn_features & VAR_1)
  return 0;

 VAR_7 = VAR_3 >> FUNC_1(VAR_11)->s_clustersize_bits;
 VAR_8 = FUNC_3(VAR_11, VAR_3 + VAR_4) - VAR_7;

 while (VAR_8) {
  VAR_5 = FUNC_4(VAR_2, VAR_7, &VAR_10, &VAR_9,
      &VAR_6);
  if (VAR_5 < 0) {
   FUNC_2(VAR_5);
   goto out;
  }

  if (VAR_10 && (VAR_6 & VAR_0)) {
   VAR_5 = 1;
   break;
  }

  if (VAR_9 > VAR_8)
   VAR_9 = VAR_8;

  VAR_8 -= VAR_9;
  VAR_7 += VAR_9;
 }
out:
 return VAR_5;
}
