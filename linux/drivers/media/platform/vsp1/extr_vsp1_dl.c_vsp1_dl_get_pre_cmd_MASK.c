
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_manager {int cmdpool; } ;
struct vsp1_dl_list {struct vsp1_dl_ext_cmd* pre_cmd; struct vsp1_dl_manager* dlm; } ;
struct vsp1_dl_ext_cmd {int dummy; } ;


 struct vsp1_dl_ext_cmd* FUNC_0 (int ) ;

struct vsp1_dl_ext_cmd *FUNC_1(struct vsp1_dl_list *VAR_0)
{
 struct vsp1_dl_manager *VAR_1 = VAR_0->dlm;

 if (VAR_0->pre_cmd)
  return VAR_0->pre_cmd;

 VAR_0->pre_cmd = FUNC_0(VAR_1->cmdpool);

 return VAR_0->pre_cmd;
}
