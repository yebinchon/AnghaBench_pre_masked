
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_active; } ;
struct cifs_sb_info {int active; } ;


 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct super_block *VAR_0)
{
 struct cifs_sb_info *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_2(&VAR_1->active) == 1)
  FUNC_1(&VAR_0->s_active);
}
