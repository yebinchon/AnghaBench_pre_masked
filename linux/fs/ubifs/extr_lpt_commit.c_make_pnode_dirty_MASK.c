
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_pnode {size_t iip; TYPE_1__* parent; } ;
struct ubifs_nbranch {int lnum; int offs; } ;
struct ubifs_info {int dummy; } ;
struct TYPE_2__ {struct ubifs_nbranch* nbranch; } ;


 scalar_t__ FUNC_0 (struct ubifs_pnode*) ;
 int FUNC_1 (struct ubifs_pnode*) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_pnode*) ;
 struct ubifs_pnode* FUNC_3 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_0, int VAR_1, int VAR_2,
       int VAR_3)
{
 struct ubifs_pnode *VAR_4;
 struct ubifs_nbranch *VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_5 = &VAR_4->parent->nbranch[VAR_4->iip];
 if (VAR_5->lnum != VAR_2 || VAR_5->offs != VAR_3)
  return 0;
 FUNC_2(VAR_0, VAR_4);
 return 0;
}
