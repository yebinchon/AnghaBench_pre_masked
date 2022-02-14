
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_channel {int center_freq; } ;
struct brcmu_d11inf {int (* encchspec ) (struct brcmu_chan*) ;} ;
struct brcmu_chan {int chspec; int bw; int chnum; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcmu_chan*) ;

u16 FUNC_2(struct brcmu_d11inf *VAR_1,
   struct ieee80211_channel *VAR_2)
{
 struct brcmu_chan VAR_3;

 VAR_3.chnum = FUNC_0(VAR_2->center_freq);
 VAR_3.bw = VAR_0;
 VAR_1->encchspec(&VAR_3);

 return VAR_3.chspec;
}
