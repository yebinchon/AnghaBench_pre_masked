
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {scalar_t__ curr_band; int lna_gain; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static u8 FUNC_2(struct rt2x00_dev *VAR_14)
{
 u8 VAR_15;

 if (VAR_14->curr_band == VAR_1) {
  if (FUNC_0(VAR_14, VAR_2) ||
      FUNC_0(VAR_14, VAR_3) ||
      FUNC_0(VAR_14, VAR_4) ||
      FUNC_0(VAR_14, VAR_5) ||
      FUNC_0(VAR_14, VAR_6) ||
      FUNC_0(VAR_14, VAR_7) ||
      FUNC_0(VAR_14, VAR_8) ||
      FUNC_0(VAR_14, VAR_10) ||
      FUNC_0(VAR_14, VAR_11) ||
      FUNC_0(VAR_14, VAR_12) ||
      FUNC_0(VAR_14, VAR_13))
   VAR_15 = 0x1c + (2 * VAR_14->lna_gain);
  else
   VAR_15 = 0x2e + VAR_14->lna_gain;
 } else {
  if (FUNC_0(VAR_14, VAR_8) ||
      FUNC_0(VAR_14, VAR_9))
   VAR_15 = 0x20 + (VAR_14->lna_gain * 5) / 3;
  else if (FUNC_0(VAR_14, VAR_12))
   VAR_15 = 0x24 + (2 * VAR_14->lna_gain);
  else {
   if (!FUNC_1(VAR_0, &VAR_14->flags))
    VAR_15 = 0x32 + (VAR_14->lna_gain * 5) / 3;
   else
    VAR_15 = 0x3a + (VAR_14->lna_gain * 5) / 3;
  }
 }

 return VAR_15;
}
