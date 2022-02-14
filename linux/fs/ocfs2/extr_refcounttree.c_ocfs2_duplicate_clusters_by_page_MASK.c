
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; struct super_block* i_sb; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {int s_clustersize_bits; int s_clustersize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 struct page* FUNC_4 (struct address_space*,int,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int FUNC_9 (struct super_block*,int) ;
 int VAR_5 ;
 int FUNC_10 (struct inode*,int *,unsigned int,unsigned int,struct page*,int ,int *) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int,int,int,int) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (int *,int ,unsigned int,unsigned int,int*,int ) ;
 int FUNC_17 (struct page*) ;

int FUNC_18(handle_t *VAR_6,
         struct inode *VAR_7,
         u32 VAR_8, u32 VAR_9,
         u32 VAR_10, u32 VAR_11)
{
 int VAR_12 = 0, VAR_13;
 struct super_block *VAR_14 = VAR_7->i_sb;
 u64 VAR_15 = FUNC_9(VAR_14, VAR_10);
 struct page *VAR_16;
 pgoff_t VAR_17;
 unsigned int VAR_18, VAR_19;
 loff_t VAR_20, VAR_21, VAR_22;
 struct address_space *VAR_23 = VAR_7->i_mapping;

 FUNC_14(VAR_8, VAR_9,
            VAR_10, VAR_11);

 VAR_20 = ((loff_t)VAR_8) << FUNC_0(VAR_14)->s_clustersize_bits;
 VAR_21 = VAR_20 + (VAR_11 << FUNC_0(VAR_14)->s_clustersize_bits);




 if (VAR_21 > FUNC_5(VAR_7))
  VAR_21 = FUNC_5(VAR_7);

 while (VAR_20 < VAR_21) {
  VAR_17 = VAR_20 >> VAR_2;
  VAR_22 = ((loff_t)VAR_17 + 1) << VAR_2;
  if (VAR_22 > VAR_21)
   VAR_22 = VAR_21;


  VAR_18 = VAR_20 & (VAR_3 - 1);
  VAR_19 = VAR_3;
  if (VAR_22 & (VAR_3 - 1))
   VAR_19 = VAR_22 & (VAR_3 - 1);

retry:
  VAR_16 = FUNC_4(VAR_23, VAR_17, VAR_1);
  if (!VAR_16) {
   VAR_12 = -VAR_0;
   FUNC_8(VAR_12);
   break;
  }





  if (VAR_3 <= FUNC_0(VAR_14)->s_clustersize) {
   if (FUNC_1(VAR_16)) {



    VAR_12 = FUNC_17(VAR_16);
    goto retry;
   }
  }

  if (!FUNC_2(VAR_16)) {
   VAR_12 = FUNC_3(VAR_16, VAR_5);
   if (VAR_12) {
    FUNC_8(VAR_12);
    goto unlock;
   }
   FUNC_6(VAR_16);
  }

  if (FUNC_12(VAR_16)) {
   VAR_12 = FUNC_16(VAR_6, FUNC_11(VAR_16),
      VAR_18, VAR_19, &VAR_13,
      VAR_4);
   if (VAR_12) {
    FUNC_8(VAR_12);
    goto unlock;
   }
  }

  FUNC_10(VAR_7,
      VAR_6, VAR_18, VAR_19,
      VAR_16, 0, &VAR_15);
  FUNC_7(VAR_16);
unlock:
  FUNC_15(VAR_16);
  FUNC_13(VAR_16);
  VAR_16 = ((void*)0);
  VAR_20 = VAR_22;
  if (VAR_12)
   break;
 }

 return VAR_12;
}
