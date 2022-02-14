
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct em28xx_v4l2 {int vbi_width; int vbi_height; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct em28xx* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct em28xx *VAR_6 = FUNC_0(VAR_1);
 struct em28xx_v4l2 *VAR_7 = VAR_6->v4l2;
 unsigned long VAR_8 = VAR_7->vbi_width * VAR_7->vbi_height * 2;

 if (*VAR_2 < 2)
  *VAR_2 = 2;

 if (*VAR_3) {
  if (VAR_4[0] < VAR_8)
   return -VAR_0;
  VAR_8 = VAR_4[0];
 }

 *VAR_3 = 1;
 VAR_4[0] = VAR_8;

 return 0;
}
