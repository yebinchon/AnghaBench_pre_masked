
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_v4l2 {unsigned int width; unsigned int height; int vscale; int hscale; struct em28xx_fmt* format; } ;
struct em28xx_fmt {int dummy; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*) ;
 struct em28xx_fmt* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct em28xx*,unsigned int,unsigned int,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_1, unsigned int VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 struct em28xx_fmt *VAR_5;
 struct em28xx_v4l2 *VAR_6 = VAR_1->v4l2;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6->format = VAR_5;
 VAR_6->width = VAR_3;
 VAR_6->height = VAR_4;


 FUNC_2(VAR_1, VAR_6->width, VAR_6->height,
        &VAR_6->hscale, &VAR_6->vscale);

 FUNC_0(VAR_1);

 return 0;
}
