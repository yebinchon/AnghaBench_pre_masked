
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format_mplane {int height; int width; int pixelformat; int num_planes; int field; int colorspace; } ;
struct fimc_isp {int dummy; } ;
struct fimc_fmt {int fourcc; int memplanes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct fimc_fmt* FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int ,int,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fimc_isp *VAR_6,
    struct v4l2_pix_format_mplane *VAR_7,
    const struct fimc_fmt **VAR_8)
{
 const struct fimc_fmt *VAR_9;

 VAR_9 = FUNC_0(&VAR_7->pixelformat, ((void*)0), 2);

 if (VAR_8)
  *VAR_8 = VAR_9;

 VAR_7->colorspace = VAR_4;
 VAR_7->field = VAR_5;
 VAR_7->num_planes = VAR_9->memplanes;
 VAR_7->pixelformat = VAR_9->fourcc;




 FUNC_1(&VAR_7->width, VAR_3,
         VAR_2, 3,
         &VAR_7->height, VAR_1,
         VAR_0, 0, 0);
}
