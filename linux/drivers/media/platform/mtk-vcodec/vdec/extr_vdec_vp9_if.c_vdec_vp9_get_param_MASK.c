
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vp9_inst {int dummy; } ;
typedef enum vdec_get_param_type { ____Placeholder_vdec_get_param_type } vdec_get_param_type ;


 int VAR_0 ;





 unsigned int VAR_1 ;
 int FUNC_0 (struct vdec_vp9_inst*,void*) ;
 int FUNC_1 (struct vdec_vp9_inst*,void*) ;
 int FUNC_2 (struct vdec_vp9_inst*,void*) ;
 int FUNC_3 (struct vdec_vp9_inst*,void*) ;
 int FUNC_4 (struct vdec_vp9_inst*,char*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, enum vdec_get_param_type VAR_3,
         void *VAR_4)
{
 struct vdec_vp9_inst *VAR_5 = (struct vdec_vp9_inst *)VAR_2;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 131:
  FUNC_1(VAR_5, VAR_4);
  break;
 case 129:
  FUNC_2(VAR_5, VAR_4);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_4);
  break;
 case 130:
  *((unsigned int *)VAR_4) = VAR_1;
  break;
 case 132:
  FUNC_0(VAR_5, VAR_4);
  break;
 default:
  FUNC_4(VAR_5, "not supported param type %d", VAR_3);
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
