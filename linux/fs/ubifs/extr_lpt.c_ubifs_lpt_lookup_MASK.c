
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {struct ubifs_lprops* lprops; } ;
struct ubifs_lprops {int flags; int dirty; int free; } ;
struct ubifs_info {int main_first; } ;


 struct ubifs_lprops* FUNC_0 (struct ubifs_pnode*) ;
 scalar_t__ FUNC_1 (struct ubifs_pnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int ,int ,int ) ;
 struct ubifs_pnode* FUNC_3 (struct ubifs_info*,int) ;

struct ubifs_lprops *FUNC_4(struct ubifs_info *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct ubifs_pnode *VAR_6;

 VAR_4 = VAR_3 - VAR_2->main_first;
 VAR_6 = FUNC_3(VAR_2, VAR_4 >> VAR_1);
 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);
 VAR_5 = (VAR_4 & (VAR_0 - 1));
 FUNC_2("LEB %d, free %d, dirty %d, flags %d", VAR_3,
        VAR_6->lprops[VAR_5].free, VAR_6->lprops[VAR_5].dirty,
        VAR_6->lprops[VAR_5].flags);
 return &VAR_6->lprops[VAR_5];
}
