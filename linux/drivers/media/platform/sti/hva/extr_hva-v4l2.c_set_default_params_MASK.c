
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_streaminfo {void* height; void* width; int streamformat; } ;
struct hva_frameinfo {int pixelformat; void* aligned_height; void* aligned_width; int size; void* height; void* width; } ;
struct hva_ctx {int max_stream_size; int quantization; int ycbcr_enc; int xfer_func; int colorspace; struct hva_streaminfo streaminfo; struct hva_frameinfo frameinfo; } ;


 void* FUNC_0 (void*,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,void*,int ) ;

__attribute__((used)) static void FUNC_3(struct hva_ctx *VAR_10)
{
 struct hva_frameinfo *VAR_11 = &VAR_10->frameinfo;
 struct hva_streaminfo *VAR_12 = &VAR_10->streaminfo;

 VAR_11->pixelformat = VAR_6;
 VAR_11->width = VAR_1;
 VAR_11->height = VAR_0;
 VAR_11->aligned_width = FUNC_0(VAR_11->width,
      VAR_3);
 VAR_11->aligned_height = FUNC_0(VAR_11->height,
       VAR_2);
 VAR_11->size = FUNC_2(VAR_11->aligned_width,
         VAR_11->aligned_height,
         VAR_11->pixelformat);

 VAR_12->streamformat = VAR_5;
 VAR_12->width = VAR_1;
 VAR_12->height = VAR_0;

 VAR_10->colorspace = VAR_4;
 VAR_10->xfer_func = VAR_8;
 VAR_10->ycbcr_enc = VAR_9;
 VAR_10->quantization = VAR_7;

 VAR_10->max_stream_size = FUNC_1(VAR_12->width,
           VAR_12->height);
}
