
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_no_addr; int i_goal; int i_inode; } ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int * FUNC_1 (struct gfs2_sbd*,int ,int) ;

void FUNC_2(struct gfs2_inode *VAR_0)
{
 struct gfs2_sbd *VAR_1 = FUNC_0(&VAR_0->i_inode);
 if (!VAR_0->i_goal || FUNC_1(VAR_1, VAR_0->i_goal, 1) == ((void*)0))
  VAR_0->i_goal = VAR_0->i_no_addr;
}
