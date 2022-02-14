
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {int dummy; } ;
struct ubifs_info {int lpt_first; int lpt_last; scalar_t__ nroot; int main_lebs; } ;
struct ubifs_cnode {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct ubifs_pnode*) ;
 int FUNC_2 (struct ubifs_pnode*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_cnode*,int ,int ) ;
 int FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct ubifs_info*,char*,int) ;
 struct ubifs_pnode* FUNC_9 (struct ubifs_info*,int) ;

int FUNC_10(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 if (!FUNC_6(VAR_1))
  return 0;


 VAR_5 = FUNC_0(VAR_1->main_lebs, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  struct ubifs_pnode *VAR_6;

  VAR_6 = FUNC_9(VAR_1, VAR_4);
  if (FUNC_1(VAR_6))
   return FUNC_2(VAR_6);
  FUNC_3();
 }


 VAR_3 = FUNC_4(VAR_1, (struct ubifs_cnode *)VAR_1->nroot, 0, 0);
 if (VAR_3)
  return VAR_3;


 for (VAR_2 = VAR_1->lpt_first; VAR_2 <= VAR_1->lpt_last; VAR_2++) {
  VAR_3 = FUNC_5(VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_8(VAR_1, "failed at LEB %d", VAR_2);
   return VAR_3;
  }
 }

 FUNC_7("succeeded");
 return 0;
}
