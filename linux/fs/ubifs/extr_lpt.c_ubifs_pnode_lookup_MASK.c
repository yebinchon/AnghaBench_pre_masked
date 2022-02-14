
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {int dummy; } ;
struct ubifs_nnode {int dummy; } ;
struct ubifs_info {int lpt_hght; struct ubifs_nnode* nroot; } ;


 struct ubifs_pnode* FUNC_0 (struct ubifs_nnode*) ;
 struct ubifs_pnode* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ubifs_nnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_nnode* FUNC_3 (struct ubifs_info*,struct ubifs_nnode*,int) ;
 struct ubifs_pnode* FUNC_4 (struct ubifs_info*,struct ubifs_nnode*,int) ;
 int FUNC_5 (struct ubifs_info*,int *,int ) ;

struct ubifs_pnode *FUNC_6(struct ubifs_info *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 struct ubifs_nnode *VAR_8;

 if (!VAR_2->nroot) {
  VAR_4 = FUNC_5(VAR_2, ((void*)0), 0);
  if (VAR_4)
   return FUNC_1(VAR_4);
 }
 VAR_3 <<= VAR_1;
 VAR_8 = VAR_2->nroot;
 VAR_7 = VAR_2->lpt_hght * VAR_1;
 for (VAR_5 = 1; VAR_5 < VAR_2->lpt_hght; VAR_5++) {
  VAR_6 = ((VAR_3 >> VAR_7) & (VAR_0 - 1));
  VAR_7 -= VAR_1;
  VAR_8 = FUNC_3(VAR_2, VAR_8, VAR_6);
  if (FUNC_2(VAR_8))
   return FUNC_0(VAR_8);
 }
 VAR_6 = ((VAR_3 >> VAR_7) & (VAR_0 - 1));
 return FUNC_4(VAR_2, VAR_8, VAR_6);
}
