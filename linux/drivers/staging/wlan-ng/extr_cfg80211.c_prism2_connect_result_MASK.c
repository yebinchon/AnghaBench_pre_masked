
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct wlandevice {int bssid; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ,int *,int ,int ,int ) ;

void FUNC_1(struct wlandevice *VAR_3, u8 VAR_4)
{
 u16 VAR_5 = VAR_4 ?
       VAR_2 : VAR_1;

 FUNC_0(VAR_3->netdev, VAR_3->bssid,
    ((void*)0), 0, ((void*)0), 0, VAR_5, VAR_0);
}
