
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int node_num; int cconn; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_super*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_0, void *VAR_1)
{
 struct ocfs2_super *VAR_2 = VAR_1;

 FUNC_0(VAR_2->node_num == VAR_0);

 FUNC_2(VAR_0);

 if (!VAR_2->cconn) {






  return;
 }

 FUNC_1(VAR_2, VAR_0);
}
