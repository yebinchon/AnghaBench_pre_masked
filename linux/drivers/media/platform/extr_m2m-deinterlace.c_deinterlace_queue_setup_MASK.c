
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct device {int dummy; } ;
struct deinterlace_q_data {int width; int height; TYPE_1__* fmt; } ;
struct deinterlace_ctx {int dev; } ;
struct TYPE_2__ {int fourcc; } ;




 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 struct deinterlace_q_data* FUNC_1 (int ) ;
 struct deinterlace_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_0,
    unsigned int *VAR_1, unsigned int *VAR_2,
    unsigned int VAR_3[], struct device *VAR_4[])
{
 struct deinterlace_ctx *VAR_5 = FUNC_2(VAR_0);
 struct deinterlace_q_data *VAR_6;
 unsigned int VAR_7, VAR_8 = *VAR_1;

 VAR_6 = FUNC_1(VAR_0->type);

 switch (VAR_6->fmt->fourcc) {
 case 129:
  VAR_7 = VAR_6->width * VAR_6->height * 3 / 2;
  break;
 case 128:
 default:
  VAR_7 = VAR_6->width * VAR_6->height * 2;
 }

 *VAR_2 = 1;
 *VAR_1 = VAR_8;
 VAR_3[0] = VAR_7;

 FUNC_0(VAR_5->dev, "get %d buffer(s) of size %d each.\n", VAR_8, VAR_7);

 return 0;
}
