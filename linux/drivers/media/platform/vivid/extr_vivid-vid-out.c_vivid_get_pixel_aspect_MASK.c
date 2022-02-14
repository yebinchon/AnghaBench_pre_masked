
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct vivid_dev {int std_out; TYPE_1__ sink_rect; } ;
typedef enum tpg_pixel_aspect { ____Placeholder_tpg_pixel_aspect } tpg_pixel_aspect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vivid_dev const*) ;
 scalar_t__ FUNC_1 (struct vivid_dev const*) ;

__attribute__((used)) static enum tpg_pixel_aspect FUNC_2(const struct vivid_dev *VAR_4)
{
 if (FUNC_1(VAR_4))
  return (VAR_4->std_out & VAR_3) ?
   VAR_0 : VAR_1;

 if (FUNC_0(VAR_4) &&
     VAR_4->sink_rect.width == 720 && VAR_4->sink_rect.height <= 576)
  return VAR_4->sink_rect.height == 480 ?
   VAR_0 : VAR_1;

 return VAR_2;
}
