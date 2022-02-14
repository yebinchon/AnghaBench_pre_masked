
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int dummy; } ;
struct TYPE_2__ {int legacy; } ;
struct station_info {int filled; int signal; TYPE_1__ txrate; } ;
typedef int rssi ;
typedef int linkspeed ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct station_info*,int ,int) ;
 int FUNC_4 (struct usbnet*,int ,int *,int*) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_4,
      struct station_info *VAR_5)
{
 __le32 VAR_6, VAR_7;
 int VAR_8, VAR_9;

 FUNC_3(VAR_5, 0, sizeof(*VAR_5));

 VAR_9 = sizeof(VAR_6);
 VAR_8 = FUNC_4(VAR_4, VAR_3, &VAR_6, &VAR_9);
 if (VAR_8 == 0) {
  VAR_5->txrate.legacy = FUNC_1(VAR_6) / 1000;
  VAR_5->filled |= FUNC_0(VAR_1);
 }

 VAR_9 = sizeof(VAR_7);
 VAR_8 = FUNC_4(VAR_4, VAR_2,
         &VAR_7, &VAR_9);
 if (VAR_8 == 0) {
  VAR_5->signal = FUNC_2(FUNC_1(VAR_7));
  VAR_5->filled |= FUNC_0(VAR_0);
 }
}
