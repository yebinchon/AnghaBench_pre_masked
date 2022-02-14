
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {unsigned long i_ino; } ;
struct f2fs_sb_info {int * inode_lock; } ;
struct TYPE_2__ {int gdirty_list; } ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, unsigned long VAR_3, void *VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_1(VAR_2);
 bool VAR_6;

 if (VAR_2->i_ino != VAR_3)
  return 0;

 if (!FUNC_3(VAR_2, VAR_1))
  return 0;

 FUNC_5(&VAR_5->inode_lock[VAR_0]);
 VAR_6 = FUNC_4(&FUNC_0(VAR_2)->gdirty_list);
 FUNC_6(&VAR_5->inode_lock[VAR_0]);

 if (VAR_6)
  return 0;

 VAR_2 = FUNC_2(VAR_2);
 if (!VAR_2)
  return 0;
 return 1;
}
