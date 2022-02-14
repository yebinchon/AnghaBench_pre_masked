
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct __vxge_hw_vpath_handle {struct __vxge_hw_virtualpath* vpath; } ;
struct __vxge_hw_virtualpath {TYPE_2__* vp_reg; TYPE_1__* hldev; int * ringh; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_4__ {int rxmac_vcfg0; } ;
struct TYPE_3__ {int access_rights; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

enum vxge_hw_status FUNC_2(
   struct __vxge_hw_vpath_handle *VAR_7)
{
 u64 VAR_8;
 struct __vxge_hw_virtualpath *VAR_9;
 enum vxge_hw_status VAR_10 = VAR_2;

 if ((VAR_7 == ((void*)0)) || (VAR_7->vpath->ringh == ((void*)0))) {
  VAR_10 = VAR_1;
  goto exit;
 }

 VAR_9 = VAR_7->vpath;


 if (!(VAR_9->hldev->access_rights &
  VAR_0))
  return VAR_2;

 VAR_8 = FUNC_0(&VAR_9->vp_reg->rxmac_vcfg0);

 if (!(VAR_8 & VAR_6)) {

  VAR_8 |= VAR_6 |
    VAR_5 |
    VAR_4 |
    VAR_3;

  FUNC_1(VAR_8, &VAR_9->vp_reg->rxmac_vcfg0);
 }
exit:
 return VAR_10;
}
