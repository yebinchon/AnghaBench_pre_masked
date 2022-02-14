
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_manager {struct vsp1_dl_list* queued; struct vsp1_dl_list* pending; } ;
struct vsp1_dl_list {int flags; struct vsp1_dl_manager* dlm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vsp1_dl_list*) ;
 int FUNC_2 (struct vsp1_dl_list*) ;
 scalar_t__ FUNC_3 (struct vsp1_dl_manager*) ;

__attribute__((used)) static void FUNC_4(struct vsp1_dl_list *VAR_1)
{
 struct vsp1_dl_manager *VAR_2 = VAR_1->dlm;
 if (FUNC_3(VAR_2)) {
  FUNC_0(VAR_2->pending &&
   (VAR_2->pending->flags & VAR_0));
  FUNC_1(VAR_2->pending);
  VAR_2->pending = VAR_1;
  return;
 }





 FUNC_2(VAR_1);

 FUNC_1(VAR_2->queued);
 VAR_2->queued = VAR_1;
}
