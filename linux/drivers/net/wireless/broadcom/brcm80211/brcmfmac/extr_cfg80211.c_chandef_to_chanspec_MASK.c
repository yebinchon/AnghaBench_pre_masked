
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cfg80211_chan_def {int center_freq1; int width; TYPE_1__* chan; } ;
struct brcmu_d11inf {int (* encchspec ) (struct brcmu_chan*) ;} ;
struct brcmu_chan {int chspec; int band; int sb; int bw; int chnum; } ;
typedef int s32 ;
struct TYPE_2__ {int center_freq; int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct brcmu_chan*) ;

__attribute__((used)) static u16 FUNC_5(struct brcmu_d11inf *VAR_21,
          struct cfg80211_chan_def *VAR_22)
{
 struct brcmu_chan VAR_23;
 s32 VAR_24;

 FUNC_2(VAR_20, "chandef: control %d center %d width %d\n",
    VAR_22->chan->center_freq, VAR_22->center_freq1, VAR_22->width);
 VAR_23.chnum = FUNC_3(VAR_22->center_freq1);
 VAR_24 = VAR_22->chan->center_freq - VAR_22->center_freq1;
 switch (VAR_22->width) {
 case 133:
 case 132:
  VAR_23.bw = VAR_3;
  FUNC_0(VAR_24 != 0);
  break;
 case 131:
  VAR_23.bw = VAR_4;
  if (VAR_24 > 0)
   VAR_23.sb = VAR_13;
  else
   VAR_23.sb = VAR_6;
  break;
 case 129:
  VAR_23.bw = VAR_5;
  if (VAR_24 == -30)
   VAR_23.sb = VAR_7;
  else if (VAR_24 == -10)
   VAR_23.sb = VAR_10;
  else if (VAR_24 == 10)
   VAR_23.sb = VAR_14;
  else
   VAR_23.sb = VAR_17;
  break;
 case 134:
  VAR_23.bw = VAR_2;
  if (VAR_24 == -70)
   VAR_23.sb = VAR_8;
  else if (VAR_24 == -50)
   VAR_23.sb = VAR_9;
  else if (VAR_24 == -30)
   VAR_23.sb = VAR_11;
  else if (VAR_24 == -10)
   VAR_23.sb = VAR_12;
  else if (VAR_24 == 10)
   VAR_23.sb = VAR_15;
  else if (VAR_24 == 30)
   VAR_23.sb = VAR_16;
  else if (VAR_24 == 50)
   VAR_23.sb = VAR_18;
  else
   VAR_23.sb = VAR_19;
  break;
 case 128:
 case 130:
 case 135:
 default:
  FUNC_1(1);
 }
 switch (VAR_22->chan->band) {
 case 138:
  VAR_23.band = VAR_0;
  break;
 case 137:
  VAR_23.band = VAR_1;
  break;
 case 136:
 default:
  FUNC_1(1);
 }
 VAR_21->encchspec(&VAR_23);

 FUNC_2(VAR_20, "chanspec: 0x%x\n", VAR_23.chspec);
 return VAR_23.chspec;
}
