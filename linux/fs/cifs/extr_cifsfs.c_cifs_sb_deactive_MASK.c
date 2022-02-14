
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct cifs_sb_info {int active; } ;


 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct super_block*) ;

void
FUNC_3(struct super_block *VAR_0)
{
 struct cifs_sb_info *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(&VAR_1->active))
  FUNC_2(VAR_0);
}
