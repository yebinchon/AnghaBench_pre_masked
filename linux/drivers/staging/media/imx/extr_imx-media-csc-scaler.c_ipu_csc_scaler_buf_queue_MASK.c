
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct ipu_csc_scaler_ctx {TYPE_1__ fh; } ;


 int FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (int ,int ) ;
 struct ipu_csc_scaler_ctx* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_0)
{
 struct ipu_csc_scaler_ctx *VAR_1 = FUNC_2(VAR_0->vb2_queue);

 FUNC_1(VAR_1->fh.m2m_ctx, FUNC_0(VAR_0));
}
