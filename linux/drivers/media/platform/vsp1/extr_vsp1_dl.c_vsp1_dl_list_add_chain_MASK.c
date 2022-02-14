
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_list {int has_chain; int chain; } ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(struct vsp1_dl_list *VAR_0,
      struct vsp1_dl_list *VAR_1)
{
 VAR_0->has_chain = 1;
 FUNC_0(&VAR_1->chain, &VAR_0->chain);
 return 0;
}
