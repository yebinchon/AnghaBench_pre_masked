
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mwifiex_private {TYPE_2__* hidden_chan; int adapter; } ;
struct mwifiex_bssdescriptor {struct mwifiex_bssdescriptor* beacon_buf; int ssid; } ;
struct cfg80211_bss {TYPE_1__* channel; } ;
struct TYPE_4__ {scalar_t__ chan_number; int scan_type; int radio_type; } ;
struct TYPE_3__ {scalar_t__ hw_value; int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mwifiex_bssdescriptor*) ;
 struct mwifiex_bssdescriptor* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mwifiex_private*,struct cfg80211_bss*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mwifiex_private *VAR_5,
          struct cfg80211_bss *VAR_6)
{
 struct mwifiex_bssdescriptor *VAR_7;
 int VAR_8;
 int VAR_9;


 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  goto done;

 if (FUNC_4(&VAR_7->ssid)) {
  FUNC_2(VAR_5->adapter, VAR_2, "found hidden SSID\n");
  for (VAR_9 = 0 ; VAR_9 < VAR_4; VAR_9++) {
   if (VAR_5->hidden_chan[VAR_9].chan_number ==
       VAR_6->channel->hw_value)
    break;

   if (!VAR_5->hidden_chan[VAR_9].chan_number) {
    VAR_5->hidden_chan[VAR_9].chan_number =
     VAR_6->channel->hw_value;
    VAR_5->hidden_chan[VAR_9].radio_type =
     VAR_6->channel->band;
    VAR_5->hidden_chan[VAR_9].scan_type =
     VAR_3;
    break;
   }
  }
 }

done:



 FUNC_0(VAR_7->beacon_buf);
 FUNC_0(VAR_7);
 return 0;
}
