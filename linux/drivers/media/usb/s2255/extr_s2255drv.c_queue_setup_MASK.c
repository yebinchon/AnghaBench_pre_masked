
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct s2255_vc {int width; int height; TYPE_1__* fmt; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int depth; } ;


 unsigned int VAR_0 ;
 struct s2255_vc* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct s2255_vc *VAR_6 = FUNC_0(VAR_1);
 if (*VAR_2 < VAR_0)
  *VAR_2 = VAR_0;
 *VAR_3 = 1;
 VAR_4[0] = VAR_6->width * VAR_6->height * (VAR_6->fmt->depth >> 3);
 return 0;
}
