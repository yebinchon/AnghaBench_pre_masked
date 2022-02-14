
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwht_cframe_hdr {void* quantization; void* ycbcr_enc; void* xfer_func; void* colorspace; void* flags; void* height; void* width; void* version; int magic2; int magic1; } ;
struct TYPE_2__ {struct fwht_cframe_hdr header; } ;
struct vicodec_ctx {TYPE_1__ state; } ;
struct v4l2_ctrl_fwht_params {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int flags; int height; int width; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct vicodec_ctx *VAR_2,
      const struct v4l2_ctrl_fwht_params *VAR_3)
{
 struct fwht_cframe_hdr *VAR_4 = &VAR_2->state.header;

 VAR_4->magic1 = VAR_0;
 VAR_4->magic2 = VAR_1;
 VAR_4->version = FUNC_0(VAR_3->version);
 VAR_4->width = FUNC_0(VAR_3->width);
 VAR_4->height = FUNC_0(VAR_3->height);
 VAR_4->flags = FUNC_0(VAR_3->flags);
 VAR_4->colorspace = FUNC_0(VAR_3->colorspace);
 VAR_4->xfer_func = FUNC_0(VAR_3->xfer_func);
 VAR_4->ycbcr_enc = FUNC_0(VAR_3->ycbcr_enc);
 VAR_4->quantization = FUNC_0(VAR_3->quantization);
}
