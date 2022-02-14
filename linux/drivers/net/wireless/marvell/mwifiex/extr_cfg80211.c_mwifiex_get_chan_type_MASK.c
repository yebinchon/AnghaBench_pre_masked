
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_private {int dummy; } ;
struct TYPE_2__ {int chan_width; int chan2_offset; } ;
struct mwifiex_channel_band {TYPE_1__ band_config; } ;




 int FUNC_0 (struct mwifiex_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mwifiex_private*,struct mwifiex_channel_band*) ;

u8 FUNC_2(struct mwifiex_private *VAR_5)
{
 struct mwifiex_channel_band VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, &VAR_6);

 if (!VAR_7) {
  switch (VAR_6.band_config.chan_width) {
  case 129:
   if (FUNC_0(VAR_5))
    return VAR_0;
   else
    return VAR_3;
  case 128:
   if (VAR_6.band_config.chan2_offset ==
       VAR_4)
    return VAR_2;
   else
    return VAR_1;
  default:
   return VAR_0;
  }
 }

 return VAR_0;
}
