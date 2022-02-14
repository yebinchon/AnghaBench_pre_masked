
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {int i_mmap_sem; int * i_gc_rwsem; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct f2fs_sb_info* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (struct inode*,struct inode*,int,int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct inode*,int,int) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_6, loff_t VAR_7, loff_t VAR_8)
{
 struct f2fs_sb_info *VAR_9 = FUNC_2(VAR_6);
 pgoff_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 loff_t VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_13(VAR_6) + VAR_8;
 VAR_16 = FUNC_14(VAR_6, VAR_15);
 if (VAR_16)
  return VAR_16;

 if (VAR_7 >= FUNC_13(VAR_6))
  return -VAR_0;


 if (VAR_7 & (VAR_1 - 1) || VAR_8 & (VAR_1 - 1))
  return -VAR_0;

 VAR_16 = FUNC_6(VAR_6);
 if (VAR_16)
  return VAR_16;

 FUNC_5(VAR_9, 1);

 FUNC_4(&FUNC_1(VAR_6)->i_mmap_sem);
 VAR_16 = FUNC_10(VAR_6, FUNC_13(VAR_6), 1);
 FUNC_16(&FUNC_1(VAR_6)->i_mmap_sem);
 if (VAR_16)
  return VAR_16;


 VAR_16 = FUNC_12(VAR_6->i_mapping, VAR_7, VAR_2);
 if (VAR_16)
  return VAR_16;

 VAR_11 = VAR_7 >> VAR_3;
 VAR_12 = (VAR_7 + VAR_8) >> VAR_3;
 VAR_13 = VAR_12 - VAR_11;
 VAR_14 = FUNC_0(FUNC_13(VAR_6), VAR_4);


 FUNC_4(&FUNC_1(VAR_6)->i_gc_rwsem[VAR_5]);
 FUNC_4(&FUNC_1(VAR_6)->i_mmap_sem);
 FUNC_15(VAR_6, VAR_7);

 while (!VAR_16 && VAR_14 > VAR_11) {
  VAR_10 = VAR_14 - VAR_11;
  if (VAR_10 > VAR_13)
   VAR_10 = VAR_13;
  VAR_14 -= VAR_10;

  FUNC_9(VAR_9);
  FUNC_7(VAR_6);

  VAR_16 = FUNC_3(VAR_6, VAR_6, VAR_14,
     VAR_14 + VAR_13, VAR_10, 0);
  FUNC_11(VAR_9);
 }
 FUNC_16(&FUNC_1(VAR_6)->i_mmap_sem);
 FUNC_16(&FUNC_1(VAR_6)->i_gc_rwsem[VAR_5]);


 FUNC_4(&FUNC_1(VAR_6)->i_mmap_sem);
 FUNC_12(VAR_6->i_mapping, VAR_7, VAR_2);
 FUNC_15(VAR_6, VAR_7);
 FUNC_16(&FUNC_1(VAR_6)->i_mmap_sem);

 if (!VAR_16)
  FUNC_8(VAR_6, VAR_15);
 return VAR_16;
}
