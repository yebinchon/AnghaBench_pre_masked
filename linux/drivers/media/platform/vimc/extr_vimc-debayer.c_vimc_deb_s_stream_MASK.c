
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vimc_pix_map {unsigned int bpp; } ;
struct TYPE_2__ {unsigned int width; unsigned int height; int code; } ;
struct vimc_deb_device {unsigned int sink_bpp; int * src_frame; TYPE_1__ sink_fmt; int sink_pix_map; int src_code; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 struct vimc_deb_device* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct vimc_pix_map* FUNC_3 (int ) ;
 int * FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct vimc_deb_device *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2) {
  const struct vimc_pix_map *VAR_4;
  unsigned int VAR_5;

  if (VAR_3->src_frame)
   return 0;


  VAR_4 = FUNC_3(VAR_3->src_code);
  VAR_5 = VAR_3->sink_fmt.width * VAR_3->sink_fmt.height *
    VAR_4->bpp;


  VAR_4 = FUNC_3(VAR_3->sink_fmt.code);
  VAR_3->sink_bpp = VAR_4->bpp;


  VAR_3->sink_pix_map =
   FUNC_2(VAR_3->sink_fmt.code);





  VAR_3->src_frame = FUNC_4(VAR_5);
  if (!VAR_3->src_frame)
   return -VAR_0;

 } else {
  if (!VAR_3->src_frame)
   return 0;

  FUNC_1(VAR_3->src_frame);
  VAR_3->src_frame = ((void*)0);
 }

 return 0;
}
