
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_nnode {int level; int num; } ;
struct ubifs_info {int lpt_hght; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct ubifs_info *VAR_2,
          struct ubifs_nnode *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_3)
  return 1;
 VAR_6 = (VAR_2->lpt_hght - VAR_3->level) * VAR_1;
 VAR_5 = VAR_3->num ^ (1 << VAR_6);
 VAR_5 |= (VAR_0 + VAR_4) << VAR_6;
 return VAR_5;
}
