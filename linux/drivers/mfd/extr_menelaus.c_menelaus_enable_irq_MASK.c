
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask2; int mask1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3)
{
 if (VAR_3 > 7) {
  VAR_3 -= 8;
  VAR_2->mask2 &= ~(1 << VAR_3);
  return FUNC_0(VAR_1,
    VAR_2->mask2);
 } else {
  VAR_2->mask1 &= ~(1 << VAR_3);
  return FUNC_0(VAR_0,
    VAR_2->mask1);
 }
}
