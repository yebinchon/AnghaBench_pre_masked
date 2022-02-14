
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_pix_format {int width; int height; int pixelformat; } ;
struct mcam_camera {struct v4l2_pix_format pix_format; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mcam_camera*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct mcam_camera *VAR_3,
     unsigned VAR_4, dma_addr_t VAR_5)
{
 struct v4l2_pix_format *VAR_6 = &VAR_3->pix_format;
 u32 VAR_7 = VAR_6->width * VAR_6->height;
 dma_addr_t VAR_8, VAR_9 = 0, VAR_10 = 0;

 VAR_8 = VAR_5;

 switch (VAR_6->pixelformat) {
 case 129:
  VAR_9 = VAR_8 + VAR_7;
  VAR_10 = VAR_9 + VAR_7 / 4;
  break;
 case 128:
  VAR_10 = VAR_8 + VAR_7;
  VAR_9 = VAR_10 + VAR_7 / 4;
  break;
 default:
  break;
 }

 FUNC_1(VAR_3, VAR_2 + VAR_4 * 4, VAR_8);
 if (FUNC_0(VAR_6->pixelformat)) {
  FUNC_1(VAR_3, VAR_0 + VAR_4 * 4, VAR_9);
  FUNC_1(VAR_3, VAR_1 + VAR_4 * 4, VAR_10);
 }
}
