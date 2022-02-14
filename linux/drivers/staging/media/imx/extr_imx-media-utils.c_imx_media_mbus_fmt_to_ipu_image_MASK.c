
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int height; int width; } ;
struct TYPE_2__ {int height; int width; } ;
struct ipu_image {TYPE_1__ rect; int pix; } ;


 int FUNC_0 (int *,struct v4l2_mbus_framefmt*,int *) ;
 int FUNC_1 (struct ipu_image*,int ,int) ;

int FUNC_2(struct ipu_image *VAR_0,
        struct v4l2_mbus_framefmt *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_2 = FUNC_0(&VAR_0->pix, VAR_1, ((void*)0));
 if (VAR_2)
  return VAR_2;

 VAR_0->rect.width = VAR_1->width;
 VAR_0->rect.height = VAR_1->height;

 return 0;
}
