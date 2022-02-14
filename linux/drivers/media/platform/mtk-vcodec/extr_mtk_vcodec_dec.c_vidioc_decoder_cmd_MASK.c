
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_decoder_cmd {int cmd; } ;
struct mtk_vcodec_ctx {int m2m_ctx; TYPE_1__* empty_flush_buf; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int vb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,int *) ;
 struct vb2_queue* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vb2_queue*) ;
 int FUNC_6 (struct vb2_queue*) ;
 int FUNC_7 (struct file*,void*,struct v4l2_decoder_cmd*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, void *VAR_4,
    struct v4l2_decoder_cmd *VAR_5)
{
 struct mtk_vcodec_ctx *VAR_6 = FUNC_0(VAR_4);
 struct vb2_queue *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;

 FUNC_1(1, "decoder cmd=%u", VAR_5->cmd);
 VAR_8 = FUNC_3(VAR_6->m2m_ctx,
    VAR_1);
 switch (VAR_5->cmd) {
 case 128:
  VAR_7 = FUNC_3(VAR_6->m2m_ctx,
    VAR_2);
  if (!FUNC_6(VAR_7)) {
   FUNC_1(1, "Output stream is off. No need to flush.");
   return 0;
  }
  if (!FUNC_6(VAR_8)) {
   FUNC_1(1, "Capture stream is off. No need to flush.");
   return 0;
  }
  FUNC_2(VAR_6->m2m_ctx, &VAR_6->empty_flush_buf->vb);
  FUNC_4(VAR_6->m2m_ctx);
  break;

 case 129:
  FUNC_5(VAR_8);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
