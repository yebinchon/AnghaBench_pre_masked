
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {int * i_gc_rwsem; int i_mmap_sem; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct f2fs_sb_info* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (struct inode*,struct inode*,int,int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3, loff_t VAR_4, loff_t VAR_5)
{
 struct f2fs_sb_info *VAR_6 = FUNC_2(VAR_3);
 pgoff_t VAR_7 = FUNC_0(FUNC_9(VAR_3), VAR_1);
 pgoff_t VAR_8 = VAR_4 >> VAR_0;
 pgoff_t VAR_9 = (VAR_4 + VAR_5) >> VAR_0;
 int VAR_10;

 FUNC_5(VAR_6, 1);


 FUNC_4(&FUNC_1(VAR_3)->i_gc_rwsem[VAR_2]);
 FUNC_4(&FUNC_1(VAR_3)->i_mmap_sem);

 FUNC_7(VAR_6);
 FUNC_6(VAR_3);
 FUNC_10(VAR_3, VAR_4);
 VAR_10 = FUNC_3(VAR_3, VAR_3, VAR_9, VAR_8, VAR_7 - VAR_9, 1);
 FUNC_8(VAR_6);

 FUNC_11(&FUNC_1(VAR_3)->i_mmap_sem);
 FUNC_11(&FUNC_1(VAR_3)->i_gc_rwsem[VAR_2]);
 return VAR_10;
}
