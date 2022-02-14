
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int index; TYPE_1__* vsp1; } ;
struct vsp1_rwpf {TYPE_2__ entity; int dlm; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct vsp1_dl_body*,int ,int ) ;
 int FUNC_3 (struct vsp1_dl_list*,struct vsp1_dl_list*) ;
 struct vsp1_dl_list* FUNC_4 (int ) ;
 struct vsp1_dl_body* FUNC_5 (struct vsp1_dl_list*) ;

__attribute__((used)) static int FUNC_6(struct vsp1_rwpf *VAR_1,
      struct vsp1_dl_list *VAR_2)
{
 unsigned int VAR_3 = VAR_1->entity.index;
 struct vsp1_dl_list *VAR_4;
 struct vsp1_dl_body *VAR_5;

 VAR_4 = FUNC_4(VAR_1->dlm);
 if (!VAR_4) {
  FUNC_1(VAR_1->entity.vsp1->dev,
   "Failed to obtain a dl list, disabling writeback\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_5(VAR_4);
 FUNC_2(VAR_5, FUNC_0(VAR_3), 0);
 FUNC_3(VAR_2, VAR_4);

 return 0;
}
