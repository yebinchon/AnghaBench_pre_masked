
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {int dummy; } ;
struct ubifs_nnode {struct ubifs_nbranch* nbranch; } ;
struct ubifs_nbranch {struct ubifs_pnode* pnode; } ;
struct ubifs_info {int dummy; } ;


 struct ubifs_pnode* FUNC_0 (int) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_nnode*,int) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_pnode*) ;

struct ubifs_pnode *FUNC_3(struct ubifs_info *VAR_0,
        struct ubifs_nnode *VAR_1, int VAR_2)
{
 struct ubifs_nbranch *VAR_3;
 struct ubifs_pnode *VAR_4;
 int VAR_5;

 VAR_3 = &VAR_1->nbranch[VAR_2];
 VAR_4 = VAR_3->pnode;
 if (VAR_4)
  return VAR_4;
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return FUNC_0(VAR_5);
 FUNC_2(VAR_0, VAR_3->pnode);
 return VAR_3->pnode;
}
