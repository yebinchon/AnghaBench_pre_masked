
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wlandevice {struct hfa384x* priv; } ;
struct TYPE_2__ {int commtallies16; int commtallies32; } ;
struct hfa384x_inf_frame {int framelen; TYPE_1__ info; } ;
struct hfa384x_comm_tallies_32 {int dummy; } ;
struct hfa384x {int tallies; } ;
typedef int __le32 ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wlandevice *VAR_0,
      struct hfa384x_inf_frame *VAR_1)
{
 struct hfa384x *VAR_2 = VAR_0->priv;
 __le16 *VAR_3;
 u32 *VAR_4;
 __le32 *VAR_5;
 int VAR_6;
 int VAR_7;






 VAR_7 = sizeof(struct hfa384x_comm_tallies_32) / sizeof(u32);
 if (VAR_1->framelen > 22) {
  VAR_4 = (u32 *)&VAR_2->tallies;
  VAR_5 = (__le32 *)&VAR_1->info.commtallies32;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_4++, VAR_5++)
   *VAR_4 += FUNC_1(*VAR_5);
 } else {
  VAR_4 = (u32 *)&VAR_2->tallies;
  VAR_3 = (__le16 *)&VAR_1->info.commtallies16;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_4++, VAR_3++)
   *VAR_4 += FUNC_0(*VAR_3);
 }
}
