
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wlan_bssid_ex {int Rssi; } ;
struct smooth_rssi_data {int total_num; int* elements; size_t index; int total_val; } ;
struct TYPE_5__ {int signal; struct smooth_rssi_data signal_qual_data; } ;
struct TYPE_4__ {int network; } ;
struct TYPE_6__ {TYPE_1__ cur_network; } ;
struct _adapter {TYPE_2__ recvpriv; TYPE_3__ mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (int *,struct wlan_bssid_ex*) ;
 int FUNC_2 (int*,int*,int ) ;
 int FUNC_3 (struct wlan_bssid_ex*) ;

__attribute__((used)) static void FUNC_4(struct wlan_bssid_ex *VAR_2,
      struct wlan_bssid_ex *VAR_3,
      struct _adapter *VAR_4)
{
 u32 VAR_5 = 0, VAR_6;
 struct smooth_rssi_data *VAR_7 = &VAR_4->recvpriv.signal_qual_data;

 if (FUNC_0(&VAR_4->mlmepriv, VAR_1) &&
     FUNC_1(&(VAR_4->mlmepriv.cur_network.network), VAR_3)) {
  if (VAR_4->recvpriv.signal_qual_data.total_num++ >=
      VAR_0) {
   VAR_4->recvpriv.signal_qual_data.total_num =
       VAR_0;
   VAR_5 = VAR_7->elements[VAR_7->index];
   VAR_4->recvpriv.signal_qual_data.total_val -=
     VAR_5;
  }
  VAR_4->recvpriv.signal_qual_data.total_val += VAR_3->Rssi;

  VAR_7->elements[VAR_7->index++] = VAR_3->Rssi;
  if (VAR_4->recvpriv.signal_qual_data.index >=
      VAR_0)
   VAR_4->recvpriv.signal_qual_data.index = 0;

  VAR_6 = VAR_4->recvpriv.signal_qual_data.total_val /
    VAR_4->recvpriv.signal_qual_data.total_num;
  VAR_4->recvpriv.signal = (u8)VAR_6;

  VAR_3->Rssi = VAR_4->recvpriv.signal;
 } else {
  VAR_3->Rssi = (VAR_3->Rssi + VAR_2->Rssi) / 2;
 }
 FUNC_2((u8 *)VAR_2, (u8 *)VAR_3, FUNC_3(VAR_3));
}
