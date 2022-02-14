
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int width; } ;
struct vivid_dev {int* bitmap_cap; int clipcount_cap; TYPE_2__* clips_cap; TYPE_1__ compose_cap; } ;
struct v4l2_rect {int top; int height; int left; int width; } ;
struct TYPE_4__ {struct v4l2_rect c; } ;



__attribute__((used)) static bool FUNC_0(struct vivid_dev *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_0->bitmap_cap) {





  const u8 *VAR_6 = VAR_0->bitmap_cap;
  unsigned VAR_7 = (VAR_0->compose_cap.width + 7) / 8;

  if (!(VAR_6[VAR_7 * VAR_1 + VAR_2 / 8] & (1 << (VAR_2 & 7))))
   return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0->clipcount_cap; VAR_5++) {




  struct v4l2_rect *VAR_8 = &VAR_0->clips_cap[VAR_5].c;

  if (VAR_3 >= VAR_8->top && VAR_3 < VAR_8->top + VAR_8->height &&
      VAR_4 >= VAR_8->left && VAR_4 < VAR_8->left + VAR_8->width)
   return 0;
 }
 return 1;
}
