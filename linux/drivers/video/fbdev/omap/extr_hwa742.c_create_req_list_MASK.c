
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_update_window {int x; int y; int width; int height; int format; } ;
struct list_head {int dummy; } ;
struct hwa742_request {int dummy; } ;
struct TYPE_2__ {unsigned int max_transmit_size; } ;


 int FUNC_0 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct omapfb_update_window *VAR_3,
       struct list_head *VAR_4)
{
 struct hwa742_request *VAR_5;
 int VAR_6 = VAR_3->x;
 int VAR_7 = VAR_3->y;
 int VAR_8 = VAR_3->width;
 int VAR_9 = VAR_3->height;
 int VAR_10;
 int VAR_11;

 VAR_11 = VAR_3->format & ~VAR_1;
 VAR_10 = VAR_3->format & VAR_1;

 if (VAR_6 & 1) {
  FUNC_0(VAR_6, VAR_7, 1, VAR_9);
  VAR_8--;
  VAR_6++;
  VAR_11 &= ~VAR_0;
 }
 if (VAR_8 & ~1) {
  unsigned int VAR_12 = VAR_8 & ~1;
  unsigned int VAR_13 = VAR_7;
  unsigned int VAR_14 = VAR_9;

  if (VAR_12 * VAR_9 * 2 > VAR_2) {
   VAR_14 = VAR_2 / (VAR_12 * 2);
   FUNC_0(VAR_6, VAR_13, VAR_12, VAR_14);
   VAR_13 += VAR_14;
   VAR_14 = VAR_9 - VAR_14;
   VAR_11 &= ~VAR_0;
  }

  FUNC_0(VAR_6, VAR_13, VAR_12, VAR_14);
  VAR_6 += VAR_12;
  VAR_8 -= VAR_12;
  VAR_11 &= ~VAR_0;
 }
 if (VAR_8)
  FUNC_0(VAR_6, VAR_7, 1, VAR_9);
}
