
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct f2fs_sb_info {int s_list; } ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline bool FUNC_5(struct inode *VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_0(VAR_2);

 if (!FUNC_4(VAR_3, VAR_0) ||
   FUNC_2(VAR_2, VAR_1))
  return 0;





 if (FUNC_3(&VAR_3->s_list))
  return 0;

 return FUNC_1(VAR_2->i_mode);
}
