
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; size_t index; TYPE_1__ discrete; int type; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int height; int width; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
      struct v4l2_frmsizeenum *VAR_7)
{

 if (VAR_7->pixel_format != VAR_3 &&
     VAR_7->pixel_format != VAR_2)
  return -VAR_0;
 if (VAR_7->index >= FUNC_0(VAR_4))
  return -VAR_0;
 VAR_7->type = VAR_1;
 VAR_7->discrete.width = VAR_4[VAR_7->index].width;
 VAR_7->discrete.height = VAR_4[VAR_7->index].height;

 return 0;
}
