
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_h264_inst {TYPE_1__* vsi; } ;
typedef enum vdec_get_param_type { ____Placeholder_vdec_get_param_type } vdec_get_param_type ;
struct TYPE_2__ {int list_free; int list_disp; } ;


 int VAR_0 ;





 int FUNC_0 (struct vdec_h264_inst*,void*) ;
 int FUNC_1 (struct vdec_h264_inst*,void*) ;
 int FUNC_2 (struct vdec_h264_inst*,void*) ;
 int FUNC_3 (struct vdec_h264_inst*,char*,int) ;
 int FUNC_4 (struct vdec_h264_inst*,int *,int,void*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, enum vdec_get_param_type VAR_2,
          void *VAR_3)
{
 struct vdec_h264_inst *VAR_4 = (struct vdec_h264_inst *)VAR_1;

 switch (VAR_2) {
 case 131:
  FUNC_4(VAR_4, &VAR_4->vsi->list_disp, 1, VAR_3);
  break;

 case 129:
  FUNC_4(VAR_4, &VAR_4->vsi->list_free, 0, VAR_3);
  break;

 case 128:
  FUNC_2(VAR_4, VAR_3);
  break;

 case 130:
  FUNC_1(VAR_4, VAR_3);
  break;

 case 132:
  FUNC_0(VAR_4, VAR_3);
  break;

 default:
  FUNC_3(VAR_4, "invalid get parameter type=%d", VAR_2);
  return -VAR_0;
 }

 return 0;
}
