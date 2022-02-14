
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {struct saa7134_dmaqueue* drv_priv; } ;
struct saa7134_dmaqueue {struct saa7134_dev* dev; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int width; int height; } ;
struct saa7134_dev {int width; int height; TYPE_3__ crop_bounds; TYPE_2__ crop_current; TYPE_1__* fmt; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int depth; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct saa7134_dev*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct saa7134_dmaqueue *VAR_6 = VAR_1->drv_priv;
 struct saa7134_dev *VAR_7 = VAR_6->dev;
 int VAR_8 = VAR_7->fmt->depth * VAR_7->width * VAR_7->height >> 3;

 if (VAR_7->width < 48 ||
     VAR_7->height < 32 ||
     VAR_7->width/4 > VAR_7->crop_current.width ||
     VAR_7->height/4 > VAR_7->crop_current.height ||
     VAR_7->width > VAR_7->crop_bounds.width ||
     VAR_7->height > VAR_7->crop_bounds.height)
  return -VAR_0;

 *VAR_2 = FUNC_0(VAR_8, *VAR_2);
 *VAR_3 = 1;
 VAR_4[0] = VAR_8;

 FUNC_1(VAR_7);

 return 0;
}
