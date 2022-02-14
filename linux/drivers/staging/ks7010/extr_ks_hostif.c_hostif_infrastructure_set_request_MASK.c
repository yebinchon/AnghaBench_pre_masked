
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int * body; } ;
struct TYPE_7__ {scalar_t__ phy_type; int authenticate_type; int beacon_lost_count; TYPE_2__ ssid; } ;
struct ks_wlan_private {TYPE_3__ reg; } ;
struct TYPE_8__ {int* body; int size; } ;
struct TYPE_5__ {int * body; int size; } ;
struct hostif_infrastructure_set_request {TYPE_4__ channel_list; void* auth_type; void* beacon_lost_count; TYPE_1__ ssid; int request; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct hostif_infrastructure_set_request* FUNC_2 (int,int) ;
 int FUNC_3 (struct ks_wlan_private*,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct ks_wlan_private*,struct hostif_infrastructure_set_request*,int ) ;

__attribute__((used)) static
void FUNC_6(struct ks_wlan_private *VAR_1, int VAR_2)
{
 struct hostif_infrastructure_set_request *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return;

 FUNC_3(VAR_1, &VAR_3->request);
 VAR_3->ssid.size = VAR_1->reg.ssid.size;
 FUNC_4(&VAR_3->ssid.body[0], &VAR_1->reg.ssid.body[0], VAR_1->reg.ssid.size);
 VAR_3->beacon_lost_count =
     FUNC_0(VAR_1->reg.beacon_lost_count);
 VAR_3->auth_type = FUNC_0(VAR_1->reg.authenticate_type);

 VAR_3->channel_list.body[0] = 1;
 VAR_3->channel_list.body[1] = 8;
 VAR_3->channel_list.body[2] = 2;
 VAR_3->channel_list.body[3] = 9;
 VAR_3->channel_list.body[4] = 3;
 VAR_3->channel_list.body[5] = 10;
 VAR_3->channel_list.body[6] = 4;
 VAR_3->channel_list.body[7] = 11;
 VAR_3->channel_list.body[8] = 5;
 VAR_3->channel_list.body[9] = 12;
 VAR_3->channel_list.body[10] = 6;
 VAR_3->channel_list.body[11] = 13;
 VAR_3->channel_list.body[12] = 7;
 if (VAR_1->reg.phy_type == VAR_0) {
  VAR_3->channel_list.size = 13;
 } else {
  VAR_3->channel_list.body[13] = 14;
  VAR_3->channel_list.size = 14;
 }

 FUNC_5(VAR_1, VAR_3, FUNC_1(sizeof(*VAR_3)));
}
