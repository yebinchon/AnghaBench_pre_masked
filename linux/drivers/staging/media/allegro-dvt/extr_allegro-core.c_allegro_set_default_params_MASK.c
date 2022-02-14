
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_channel {int height; int stride; int sizeimage_raw; int gop_size; int level; int cpb_size; void* bitrate_peak; void* bitrate; int bitrate_mode; int width; int sizeimage_encoded; int profile; int codec; int pixelformat; int xfer_func; int quantization; int ycbcr_enc; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct allegro_channel *VAR_11)
{
 VAR_11->width = VAR_2;
 VAR_11->height = VAR_1;
 VAR_11->stride = FUNC_3(VAR_11->width, 32);

 VAR_11->colorspace = VAR_3;
 VAR_11->ycbcr_enc = VAR_10;
 VAR_11->quantization = VAR_8;
 VAR_11->xfer_func = VAR_9;

 VAR_11->pixelformat = VAR_7;
 VAR_11->sizeimage_raw = VAR_11->stride * VAR_11->height * 3 / 2;

 VAR_11->codec = VAR_6;
 VAR_11->profile = VAR_5;
 VAR_11->level =
  FUNC_4(VAR_11->width, VAR_11->height);
 VAR_11->sizeimage_encoded =
  FUNC_0(VAR_11->width, VAR_11->height);

 VAR_11->bitrate_mode = VAR_4;
 VAR_11->bitrate = FUNC_1(VAR_11->level);
 VAR_11->bitrate_peak = FUNC_1(VAR_11->level);
 VAR_11->cpb_size = FUNC_2(VAR_11->level);
 VAR_11->gop_size = VAR_0;
}
