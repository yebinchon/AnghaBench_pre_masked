
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int * body; } ;
struct TYPE_8__ {int * bssid; int channel; TYPE_2__ ssid; } ;
struct ks_wlan_private {TYPE_4__ reg; } ;
struct TYPE_7__ {int size; int * body; } ;
struct TYPE_5__ {int * body; int size; } ;
struct hostif_adhoc_set2_request {int * bssid; TYPE_3__ channel_list; TYPE_1__ ssid; int request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct hostif_adhoc_set2_request* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ks_wlan_private*,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct ks_wlan_private*,struct hostif_adhoc_set2_request*,int ) ;

__attribute__((used)) static
void FUNC_5(struct ks_wlan_private *VAR_2)
{
 struct hostif_adhoc_set2_request *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return;

 FUNC_2(VAR_2, &VAR_3->request);
 VAR_3->ssid.size = VAR_2->reg.ssid.size;
 FUNC_3(&VAR_3->ssid.body[0], &VAR_2->reg.ssid.body[0], VAR_2->reg.ssid.size);

 VAR_3->channel_list.body[0] = VAR_2->reg.channel;
 VAR_3->channel_list.size = 1;
 FUNC_3(VAR_3->bssid, VAR_2->reg.bssid, VAR_0);

 FUNC_4(VAR_2, VAR_3, FUNC_0(sizeof(*VAR_3)));
}
