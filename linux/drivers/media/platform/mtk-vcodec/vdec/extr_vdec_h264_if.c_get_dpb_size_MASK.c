
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vdec_h264_inst {TYPE_2__* vsi; } ;
struct TYPE_3__ {unsigned int dpb_sz; } ;
struct TYPE_4__ {TYPE_1__ dec; } ;


 int FUNC_0 (struct vdec_h264_inst*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct vdec_h264_inst *VAR_0, unsigned int *VAR_1)
{
 *VAR_1 = VAR_0->vsi->dec.dpb_sz;
 FUNC_0(VAR_0, "sz=%d", *VAR_1);
}
