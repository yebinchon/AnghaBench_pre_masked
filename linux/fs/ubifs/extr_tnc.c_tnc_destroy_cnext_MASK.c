
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {struct ubifs_znode* cnext; } ;
struct ubifs_info {scalar_t__ cmt_state; struct ubifs_znode* cnext; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ubifs_znode*) ;
 int FUNC_1 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_2 (struct ubifs_znode*) ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_1)
{
 struct ubifs_znode *VAR_2;

 if (!VAR_1->cnext)
  return;
 FUNC_1(VAR_1, VAR_1->cmt_state == VAR_0);
 VAR_2 = VAR_1->cnext;
 do {
  struct ubifs_znode *VAR_3 = VAR_2;

  VAR_2 = VAR_2->cnext;
  if (FUNC_2(VAR_3))
   FUNC_0(VAR_3);
 } while (VAR_2 && VAR_2 != VAR_1->cnext);
}
