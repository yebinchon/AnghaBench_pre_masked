
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int vgabase; } ;
struct s3fb_info {int chip; TYPE_1__ state; } ;


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
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct s3fb_info *VAR_15)
{
 int VAR_16 = VAR_15->chip;

 if (VAR_16 == VAR_12) {
  u8 VAR_17 = FUNC_0(VAR_15->state.vgabase, 0x30);
  u8 VAR_18 = FUNC_0(VAR_15->state.vgabase, 0x2e);
  u8 VAR_19 = FUNC_0(VAR_15->state.vgabase, 0x2f);

  if ((VAR_17 == 0xE0) || (VAR_17 == 0xE1)) {
   if (VAR_18 == 0x10)
    return VAR_6;
   if (VAR_18 == 0x11) {
    if (! (VAR_19 & 0x40))
     return VAR_7;
    else
     return VAR_8;
   }
  }
 }

 if (VAR_16 == VAR_13) {
  u8 VAR_20 = FUNC_0(VAR_15->state.vgabase, 0x6f);

  if (! (VAR_20 & 0x01))
   return VAR_9;
  else
   return VAR_10;
 }

 if (VAR_16 == VAR_14) {
  u8 VAR_21 = FUNC_0(VAR_15->state.vgabase, 0x6f);

  if (! (VAR_21 & 0x01))
   return VAR_4;
  else
   return VAR_5;
 }

 if (VAR_16 == VAR_3) {
  switch (FUNC_0(VAR_15->state.vgabase, 0x2f)) {
  case 0x00:
   return VAR_0;
  case 0x01:
   return VAR_1;
  case 0x02:
   return VAR_2;
  }
 }

 return VAR_11;
}
