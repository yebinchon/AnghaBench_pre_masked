
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_manager {int index; struct vsp1_device* vsp1; } ;
struct vsp1_dl_list {int dma; struct vsp1_dl_manager* dlm; } ;
struct vsp1_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vsp1_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vsp1_dl_list *VAR_0)
{
 struct vsp1_dl_manager *VAR_1 = VAR_0->dlm;
 struct vsp1_device *VAR_2 = VAR_1->vsp1;
 FUNC_1(VAR_2, FUNC_0(VAR_1->index), VAR_0->dma);
}
