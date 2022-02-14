
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gigaset_capi_appl {struct gigaset_capi_appl* bcnext; } ;
struct bc_state {int aplock; int apconnstate; struct gigaset_capi_appl* ap; } ;


 int VAR_0 ;
 int FUNC_0 (struct bc_state*,struct gigaset_capi_appl*) ;
 int FUNC_1 (struct bc_state*,struct gigaset_capi_appl*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct bc_state *VAR_1)
{
 struct gigaset_capi_appl *VAR_2;
 unsigned long VAR_3;






 FUNC_2(&VAR_1->aplock, VAR_3);
 while (VAR_1->ap != ((void*)0)) {
  VAR_2 = VAR_1->ap;
  VAR_1->ap = VAR_2->bcnext;
  FUNC_3(&VAR_1->aplock, VAR_3);
  FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_1, VAR_2, 0);
  FUNC_2(&VAR_1->aplock, VAR_3);
 }
 VAR_1->apconnstate = VAR_0;
 FUNC_3(&VAR_1->aplock, VAR_3);
}
