
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_live_connection {int * oc_conn; int oc_list; } ;


 int FUNC_0 (struct ocfs2_live_connection*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ocfs2_live_connection *VAR_1)
{
 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->oc_list);
 VAR_1->oc_conn = ((void*)0);
 FUNC_3(&VAR_0);

 FUNC_0(VAR_1);
}
