
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_4__ {char* override_addr; char id; int mac_override; TYPE_1__* ksz_switch; } ;
struct dev_info {TYPE_2__ hw; } ;
struct TYPE_3__ {char* other_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;

__attribute__((used)) static void FUNC_1(struct dev_info *VAR_2, u8 *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5 = VAR_6 = VAR_8 = VAR_7 = 0;
 while (VAR_6 < VAR_0) {
  if (VAR_3[VAR_5]) {
   int VAR_9;

   VAR_7 = 1;
   VAR_9 = FUNC_0(VAR_3[VAR_5]);
   if (VAR_9 >= 0)
    VAR_8 = VAR_8 * 16 + VAR_9;
   else if (':' == VAR_3[VAR_5])
    VAR_7 = 2;
   else
    break;
  } else if (VAR_7)
   VAR_7 = 2;
  else
   break;
  if (2 == VAR_7) {
   if (VAR_1 == VAR_4) {
    VAR_2->hw.override_addr[VAR_6++] = (u8) VAR_8;
    VAR_2->hw.override_addr[5] +=
     VAR_2->hw.id;
   } else {
    VAR_2->hw.ksz_switch->other_addr[VAR_6++] =
     (u8) VAR_8;
    VAR_2->hw.ksz_switch->other_addr[5] +=
     VAR_2->hw.id;
   }
   VAR_8 = VAR_7 = 0;
  }
  VAR_5++;
 }
 if (VAR_0 == VAR_6) {
  if (VAR_1 == VAR_4)
   VAR_2->hw.mac_override = 1;
 }
}
