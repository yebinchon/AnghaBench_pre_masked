
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int width; int bytesperline; int height; } ;
struct TYPE_8__ {TYPE_3__ fmt; } ;
struct TYPE_6__ {unsigned int width; unsigned int height; unsigned int left; unsigned int top; } ;
struct tpg_data {unsigned int* bytesperline; } ;
struct vivid_dev {scalar_t__ clipcount_cap; scalar_t__ overlay_cap_field; int overlay_cap_left; int overlay_cap_top; TYPE_4__ fb_cap; TYPE_2__ compose_cap; int * bitmap_cap; void* fb_vbase_cap; struct tpg_data tpg; } ;
struct TYPE_5__ {scalar_t__ field; int vb2_buf; } ;
struct vivid_buffer {TYPE_1__ vb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,void*,unsigned int) ;
 int FUNC_2 (struct tpg_data*,int ) ;
 int FUNC_3 (struct vivid_dev*,int,int,int,int) ;
 void* FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct vivid_dev *VAR_2, struct vivid_buffer *VAR_3)
{
 struct tpg_data *VAR_4 = &VAR_2->tpg;
 unsigned VAR_5 = FUNC_2(VAR_4, 0) / 2;
 void *VAR_6 = VAR_2->fb_vbase_cap;
 void *VAR_7 = FUNC_4(&VAR_3->vb.vb2_buf, 0);
 unsigned VAR_8 = VAR_2->compose_cap.width;
 unsigned VAR_9 = VAR_2->compose_cap.height;
 unsigned VAR_10 = VAR_4->bytesperline[0];

 bool VAR_11 = VAR_2->bitmap_cap == ((void*)0) && VAR_2->clipcount_cap == 0;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;





 if (FUNC_0(VAR_5 == 0))
  return;
 if ((VAR_2->overlay_cap_field == VAR_1 ||
      VAR_2->overlay_cap_field == VAR_0) &&
     VAR_2->overlay_cap_field != VAR_3->vb.field)
  return;

 VAR_7 += VAR_2->compose_cap.left * VAR_5 + VAR_2->compose_cap.top * VAR_10;
 VAR_12 = VAR_2->overlay_cap_left;
 VAR_14 = VAR_8;
 if (VAR_12 < 0) {
  VAR_15 = -VAR_12;
  VAR_14 = VAR_14 - VAR_15;
  VAR_12 = 0;
 } else {
  VAR_14 = VAR_2->fb_cap.fmt.width - VAR_12;
  if (VAR_14 > VAR_8)
   VAR_14 = VAR_8;
 }
 if (VAR_14 <= 0)
  return;
 if (VAR_2->overlay_cap_top >= 0)
  VAR_6 += VAR_2->overlay_cap_top * VAR_2->fb_cap.fmt.bytesperline;
 for (VAR_13 = VAR_2->overlay_cap_top;
      VAR_13 < VAR_2->overlay_cap_top + (int)VAR_9;
      VAR_13++, VAR_7 += VAR_10) {
  int VAR_16;

  if (VAR_13 < 0 || VAR_13 > VAR_2->fb_cap.fmt.height)
   continue;
  if (VAR_11) {
   FUNC_1(VAR_6 + VAR_12 * VAR_5,
          VAR_7 + VAR_15 * VAR_5, VAR_14 * VAR_5);
   VAR_6 += VAR_2->fb_cap.fmt.bytesperline;
   continue;
  }
  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
   if (!FUNC_3(VAR_2, VAR_13 - VAR_2->overlay_cap_top,
           VAR_16 + VAR_15, VAR_13, VAR_16 + VAR_12))
    continue;
   FUNC_1(VAR_6 + (VAR_16 + VAR_12) * VAR_5,
          VAR_7 + (VAR_16 + VAR_15) * VAR_5,
          VAR_5);
  }
  VAR_6 += VAR_2->fb_cap.fmt.bytesperline;
 }
}
