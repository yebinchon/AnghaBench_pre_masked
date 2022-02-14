
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_streaminfo {void* height; void* width; void* quantization; void* ycbcr_enc; void* xfer_func; void* colorspace; void* field; int streamformat; int pixelformat; void* aligned_height; void* aligned_width; int size; } ;
struct delta_frameinfo {void* height; void* width; void* quantization; void* ycbcr_enc; void* xfer_func; void* colorspace; void* field; int streamformat; int pixelformat; void* aligned_height; void* aligned_width; int size; } ;
struct delta_ctx {int max_au_size; struct delta_streaminfo streaminfo; struct delta_streaminfo frameinfo; } ;


 void* FUNC_0 (void*,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (struct delta_streaminfo*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct delta_ctx *VAR_11)
{
 struct delta_frameinfo *VAR_12 = &VAR_11->frameinfo;
 struct delta_streaminfo *VAR_13 = &VAR_11->streaminfo;

 FUNC_3(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->pixelformat = VAR_7;
 VAR_12->width = VAR_2;
 VAR_12->height = VAR_0;
 VAR_12->aligned_width = FUNC_0(VAR_12->width,
      VAR_4);
 VAR_12->aligned_height = FUNC_0(VAR_12->height,
       VAR_3);
 VAR_12->size = FUNC_2(VAR_12->aligned_width,
         VAR_12->aligned_height,
         VAR_12->pixelformat);
 VAR_12->field = VAR_6;
 VAR_12->colorspace = VAR_5;
 VAR_12->xfer_func = VAR_9;
 VAR_12->ycbcr_enc = VAR_10;
 VAR_12->quantization = VAR_8;

 FUNC_3(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->streamformat = VAR_1;
 VAR_13->width = VAR_2;
 VAR_13->height = VAR_0;
 VAR_13->field = VAR_6;
 VAR_13->colorspace = VAR_5;
 VAR_13->xfer_func = VAR_9;
 VAR_13->ycbcr_enc = VAR_10;
 VAR_13->quantization = VAR_8;

 VAR_11->max_au_size = FUNC_1(VAR_13->width,
          VAR_13->height);
}
