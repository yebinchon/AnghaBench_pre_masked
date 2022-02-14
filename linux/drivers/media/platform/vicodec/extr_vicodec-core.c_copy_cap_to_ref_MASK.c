
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * buf; } ;
struct v4l2_fwht_state {unsigned int stride; unsigned int ref_stride; unsigned int visible_height; unsigned int coded_height; TYPE_1__ ref_frame; } ;
struct v4l2_fwht_pixfmt_info {int planes_num; int height_div; scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_2, const struct v4l2_fwht_pixfmt_info *VAR_3,
  struct v4l2_fwht_state *VAR_4)
{
 int VAR_5;
 u8 *VAR_6 = VAR_4->ref_frame.buf;
 unsigned int VAR_7 = VAR_4->stride;
 unsigned int VAR_8 = VAR_4->ref_stride;

 for (VAR_5 = 0; VAR_5 < VAR_3->planes_num; VAR_5++) {
  int VAR_9;
  unsigned int VAR_10 = (VAR_5 == 1 || VAR_5 == 2) ?
   VAR_3->height_div : 1;
  const u8 *VAR_11 = VAR_2;
  u8 *VAR_12 = VAR_6;

  if (VAR_3->planes_num == 3 && VAR_5 == 1) {
   VAR_7 /= 2;
   VAR_8 /= 2;
  }

  if (VAR_5 == 1 &&
      (VAR_3->id == VAR_0 ||
       VAR_3->id == VAR_1)) {
   VAR_7 *= 2;
   VAR_8 *= 2;
  }

  for (VAR_9 = 0; VAR_9 < VAR_4->visible_height / VAR_10; VAR_9++) {
   FUNC_0(VAR_12, VAR_11, VAR_8);
   VAR_12 += VAR_8;
   VAR_11 += VAR_7;
  }
  VAR_2 += VAR_7 * (VAR_4->coded_height / VAR_10);
  VAR_6 += VAR_8 * (VAR_4->coded_height / VAR_10);
 }
}
