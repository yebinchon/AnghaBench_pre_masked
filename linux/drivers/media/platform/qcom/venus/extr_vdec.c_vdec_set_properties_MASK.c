
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vdec_controls {scalar_t__ post_loop_deb_mode; } ;
struct TYPE_2__ {struct vdec_controls dec; } ;
struct venus_inst {TYPE_1__ controls; } ;
struct hfi_enable {int enable; } ;


 int VAR_0 ;
 int FUNC_0 (struct venus_inst*,int ,struct hfi_enable*) ;

__attribute__((used)) static int FUNC_1(struct venus_inst *VAR_1)
{
 struct vdec_controls *VAR_2 = &VAR_1->controls.dec;
 struct hfi_enable VAR_3 = { .enable = 1 };
 u32 VAR_4;
 int VAR_5;

 if (VAR_2->post_loop_deb_mode) {
  VAR_4 = VAR_0;
  VAR_5 = FUNC_0(VAR_1, VAR_4, &VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
