
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int node_change; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct f2fs_sb_info *VAR_1, int VAR_2, bool VAR_3)
{
 if (VAR_2 == VAR_0) {
  if (VAR_3)
   FUNC_0(&VAR_1->node_change);
  else
   FUNC_3(&VAR_1->node_change);
 } else {
  if (VAR_3)
   FUNC_1(VAR_1);
  else
   FUNC_2(VAR_1);
 }
}
