
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format_mplane {scalar_t__ field; scalar_t__ colorspace; void* height; void* width; int num_planes; int pixelformat; } ;
struct fdp1_fmt {int types; int vsub; int hsub; int num_planes; int fourcc; } ;
struct fdp1_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (unsigned int,int,int) ;
 int FUNC_2 (struct v4l2_pix_format_mplane*,struct fdp1_fmt const*) ;
 struct fdp1_fmt* FUNC_3 (int ) ;
 unsigned int FUNC_4 (void*,int ) ;

__attribute__((used)) static void FUNC_5(struct fdp1_ctx *VAR_11,
    const struct fdp1_fmt **VAR_12,
    struct v4l2_pix_format_mplane *VAR_13)
{
 const struct fdp1_fmt *VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;


 VAR_14 = FUNC_3(VAR_13->pixelformat);
 if (!VAR_14 || !(VAR_14->types & VAR_4))
  VAR_14 = FUNC_3(VAR_10);

 if (VAR_12)
  *VAR_12 = VAR_14;

 VAR_13->pixelformat = VAR_14->fourcc;
 VAR_13->num_planes = VAR_14->num_planes;





 if (VAR_13->field != VAR_9 &&
     VAR_13->field != VAR_7 &&
     !FUNC_0(VAR_13->field))
  VAR_13->field = VAR_8;
 if (VAR_13->colorspace == VAR_5)
  VAR_13->colorspace = VAR_6;







 VAR_15 = FUNC_4(VAR_13->width, VAR_14->hsub);
 VAR_13->width = FUNC_1(VAR_15, VAR_3, VAR_1);

 VAR_16 = FUNC_4(VAR_13->height, VAR_14->vsub);
 if (VAR_13->field == VAR_7)
  VAR_13->height = FUNC_1(VAR_16, VAR_2 / 2, VAR_0 / 2);
 else
  VAR_13->height = FUNC_1(VAR_16, VAR_2, VAR_0);

 FUNC_2(VAR_13, VAR_14);
}
