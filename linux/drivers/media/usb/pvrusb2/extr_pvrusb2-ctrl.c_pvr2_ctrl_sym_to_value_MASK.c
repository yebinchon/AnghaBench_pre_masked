
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_5__* hdw; TYPE_4__* info; } ;
struct TYPE_10__ {int big_lock; } ;
struct TYPE_7__ {int valid_bits; int bit_names; } ;
struct TYPE_6__ {int count; int * value_names; } ;
struct TYPE_8__ {TYPE_2__ type_bitmask; TYPE_1__ type_enum; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ def; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (char const*,unsigned int,int*,int*,int ,int ) ;
 int FUNC_4 (char const*,unsigned int,int*,int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct pvr2_ctrl*,int) ;

int FUNC_6(struct pvr2_ctrl *VAR_6,
      const char *VAR_7,unsigned int VAR_8,
      int *VAR_9,int *VAR_10)
{
 int VAR_11 = -VAR_0;
 unsigned int VAR_12;

 *VAR_9 = 0;
 *VAR_10 = 0;

 VAR_12 = 0;
 while ((VAR_12 < VAR_8) && ((VAR_7[VAR_12] <= 32) || (VAR_7[VAR_12] >= 127))) VAR_12++;
 VAR_8 -= VAR_12; VAR_7 += VAR_12;
 VAR_12 = 0;
 while ((VAR_12 < VAR_8) && ((VAR_7[VAR_8-(VAR_12+1)] <= 32) ||
          (VAR_7[VAR_8-(VAR_12+1)] >= 127))) VAR_12++;
 VAR_8 -= VAR_12;

 if (!VAR_8) return -VAR_0;

 FUNC_2(VAR_6->hdw->big_lock); do {
  if (VAR_6->info->type == VAR_5) {
   VAR_11 = FUNC_4(VAR_7,VAR_8,VAR_10,((void*)0),0);
   if (VAR_11 >= 0) {
    VAR_11 = FUNC_5(VAR_6,*VAR_10);
   }
   *VAR_9 = ~0;
  } else if (VAR_6->info->type == VAR_3) {
   VAR_11 = FUNC_4(VAR_7,VAR_8,VAR_10,VAR_1,
       FUNC_0(VAR_1));
   if (VAR_11 == 1) {
    *VAR_10 = *VAR_10 ? !0 : 0;
   } else if (VAR_11 == 0) {
    *VAR_10 = (*VAR_10 & 1) ? !0 : 0;
   }
   *VAR_9 = 1;
  } else if (VAR_6->info->type == VAR_4) {
   VAR_11 = FUNC_4(
    VAR_7,VAR_8,VAR_10,
    VAR_6->info->def.type_enum.value_names,
    VAR_6->info->def.type_enum.count);
   if (VAR_11 >= 0) {
    VAR_11 = FUNC_5(VAR_6,*VAR_10);
   }
   *VAR_9 = ~0;
  } else if (VAR_6->info->type == VAR_2) {
   VAR_11 = FUNC_3(
    VAR_7,VAR_8,VAR_9,VAR_10,
    VAR_6->info->def.type_bitmask.bit_names,
    VAR_6->info->def.type_bitmask.valid_bits);
  }
 } while(0); FUNC_1(VAR_6->hdw->big_lock);
 return VAR_11;
}
