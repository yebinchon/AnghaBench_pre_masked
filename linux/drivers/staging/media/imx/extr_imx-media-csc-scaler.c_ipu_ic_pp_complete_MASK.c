
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {scalar_t__ sequence; } ;
struct ipu_image_convert_run {scalar_t__ status; } ;
struct ipu_csc_scaler_priv {int m2m_dev; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct ipu_csc_scaler_ctx {TYPE_1__ fh; int sequence; struct ipu_csc_scaler_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipu_image_convert_run*) ;
 int FUNC_1 (struct vb2_v4l2_buffer*,struct vb2_v4l2_buffer*,int) ;
 int FUNC_2 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ipu_image_convert_run *VAR_2, void *VAR_3)
{
 struct ipu_csc_scaler_ctx *VAR_4 = VAR_3;
 struct ipu_csc_scaler_priv *VAR_5 = VAR_4->priv;
 struct vb2_v4l2_buffer *VAR_6, *VAR_7;

 VAR_6 = FUNC_5(VAR_4->fh.m2m_ctx);
 VAR_7 = FUNC_3(VAR_4->fh.m2m_ctx);

 FUNC_1(VAR_6, VAR_7, 1);

 VAR_6->sequence = VAR_4->sequence++;
 VAR_7->sequence = VAR_6->sequence;

 FUNC_2(VAR_6, VAR_2->status ? VAR_1 :
       VAR_0);
 FUNC_2(VAR_7, VAR_2->status ? VAR_1 :
       VAR_0);

 FUNC_4(VAR_5->m2m_dev, VAR_4->fh.m2m_ctx);
 FUNC_0(VAR_2);
}
