
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vp9_inst {int dummy; } ;
struct vdec_fb {int status; } ;


 int VAR_0 ;
 struct vdec_fb* FUNC_0 (struct vdec_vp9_inst*) ;

__attribute__((used)) static void FUNC_1(struct vdec_vp9_inst *VAR_1, struct vdec_fb **VAR_2)
{

 *VAR_2 = FUNC_0(VAR_1);
 if (*VAR_2)
  (*VAR_2)->status |= VAR_0;
}
