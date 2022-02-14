
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* g; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_8__ {int min_val; int max_val; } ;
struct TYPE_7__ {int min_val; int max_val; } ;
struct b43_txpower_lo_control {TYPE_4__ bbatt_list; TYPE_3__ rfatt_list; } ;
struct TYPE_5__ {struct b43_txpower_lo_control* lo_control; } ;


 int FUNC_0 (int,int const,int const) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0,
         int *VAR_1, int *VAR_2)
{
 int VAR_3 = *VAR_2;
 int VAR_4 = *VAR_1;
 struct b43_txpower_lo_control *VAR_5 = VAR_0->phy.g->lo_control;





 const int VAR_6 = VAR_5->rfatt_list.min_val;
 const int VAR_7 = VAR_5->rfatt_list.max_val;
 const int VAR_8 = VAR_5->bbatt_list.min_val;
 const int VAR_9 = VAR_5->bbatt_list.max_val;

 while (1) {
  if (VAR_3 > VAR_7 && VAR_4 > VAR_9 - 4)
   break;
  if (VAR_3 < VAR_6 && VAR_4 < VAR_8 + 4)
   break;
  if (VAR_4 > VAR_9 && VAR_3 > VAR_7 - 1)
   break;
  if (VAR_4 < VAR_8 && VAR_3 < VAR_6 + 1)
   break;

  if (VAR_4 > VAR_9) {
   VAR_4 -= 4;
   VAR_3 += 1;
   continue;
  }
  if (VAR_4 < VAR_8) {
   VAR_4 += 4;
   VAR_3 -= 1;
   continue;
  }
  if (VAR_3 > VAR_7) {
   VAR_3 -= 1;
   VAR_4 += 4;
   continue;
  }
  if (VAR_3 < VAR_6) {
   VAR_3 += 1;
   VAR_4 -= 4;
   continue;
  }
  break;
 }

 *VAR_2 = FUNC_0(VAR_3, VAR_6, VAR_7);
 *VAR_1 = FUNC_0(VAR_4, VAR_8, VAR_9);
}
