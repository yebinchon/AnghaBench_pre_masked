
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct ipu_csc_scaler_ctx {TYPE_1__ fh; scalar_t__ sequence; int * icc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 struct ipu_csc_scaler_ctx* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_5(struct vb2_queue *VAR_2)
{
 struct ipu_csc_scaler_ctx *VAR_3 = FUNC_4(VAR_2);
 struct vb2_v4l2_buffer *VAR_4;

 if (VAR_3->icc) {
  FUNC_0(VAR_3->icc);
  VAR_3->icc = ((void*)0);
 }

 VAR_3->sequence = 0;

 if (VAR_2->type == VAR_0) {
  while ((VAR_4 = FUNC_3(VAR_3->fh.m2m_ctx)))
   FUNC_1(VAR_4, VAR_1);
 } else {
  while ((VAR_4 = FUNC_2(VAR_3->fh.m2m_ctx)))
   FUNC_1(VAR_4, VAR_1);
 }
}
