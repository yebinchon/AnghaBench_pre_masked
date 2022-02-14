
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {struct ubifs_znode* cnext; } ;
struct ubifs_info {int clean_zn_cnt; struct ubifs_znode* cnext; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ubifs_znode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct ubifs_znode*) ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_1)
{
 struct ubifs_znode *VAR_2, *VAR_3;

 VAR_3 = VAR_1->cnext;
 do {
  VAR_2 = VAR_3;
  VAR_3 = VAR_2->cnext;
  if (FUNC_2(VAR_2))
   FUNC_1(VAR_2);
  else {
   VAR_2->cnext = ((void*)0);
   FUNC_0(&VAR_1->clean_zn_cnt);
   FUNC_0(&VAR_0);
  }
 } while (VAR_3 != VAR_1->cnext);
}
