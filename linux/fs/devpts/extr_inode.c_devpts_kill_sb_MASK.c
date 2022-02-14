
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct pts_fs_info {int allocated_ptys; } ;


 struct pts_fs_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pts_fs_info*) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_0)
{
 struct pts_fs_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_1(&VAR_1->allocated_ptys);
 FUNC_2(VAR_1);
 FUNC_3(VAR_0);
}
