
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wlandevice {int hostwep; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct wlandevice *VAR_2, u32 *VAR_3,
        int VAR_4, u32 VAR_5)
{
 if (VAR_4) {
  if (VAR_2->hostwep & VAR_5)
   *VAR_3 = VAR_1;
  else
   *VAR_3 = VAR_0;
 } else {
  VAR_2->hostwep &= ~VAR_5;
  if (*VAR_3 == VAR_1)
   VAR_2->hostwep |= VAR_5;
 }
}
