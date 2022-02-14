
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct kbd_state {scalar_t__ level; scalar_t__ mode_bit; } ;
struct TYPE_2__ {scalar_t__ levels; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_0(struct kbd_state *VAR_7, u8 VAR_8)
{
 if (VAR_2.levels != 0) {
  if (VAR_8 != 0)
   VAR_5 = VAR_8;
  if (VAR_7->level == VAR_8)
   return 0;
  VAR_7->level = VAR_8;
  if (VAR_8 != 0 && VAR_7->mode_bit == VAR_1)
   VAR_7->mode_bit = VAR_6;
  else if (VAR_8 == 0 && VAR_7->mode_bit != VAR_1) {
   VAR_6 = VAR_7->mode_bit;
   VAR_7->mode_bit = VAR_1;
  }
  return 0;
 }

 if (VAR_4 > 0 && VAR_8 < VAR_4) {
  if (VAR_8 != 0)
   VAR_5 = VAR_8;
  VAR_7->mode_bit = VAR_3[VAR_8];
  return 0;
 }

 return -VAR_0;
}
