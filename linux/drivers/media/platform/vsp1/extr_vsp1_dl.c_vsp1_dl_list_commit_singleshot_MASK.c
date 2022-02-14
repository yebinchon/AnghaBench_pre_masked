
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_manager {struct vsp1_dl_list* active; } ;
struct vsp1_dl_list {struct vsp1_dl_manager* dlm; } ;


 int FUNC_0 (struct vsp1_dl_list*) ;

__attribute__((used)) static void FUNC_1(struct vsp1_dl_list *VAR_0)
{
 struct vsp1_dl_manager *VAR_1 = VAR_0->dlm;






 FUNC_0(VAR_0);

 VAR_1->active = VAR_0;
}
