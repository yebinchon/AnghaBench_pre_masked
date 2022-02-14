
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_vp8_inst {scalar_t__ ctx; } ;
struct mtk_vcodec_ctx {unsigned int irq_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct venc_vp8_inst*,char*,unsigned int) ;
 int FUNC_1 (struct mtk_vcodec_ctx*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct venc_vp8_inst *VAR_2)
{
 unsigned int VAR_3 = 0;
 struct mtk_vcodec_ctx *VAR_4 = (struct mtk_vcodec_ctx *)VAR_2->ctx;

 if (!FUNC_1(VAR_4, VAR_0,
       VAR_1)) {
  VAR_3 = VAR_4->irq_status;
  FUNC_0(VAR_2, "isr return %x", VAR_3);
 }
 return VAR_3;
}
