
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format_mplane {int pixelformat; int num_planes; int width; unsigned int height; int * plane_fmt; } ;
struct ceu_fmt {int bpp; } ;
struct ceu_device {int dummy; } ;
 int FUNC_0 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct ceu_device *VAR_0,
     const struct ceu_fmt *VAR_1,
     struct v4l2_pix_format_mplane *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 switch (VAR_2->pixelformat) {
 case 129:
 case 131:
 case 128:
 case 130:
  VAR_2->num_planes = 1;
  VAR_3 = VAR_2->width * VAR_1->bpp / 8;
  VAR_4 = VAR_2->height * VAR_3;
  FUNC_0(&VAR_2->plane_fmt[0], VAR_3, VAR_4);
  break;

 case 135:
 case 133:
  VAR_2->num_planes = 2;
  VAR_3 = VAR_2->width;
  VAR_4 = VAR_2->height * VAR_2->width;
  FUNC_0(&VAR_2->plane_fmt[0], VAR_3, VAR_4);
  FUNC_0(&VAR_2->plane_fmt[1], VAR_3, VAR_4 / 2);
  break;

 case 134:
 case 132:
 default:
  VAR_2->num_planes = 2;
  VAR_3 = VAR_2->width;
  VAR_4 = VAR_2->height * VAR_2->width;
  FUNC_0(&VAR_2->plane_fmt[0], VAR_3, VAR_4);
  FUNC_0(&VAR_2->plane_fmt[1], VAR_3, VAR_4);
  break;
 }
}
