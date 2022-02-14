
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ phy_type; } ;
struct ks_wlan_private {scalar_t__ scan_ind_count; TYPE_4__ aplist; TYPE_1__ reg; } ;
struct TYPE_7__ {int size; int * body; } ;
struct TYPE_6__ {int* body; int size; } ;
struct hostif_bss_scan_request {unsigned long scan_type; TYPE_3__ ssid; TYPE_2__ channel_list; void* ch_time_max; void* ch_time_min; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct hostif_bss_scan_request* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (struct ks_wlan_private*,struct hostif_bss_scan_request*,int ) ;

__attribute__((used)) static
void FUNC_5(struct ks_wlan_private *VAR_2,
        unsigned long VAR_3, u8 *VAR_4,
        u8 VAR_5)
{
 struct hostif_bss_scan_request *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return;

 VAR_6->scan_type = VAR_3;

 VAR_6->ch_time_min = FUNC_0(110);
 VAR_6->ch_time_max = FUNC_0(130);
 VAR_6->channel_list.body[0] = 1;
 VAR_6->channel_list.body[1] = 8;
 VAR_6->channel_list.body[2] = 2;
 VAR_6->channel_list.body[3] = 9;
 VAR_6->channel_list.body[4] = 3;
 VAR_6->channel_list.body[5] = 10;
 VAR_6->channel_list.body[6] = 4;
 VAR_6->channel_list.body[7] = 11;
 VAR_6->channel_list.body[8] = 5;
 VAR_6->channel_list.body[9] = 12;
 VAR_6->channel_list.body[10] = 6;
 VAR_6->channel_list.body[11] = 13;
 VAR_6->channel_list.body[12] = 7;
 if (VAR_2->reg.phy_type == VAR_0) {
  VAR_6->channel_list.size = 13;
 } else {
  VAR_6->channel_list.body[13] = 14;
  VAR_6->channel_list.size = 14;
 }
 VAR_6->ssid.size = 0;


 if (VAR_5 > 0 && VAR_5 <= 32) {
  VAR_6->ssid.size = VAR_5;
  FUNC_3(&VAR_6->ssid.body[0], VAR_4, VAR_5);
 }

 FUNC_4(VAR_2, VAR_6, FUNC_1(sizeof(*VAR_6)));

 VAR_2->aplist.size = 0;
 VAR_2->scan_ind_count = 0;
}
