
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* planes; } ;
struct TYPE_6__ {TYPE_2__ vb2_buf; } ;
struct go7007_buffer {TYPE_3__ vb; } ;
struct go7007 {int width; int* active_map; int height; size_t* modet_map; } ;
struct TYPE_4__ {int bytesused; } ;


 int FUNC_0 (struct go7007*,struct go7007_buffer*,int) ;
 int FUNC_1 (struct go7007_buffer*,int) ;

__attribute__((used)) static void FUNC_2(struct go7007 *VAR_0, struct go7007_buffer *VAR_1)
{
 u32 *VAR_2 = &VAR_1->vb.vb2_buf.planes[0].bytesused;
 unsigned VAR_3[4] = { 0, 0, 0, 0 };
 u32 VAR_4 = 0;
 unsigned VAR_5 = (VAR_0->width + 7) >> 3;
 unsigned VAR_6, VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 216; ++VAR_8)
  FUNC_1(VAR_1, VAR_0->active_map[VAR_8]);
 for (VAR_7 = 0; VAR_7 < VAR_0->height / 16; VAR_7++) {
  for (VAR_6 = 0; VAR_6 < VAR_0->width / 16; VAR_6++) {
   if (!(VAR_0->active_map[VAR_7 * VAR_5 + (VAR_6 >> 3)] & (1 << (VAR_6 & 7))))
    continue;
   VAR_3[VAR_0->modet_map[VAR_7 * (VAR_0->width / 16) + VAR_6]]++;
  }
 }
 VAR_4 = ((VAR_3[0] > 0) << 0) |
    ((VAR_3[1] > 0) << 1) |
    ((VAR_3[2] > 0) << 2) |
    ((VAR_3[3] > 0) << 3);
 *VAR_2 -= 216;
 FUNC_0(VAR_0, VAR_1, VAR_4);
}
