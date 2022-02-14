
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_mapping; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {int s_clustersize_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int,int) ;
 struct page* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;

int FUNC_11(struct super_block *VAR_3,
        struct inode *VAR_4,
        u32 VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;
 loff_t VAR_8, VAR_9, VAR_10;
 pgoff_t VAR_11;
 struct page *VAR_12;

 if (FUNC_7(VAR_4))
  return 0;

 VAR_8 = ((loff_t)VAR_5) << FUNC_1(VAR_3)->s_clustersize_bits;
 VAR_9 = VAR_8 + (VAR_6 << FUNC_1(VAR_3)->s_clustersize_bits);

 VAR_7 = FUNC_3(VAR_4->i_mapping,
           VAR_8, VAR_9 - 1);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  return VAR_7;
 }

 while (VAR_8 < VAR_9) {
  VAR_11 = VAR_8 >> VAR_2;
  VAR_10 = ((loff_t)VAR_11 + 1) << VAR_2;
  if (VAR_10 > VAR_9)
   VAR_10 = VAR_9;

  VAR_12 = FUNC_4(VAR_4->i_mapping,
        VAR_11, VAR_1);
  FUNC_0(!VAR_12);

  FUNC_10(VAR_12);
  if (FUNC_2(VAR_12)) {
   VAR_7 = -VAR_0;
   FUNC_6(VAR_7);
  } else
   FUNC_5(VAR_12);

  FUNC_9(VAR_12);
  FUNC_8(VAR_12);
  VAR_12 = ((void*)0);
  VAR_8 = VAR_10;
  if (VAR_7)
   break;
 }

 return VAR_7;
}
