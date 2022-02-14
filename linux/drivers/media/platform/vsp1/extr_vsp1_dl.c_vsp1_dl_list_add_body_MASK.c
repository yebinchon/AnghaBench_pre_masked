
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_list {int bodies; } ;
struct vsp1_dl_body {int list; int refcnt; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct vsp1_dl_list *VAR_0, struct vsp1_dl_body *VAR_1)
{
 FUNC_1(&VAR_1->refcnt);

 FUNC_0(&VAR_1->list, &VAR_0->bodies);

 return 0;
}
