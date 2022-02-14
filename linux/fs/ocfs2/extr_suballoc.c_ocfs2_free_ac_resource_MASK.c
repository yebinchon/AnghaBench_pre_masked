
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_alloc_context {scalar_t__ ac_which; int * ac_find_loc_priv; int * ac_resv; int * ac_bh; struct inode* ac_inode; } ;
struct inode {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,int) ;

void FUNC_5(struct ocfs2_alloc_context *VAR_1)
{
 struct inode *VAR_2 = VAR_1->ac_inode;

 if (VAR_2) {
  if (VAR_1->ac_which != VAR_0)
   FUNC_4(VAR_2, 1);

  FUNC_1(VAR_2);

  FUNC_2(VAR_2);
  VAR_1->ac_inode = ((void*)0);
 }
 FUNC_0(VAR_1->ac_bh);
 VAR_1->ac_bh = ((void*)0);
 VAR_1->ac_resv = ((void*)0);
 FUNC_3(VAR_1->ac_find_loc_priv);
 VAR_1->ac_find_loc_priv = ((void*)0);
}
