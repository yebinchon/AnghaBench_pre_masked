
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_manager {int index; int queued; struct vsp1_device* vsp1; } ;
struct vsp1_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vsp1_device*,int ) ;

__attribute__((used)) static bool FUNC_2(struct vsp1_dl_manager *VAR_1)
{
 struct vsp1_device *VAR_2 = VAR_1->vsp1;

 if (!VAR_1->queued)
  return 0;





 return !!(FUNC_1(VAR_2, FUNC_0(VAR_1->index)) & VAR_0);
}
