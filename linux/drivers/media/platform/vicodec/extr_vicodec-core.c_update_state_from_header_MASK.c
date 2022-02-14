
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwht_cframe_hdr {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int height; int width; } ;
struct TYPE_2__ {void* quantization; void* ycbcr_enc; void* xfer_func; void* colorspace; void* visible_height; void* visible_width; struct fwht_cframe_hdr header; } ;
struct vicodec_ctx {TYPE_1__ state; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct vicodec_ctx *VAR_0)
{
 const struct fwht_cframe_hdr *VAR_1 = &VAR_0->state.header;

 VAR_0->state.visible_width = FUNC_0(VAR_1->width);
 VAR_0->state.visible_height = FUNC_0(VAR_1->height);
 VAR_0->state.colorspace = FUNC_0(VAR_1->colorspace);
 VAR_0->state.xfer_func = FUNC_0(VAR_1->xfer_func);
 VAR_0->state.ycbcr_enc = FUNC_0(VAR_1->ycbcr_enc);
 VAR_0->state.quantization = FUNC_0(VAR_1->quantization);
}
