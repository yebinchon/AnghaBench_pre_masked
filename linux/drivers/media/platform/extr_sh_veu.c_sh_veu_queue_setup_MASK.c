
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct TYPE_3__ {unsigned int height; } ;
struct sh_veu_vfmt {unsigned int bytesperline; TYPE_2__* fmt; TYPE_1__ frame; } ;
struct sh_veu_dev {int dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int depth; unsigned int ydepth; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 struct sh_veu_vfmt* FUNC_1 (struct sh_veu_dev*,int ) ;
 struct sh_veu_dev* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_2,
         unsigned int *VAR_3, unsigned int *VAR_4,
         unsigned int VAR_5[], struct device *VAR_6[])
{
 struct sh_veu_dev *VAR_7 = FUNC_2(VAR_2);
 struct sh_veu_vfmt *VAR_8 = FUNC_1(VAR_7, VAR_2->type);
 unsigned int VAR_9 = *VAR_3;
 unsigned int VAR_10 = VAR_8->bytesperline * VAR_8->frame.height *
  VAR_8->fmt->depth / VAR_8->fmt->ydepth;

 if (VAR_9 < 2)
  *VAR_3 = VAR_9 = 2;

 if (VAR_10 * VAR_9 > VAR_1) {
  VAR_9 = VAR_1 / VAR_10;
  *VAR_3 = VAR_9;
 }

 if (*VAR_4)
  return VAR_5[0] < VAR_10 ? -VAR_0 : 0;

 *VAR_4 = 1;
 VAR_5[0] = VAR_10;

 FUNC_0(VAR_7->dev, "get %d buffer(s) of size %d each.\n", VAR_9, VAR_10);

 return 0;
}
