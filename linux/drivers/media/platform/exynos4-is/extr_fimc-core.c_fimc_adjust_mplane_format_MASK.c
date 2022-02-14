
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_plane_pix_format {int bytesperline; int sizeimage; } ;
struct v4l2_pix_format_mplane {int num_planes; int height; int width; struct v4l2_plane_pix_format* plane_fmt; int pixelformat; int field; int colorspace; } ;
struct fimc_fmt {int memplanes; int colplanes; int* depth; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct fimc_fmt*) ;

void FUNC_3(struct fimc_fmt *VAR_2, u32 VAR_3, u32 VAR_4,
          struct v4l2_pix_format_mplane *VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7;

 VAR_5->colorspace = VAR_0;
 VAR_5->field = VAR_1;
 VAR_5->num_planes = VAR_2->memplanes;
 VAR_5->pixelformat = VAR_2->fourcc;
 VAR_5->height = VAR_4;
 VAR_5->width = VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_planes; ++VAR_7) {
  struct v4l2_plane_pix_format *VAR_8 = &VAR_5->plane_fmt[VAR_7];
  u32 VAR_9 = VAR_8->bytesperline;
  u32 VAR_10;

  if (VAR_2->colplanes > 1 && (VAR_9 == 0 || VAR_9 < VAR_5->width))
   VAR_9 = VAR_5->width;

  if (VAR_2->colplanes == 1 &&
      (VAR_9 == 0 || ((VAR_9 * 8) / VAR_2->depth[VAR_7]) < VAR_5->width))
   VAR_9 = (VAR_5->width * VAR_2->depth[0]) / 8;






  if (VAR_7 == 0)
   VAR_6 = VAR_9;
  else if (VAR_7 == 1 && VAR_2->memplanes == 3)
   VAR_6 /= 2;

  VAR_8->bytesperline = VAR_6;
  VAR_10 = VAR_5->width * VAR_5->height * VAR_2->depth[VAR_7] / 8;


  if (FUNC_2(VAR_2)) {

   u32 VAR_11 = VAR_8->bytesperline * 32;

   VAR_10 = FUNC_1(VAR_10, VAR_11);
  }

  VAR_8->sizeimage = FUNC_0(VAR_10, VAR_8->sizeimage);
 }
}
