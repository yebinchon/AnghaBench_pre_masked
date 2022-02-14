
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_vpath {int handle; int device_id; } ;
struct macInfo {int macaddr; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,unsigned char*,unsigned char*) ;
 int FUNC_3 (int ,unsigned char*,unsigned char*) ;

__attribute__((used)) static enum vxge_hw_status
FUNC_4(struct vxge_vpath *VAR_3, struct macInfo *VAR_4)
{
 enum vxge_hw_status VAR_5 = VAR_2;
 unsigned char VAR_6[VAR_0];
 unsigned char VAR_7[VAR_0];

 VAR_5 = FUNC_2(VAR_3->handle,
    VAR_7, VAR_6);
 if (VAR_5 != VAR_2) {
  FUNC_1(VAR_1,
   "DA config list entry failed for vpath:%d",
   VAR_3->device_id);
  return VAR_5;
 }

 while (!FUNC_0(VAR_4->macaddr, VAR_7)) {
  VAR_5 = FUNC_3(VAR_3->handle,
    VAR_7, VAR_6);
  if (VAR_5 != VAR_2)
   break;
 }

 return VAR_5;
}
