
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cfg80211_sched_scan_request {int n_channels; TYPE_1__** channels; } ;
struct brcmf_pno_config_le {int channel_num; int * channel_list; } ;
struct TYPE_2__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cfg80211_sched_scan_request *VAR_3,
      struct brcmf_pno_config_le *VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_4->channel_num);
 u16 VAR_6;
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_3->n_channels; VAR_7++) {
  if (VAR_5 >= VAR_0) {
   VAR_8 = -VAR_1;
   goto done;
  }
  VAR_6 = VAR_3->channels[VAR_7]->hw_value;
  FUNC_0(VAR_2, "[%d] Chan : %u\n", VAR_5, VAR_6);
  VAR_4->channel_list[VAR_5++] = FUNC_1(VAR_6);
 }

 VAR_8 = VAR_5;
done:
 VAR_4->channel_num = FUNC_2(VAR_5);
 return VAR_8;
}
