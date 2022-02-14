
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct brcmu_chan {int chspec; int band; scalar_t__ control_ch_num; int sb; int bw; scalar_t__ chnum; } ;


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
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static void FUNC_1(struct brcmu_chan *VAR_13)
{
 u16 VAR_14;

 VAR_13->chnum = (u8)(VAR_13->chspec & VAR_7);
 VAR_13->control_ch_num = VAR_13->chnum;

 switch (VAR_13->chspec & VAR_9) {
 case 129:
  VAR_13->bw = VAR_2;
  VAR_13->sb = VAR_5;
  break;
 case 128:
  VAR_13->bw = VAR_3;
  VAR_14 = VAR_13->chspec & VAR_11;
  if (VAR_14 == VAR_10) {
   VAR_13->sb = VAR_4;
   VAR_13->control_ch_num -= VAR_12;
  } else {
   VAR_13->sb = VAR_6;
   VAR_13->control_ch_num += VAR_12;
  }
  break;
 default:
  FUNC_0(1, "Invalid chanspec 0x%04x\n", VAR_13->chspec);
  break;
 }

 switch (VAR_13->chspec & VAR_8) {
 case 130:
  VAR_13->band = VAR_1;
  break;
 case 131:
  VAR_13->band = VAR_0;
  break;
 default:
  FUNC_0(1, "Invalid chanspec 0x%04x\n", VAR_13->chspec);
  break;
 }
}
