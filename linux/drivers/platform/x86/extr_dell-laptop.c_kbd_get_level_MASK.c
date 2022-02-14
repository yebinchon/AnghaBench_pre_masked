
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kbd_state {int level; scalar_t__ mode_bit; } ;
struct TYPE_2__ {scalar_t__ levels; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct kbd_state *VAR_4)
{
 int VAR_5;

 if (VAR_1.levels != 0)
  return VAR_4->level;

 if (VAR_3 > 0) {
  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
   if (VAR_2[VAR_5] == VAR_4->mode_bit)
    return VAR_5;
  return 0;
 }

 return -VAR_0;
}
