
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int left; int width; int top; int height; } ;
struct TYPE_2__ {int left; int width; int top; int height; } ;
struct v4l2_clip {TYPE_1__ c; } ;
typedef int s32 ;


 int FUNC_0 (char*,int,int ,int,int ,...) ;

int
FUNC_1(struct v4l2_rect *VAR_0, struct v4l2_clip *VAR_1, unsigned int VAR_2, int VAR_3)
{
 s32 VAR_4,VAR_5,VAR_6;
 unsigned int VAR_7;


 VAR_4 = (VAR_0->left + VAR_3) & ~VAR_3;
 VAR_5 = (VAR_0->width) & ~VAR_3;
 if (VAR_4 + VAR_5 > VAR_0->left + VAR_0->width)
  VAR_5 -= VAR_3+1;
 VAR_6 = VAR_4 - VAR_0->left;
 VAR_0->left = VAR_4;
 VAR_0->width = VAR_5;
 FUNC_0("btcx: window align %dx%d+%d+%d [dx=%d]\n",
        VAR_0->width, VAR_0->height, VAR_0->left, VAR_0->top, VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_4 = (VAR_1[VAR_7].c.left-VAR_6) & ~VAR_3;
  VAR_5 = (VAR_1[VAR_7].c.width) & ~VAR_3;
  if (VAR_4 + VAR_5 < VAR_1[VAR_7].c.left-VAR_6 + VAR_1[VAR_7].c.width)
   VAR_5 += VAR_3+1;
  VAR_1[VAR_7].c.left = VAR_4;
  VAR_1[VAR_7].c.width = VAR_5;
  FUNC_0("btcx:   clip align %dx%d+%d+%d\n",
         VAR_1[VAR_7].c.width, VAR_1[VAR_7].c.height,
         VAR_1[VAR_7].c.left, VAR_1[VAR_7].c.top);
 }
 return 0;
}
