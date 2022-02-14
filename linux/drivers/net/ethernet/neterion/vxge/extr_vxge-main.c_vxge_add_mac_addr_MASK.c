
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {struct vxge_vpath* vpaths; } ;
struct vxge_vpath {int device_id; int handle; } ;
struct macInfo {size_t vpath_no; int macmask; int macaddr; } ;
typedef enum vxge_hw_vpath_mac_addr_add_mode { ____Placeholder_vxge_hw_vpath_mac_addr_add_mode } vxge_hw_vpath_mac_addr_add_mode ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct vxge_vpath*,struct macInfo*) ;

__attribute__((used)) static enum vxge_hw_status
FUNC_4(struct vxgedev *VAR_6, struct macInfo *VAR_7)
{
 enum vxge_hw_status VAR_8 = VAR_3;
 struct vxge_vpath *VAR_9;
 enum vxge_hw_vpath_mac_addr_add_mode VAR_10;

 if (FUNC_0(VAR_7->macaddr))
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_5;

 VAR_9 = &VAR_6->vpaths[VAR_7->vpath_no];
 VAR_8 = FUNC_2(VAR_9->handle, VAR_7->macaddr,
      VAR_7->macmask, VAR_10);
 if (VAR_8 != VAR_3) {
  FUNC_1(VAR_2,
   "DA config add entry failed for vpath:%d",
   VAR_9->device_id);
 } else
  if (VAR_1 == FUNC_3(VAR_9, VAR_7))
   VAR_8 = -VAR_0;

 return VAR_8;
}
