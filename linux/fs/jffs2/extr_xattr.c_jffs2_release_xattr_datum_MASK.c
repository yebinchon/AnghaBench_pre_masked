
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_xattr_datum {void* node; int xindex; int refcnt; } ;
struct jffs2_sb_info {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct jffs2_xattr_datum*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct jffs2_sb_info *VAR_0, struct jffs2_xattr_datum *VAR_1)
{

 if (FUNC_0(&VAR_1->refcnt) || VAR_1->node != (void *)VAR_1)
  return;

 FUNC_2(&VAR_1->xindex);
 FUNC_1(VAR_1);
}
