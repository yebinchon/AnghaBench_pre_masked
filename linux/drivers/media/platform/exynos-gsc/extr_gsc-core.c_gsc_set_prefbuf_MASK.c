
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int y; int cb; int cr; } ;
struct gsc_frame {int* payload; TYPE_2__ addr; TYPE_1__* fmt; } ;
struct gsc_dev {int dummy; } ;
struct TYPE_3__ {int num_planes; } ;


 scalar_t__ FUNC_0 (struct gsc_frame*,int,int*,int*) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char*,int,int,int,int) ;

void FUNC_4(struct gsc_dev *VAR_0, struct gsc_frame *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;
 VAR_2 = VAR_3 = VAR_4 = VAR_5 = 0;

 VAR_2 = VAR_1->addr.y;
 VAR_3 = VAR_1->payload[0];
 if (VAR_1->fmt->num_planes == 2) {
  VAR_4 = VAR_1->addr.cb;
  VAR_5 = VAR_1->payload[1];
 } else if (VAR_1->fmt->num_planes == 3) {
  u32 VAR_6, VAR_7, VAR_8, VAR_9;
  u32 VAR_10, VAR_11;
  u32 VAR_12, VAR_13;

  VAR_12 = FUNC_2(VAR_1->addr.y, VAR_1->addr.cb, VAR_1->addr.cr);
  if (FUNC_0(VAR_1, VAR_12, &VAR_7, &VAR_6))
   return;
  VAR_13 = FUNC_1(VAR_1->addr.y, VAR_1->addr.cb, VAR_1->addr.cr);
  if (FUNC_0(VAR_1, VAR_13, &VAR_11, &VAR_10))
   return;

  VAR_9 = 3 - (VAR_7 + VAR_11);
  if (VAR_9 == 0)
   VAR_8 = VAR_1->addr.y;
  else if (VAR_9 == 1)
   VAR_8 = VAR_1->addr.cb;
  else if (VAR_9 == 2)
   VAR_8 = VAR_1->addr.cr;
  else
   return;

  VAR_2 = VAR_6;
  if (VAR_8 + VAR_1->payload[VAR_9] - VAR_6 >
      VAR_10 + VAR_1->payload[VAR_11] - VAR_8) {
   VAR_3 = VAR_1->payload[VAR_7];
   VAR_4 = VAR_8;
   VAR_5 = VAR_10 +
     VAR_1->payload[VAR_11] - VAR_8;
  } else {
   VAR_3 = VAR_8 +
     VAR_1->payload[VAR_9] - VAR_6;
   VAR_4 = VAR_10;
   VAR_5 = VAR_1->payload[VAR_11];
  }
 }
 FUNC_3("f_addr = 0x%08x, f_len = %d, s_addr = 0x%08x, s_len = %d\n",
   VAR_2, VAR_3, VAR_4, VAR_5);
}
