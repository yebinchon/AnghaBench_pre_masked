
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format_mplane {unsigned int num_planes; unsigned int width; unsigned int height; TYPE_1__* plane_fmt; int reserved; int pixelformat; int ycbcr_enc; int colorspace; int quantization; int xfer_func; int field; } ;
struct sun4i_csi_format {unsigned int num_planes; int hsub; int vsub; unsigned int* bpp; int fourcc; } ;
struct sun4i_csi {int dummy; } ;
struct TYPE_2__ {unsigned int bytesperline; unsigned int sizeimage; int reserved; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 struct sun4i_csi_format* FUNC_6 (int *,int *) ;
 struct sun4i_csi_format* VAR_4 ;

__attribute__((used)) static void FUNC_7(struct sun4i_csi *VAR_5,
          struct v4l2_pix_format_mplane *VAR_6)
{
 const struct sun4i_csi_format *VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_7 = FUNC_6(&VAR_6->pixelformat, ((void*)0));
 if (!VAR_7)
  VAR_7 = &VAR_4[0];

 VAR_6->field = VAR_3;
 VAR_6->colorspace = VAR_2;
 VAR_6->xfer_func = FUNC_2(VAR_6->colorspace);
 VAR_6->ycbcr_enc = FUNC_3(VAR_6->colorspace);
 VAR_6->quantization = FUNC_1(1, VAR_6->colorspace,
         VAR_6->ycbcr_enc);

 VAR_6->num_planes = VAR_7->num_planes;
 VAR_6->pixelformat = VAR_7->fourcc;

 FUNC_5(VAR_6->reserved, 0, sizeof(VAR_6->reserved));


 VAR_9 = FUNC_0(VAR_6->width, VAR_7->hsub);
 VAR_8 = FUNC_0(VAR_6->height, VAR_7->vsub);


 VAR_6->width = FUNC_4(VAR_9, VAR_7->hsub, VAR_1);
 VAR_6->height = FUNC_4(VAR_8, VAR_7->vsub, VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_7->num_planes; VAR_10++) {
  unsigned int VAR_11 = VAR_10 > 0 ? VAR_7->hsub : 1;
  unsigned int VAR_12 = VAR_10 > 0 ? VAR_7->vsub : 1;
  unsigned int VAR_13;

  VAR_13 = VAR_6->width / VAR_11 * VAR_7->bpp[VAR_10] / 8;
  VAR_6->plane_fmt[VAR_10].bytesperline = VAR_13;
  VAR_6->plane_fmt[VAR_10].sizeimage = VAR_13 * VAR_6->height / VAR_12;
  FUNC_5(VAR_6->plane_fmt[VAR_10].reserved, 0,
         sizeof(VAR_6->plane_fmt[VAR_10].reserved));
 }
}
