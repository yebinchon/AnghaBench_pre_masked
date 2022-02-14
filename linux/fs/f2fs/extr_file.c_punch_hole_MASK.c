
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {struct address_space* i_mapping; } ;
struct f2fs_sb_info {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned long long pgoff_t ;
typedef unsigned long long loff_t ;
struct TYPE_2__ {int * i_gc_rwsem; int i_mmap_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct inode*,unsigned long long,unsigned long long) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct inode*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_9 (struct address_space*,unsigned long long,unsigned long long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_3, loff_t VAR_4, loff_t VAR_5)
{
 pgoff_t VAR_6, VAR_7;
 loff_t VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_6 = ((unsigned long long) VAR_4) >> VAR_0;
 VAR_7 = ((unsigned long long) VAR_4 + VAR_5) >> VAR_0;

 VAR_8 = VAR_4 & (VAR_1 - 1);
 VAR_9 = (VAR_4 + VAR_5) & (VAR_1 - 1);

 if (VAR_6 == VAR_7) {
  VAR_10 = FUNC_8(VAR_3, VAR_6, VAR_8,
      VAR_9 - VAR_8);
  if (VAR_10)
   return VAR_10;
 } else {
  if (VAR_8) {
   VAR_10 = FUNC_8(VAR_3, VAR_6++, VAR_8,
      VAR_1 - VAR_8);
   if (VAR_10)
    return VAR_10;
  }
  if (VAR_9) {
   VAR_10 = FUNC_8(VAR_3, VAR_7, 0, VAR_9);
   if (VAR_10)
    return VAR_10;
  }

  if (VAR_6 < VAR_7) {
   struct address_space *VAR_11 = VAR_3->i_mapping;
   loff_t VAR_12, VAR_13;
   struct f2fs_sb_info *VAR_14 = FUNC_1(VAR_3);

   FUNC_3(VAR_14, 1);

   VAR_12 = (loff_t)VAR_6 << VAR_0;
   VAR_13 = (loff_t)VAR_7 << VAR_0;

   FUNC_2(&FUNC_0(VAR_3)->i_gc_rwsem[VAR_2]);
   FUNC_2(&FUNC_0(VAR_3)->i_mmap_sem);

   FUNC_9(VAR_11, VAR_12,
     VAR_13 - 1);

   FUNC_5(VAR_14);
   VAR_10 = FUNC_6(VAR_3, VAR_6, VAR_7);
   FUNC_7(VAR_14);

   FUNC_10(&FUNC_0(VAR_3)->i_mmap_sem);
   FUNC_10(&FUNC_0(VAR_3)->i_gc_rwsem[VAR_2]);
  }
 }

 return VAR_10;
}
