
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct __vxge_hw_vpath_handle {struct __vxge_hw_virtualpath* vpath; } ;
struct __vxge_hw_virtualpath {TYPE_1__* vp_reg; int * ringh; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_2__ {int rxmac_vcfg0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

enum vxge_hw_status FUNC_2(
   struct __vxge_hw_vpath_handle *VAR_5)
{
 u64 VAR_6;
 struct __vxge_hw_virtualpath *VAR_7;
 enum vxge_hw_status VAR_8 = VAR_1;

 if ((VAR_5 == ((void*)0)) || (VAR_5->vpath->ringh == ((void*)0))) {
  VAR_8 = VAR_0;
  goto exit;
 }

 VAR_7 = VAR_5->vpath;

 VAR_6 = FUNC_0(&VAR_7->vp_reg->rxmac_vcfg0);

 if (VAR_6 & VAR_4) {

  VAR_6 &= ~(VAR_4 |
      VAR_3 |
      VAR_2);

  FUNC_1(VAR_6, &VAR_7->vp_reg->rxmac_vcfg0);
 }
exit:
 return VAR_8;
}
