
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vicodec_q_data {int coded_width; int coded_height; int sizeimage; struct v4l2_fwht_pixfmt_info const* info; void* visible_height; void* visible_width; } ;
struct fwht_cframe_hdr {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int height; int width; int flags; } ;
struct TYPE_2__ {void* quantization; void* ycbcr_enc; void* xfer_func; void* colorspace; struct fwht_cframe_hdr header; } ;
struct vicodec_ctx {TYPE_1__ state; int is_stateless; } ;
struct v4l2_fwht_pixfmt_info {int sizeimage_mult; int sizeimage_div; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct vicodec_q_data* FUNC_1 (struct vicodec_ctx*,int ) ;
 struct v4l2_fwht_pixfmt_info* FUNC_2 (struct fwht_cframe_hdr const*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (void*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct vicodec_ctx *VAR_3)
{
 struct vicodec_q_data *VAR_4 = FUNC_1(VAR_3,
        VAR_2);
 const struct fwht_cframe_hdr *VAR_5 = &VAR_3->state.header;
 const struct v4l2_fwht_pixfmt_info *VAR_6 = FUNC_2(VAR_5);
 unsigned int VAR_7 = FUNC_3(VAR_5->flags);
 unsigned int VAR_8 = (VAR_7 & VAR_1) ? 1 : 2;
 unsigned int VAR_9 = (VAR_7 & VAR_0) ? 1 : 2;





 FUNC_0(VAR_3->is_stateless);

 VAR_4->info = VAR_6;
 VAR_4->visible_width = FUNC_3(VAR_5->width);
 VAR_4->visible_height = FUNC_3(VAR_5->height);
 VAR_4->coded_width = FUNC_4(VAR_4->visible_width, VAR_8);
 VAR_4->coded_height = FUNC_4(VAR_4->visible_height,
         VAR_9);

 VAR_4->sizeimage = VAR_4->coded_width * VAR_4->coded_height *
  VAR_4->info->sizeimage_mult / VAR_4->info->sizeimage_div;
 VAR_3->state.colorspace = FUNC_3(VAR_5->colorspace);

 VAR_3->state.xfer_func = FUNC_3(VAR_5->xfer_func);
 VAR_3->state.ycbcr_enc = FUNC_3(VAR_5->ycbcr_enc);
 VAR_3->state.quantization = FUNC_3(VAR_5->quantization);
}
