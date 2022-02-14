
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {int no_of_vpath; struct vxge_vpath* vpaths; } ;
struct vxge_vpath {scalar_t__ handle; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct vxgedev*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static enum vxge_hw_status FUNC_4(struct vxgedev *VAR_2)
{
 enum vxge_hw_status VAR_3 = VAR_1;
 struct vxge_vpath *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->no_of_vpath; VAR_5++) {
  VAR_4 = &VAR_2->vpaths[VAR_5];
  if (VAR_4->handle) {
   if (FUNC_3(VAR_4->handle) == VAR_1) {
    if (FUNC_0(VAR_2) &&
     FUNC_2(
      VAR_4->handle) != VAR_1) {
     FUNC_1(VAR_0,
      "vxge_hw_vpath_recover_"
      "from_reset failed for vpath: "
      "%d", VAR_5);
     return VAR_3;
    }
   } else {
    FUNC_1(VAR_0,
     "vxge_hw_vpath_reset failed for "
     "vpath:%d", VAR_5);
    return VAR_3;
   }
  }
 }

 return VAR_3;
}
