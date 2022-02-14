
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* hwb; void* ld; void* misc; void* sys; void* hwd; void* cm; void* top; } ;
struct vdec_vp8_inst {int ctx; TYPE_1__ reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vdec_vp8_inst *VAR_7)
{
 VAR_7->reg_base.top = FUNC_0(VAR_7->ctx, VAR_6);
 VAR_7->reg_base.cm = FUNC_0(VAR_7->ctx, VAR_0);
 VAR_7->reg_base.hwd = FUNC_0(VAR_7->ctx, VAR_2);
 VAR_7->reg_base.sys = FUNC_0(VAR_7->ctx, VAR_5);
 VAR_7->reg_base.misc = FUNC_0(VAR_7->ctx, VAR_4);
 VAR_7->reg_base.ld = FUNC_0(VAR_7->ctx, VAR_3);
 VAR_7->reg_base.hwb = FUNC_0(VAR_7->ctx, VAR_1);
}
