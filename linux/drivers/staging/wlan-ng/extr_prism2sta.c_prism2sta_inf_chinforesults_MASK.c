
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlandevice {struct hfa384x* priv; } ;
struct TYPE_5__ {int scanchannels; struct hfa384x_ch_info_result_sub* result; } ;
struct TYPE_6__ {TYPE_1__ chinforesult; } ;
struct hfa384x_inf_frame {TYPE_2__ info; } ;
struct hfa384x_ch_info_result_sub {int chid; int active; int pnl; int anl; } ;
struct TYPE_7__ {int scanchannels; struct hfa384x_ch_info_result_sub* result; } ;
struct TYPE_8__ {unsigned int count; int done; TYPE_3__ results; } ;
struct hfa384x {TYPE_4__ channel_info; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int,char*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct wlandevice *VAR_3,
     struct hfa384x_inf_frame *VAR_4)
{
 struct hfa384x *VAR_5 = VAR_3->priv;
 unsigned int VAR_6, VAR_7;

 VAR_5->channel_info.results.scanchannels =
     VAR_4->info.chinforesult.scanchannels;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct hfa384x_ch_info_result_sub *VAR_8;
  struct hfa384x_ch_info_result_sub *VAR_9;
  int VAR_10;

  if (!(VAR_5->channel_info.results.scanchannels & (1 << VAR_6)))
   continue;

  VAR_8 = &VAR_4->info.chinforesult.result[VAR_7];
  VAR_10 = VAR_8->chid - 1;

  if (VAR_10 < 0 || VAR_10 >= VAR_1)
   continue;

  VAR_9 = &VAR_5->channel_info.results.result[VAR_10];
  VAR_9->chid = VAR_10;
  VAR_9->anl = VAR_8->anl;
  VAR_9->pnl = VAR_8->pnl;
  VAR_9->active = VAR_8->active;

  FUNC_1("chinfo: channel %d, %s level (avg/peak)=%d/%d dB, pcf %d\n",
    VAR_10 + 1,
    (VAR_9->active & VAR_0)
    ? "signal" : "noise",
    VAR_9->anl, VAR_9->pnl,
    (VAR_9->active & VAR_2)
    ? 1 : 0);
  VAR_7++;
 }
 FUNC_0(&VAR_5->channel_info.done, 2);

 VAR_5->channel_info.count = VAR_7;
}
