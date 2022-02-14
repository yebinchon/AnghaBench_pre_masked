
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int * body; } ;
struct TYPE_6__ {TYPE_2__ ssid; int channel; } ;
struct ks_wlan_private {TYPE_3__ reg; } ;
struct TYPE_4__ {int * body; int size; } ;
struct hostif_adhoc_set_request {TYPE_1__ ssid; int channel; int request; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct hostif_adhoc_set_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ks_wlan_private*,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct ks_wlan_private*,struct hostif_adhoc_set_request*,int ) ;

__attribute__((used)) static
void FUNC_6(struct ks_wlan_private *VAR_1)
{
 struct hostif_adhoc_set_request *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return;

 FUNC_3(VAR_1, &VAR_2->request);
 VAR_2->channel = FUNC_0(VAR_1->reg.channel);
 VAR_2->ssid.size = VAR_1->reg.ssid.size;
 FUNC_4(&VAR_2->ssid.body[0], &VAR_1->reg.ssid.body[0], VAR_1->reg.ssid.size);

 FUNC_5(VAR_1, VAR_2, FUNC_1(sizeof(*VAR_2)));
}
