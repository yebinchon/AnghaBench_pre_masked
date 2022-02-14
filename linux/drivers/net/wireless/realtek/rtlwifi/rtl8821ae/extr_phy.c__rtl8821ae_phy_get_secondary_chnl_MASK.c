
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ cur_80_prime_sc; scalar_t__ cur_40_prime_sc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;

__attribute__((used)) static u8 FUNC_2(struct rtl_priv *VAR_12)
{
 struct rtl_phy *VAR_13 = &VAR_12->phy;
 struct rtl_mac *VAR_14 = FUNC_1(VAR_12);
 u8 VAR_15 = 0, VAR_16 = 0;

 if (VAR_13->current_chan_bw == VAR_3) {
  if (VAR_14->cur_80_prime_sc == VAR_4)
   VAR_15 = VAR_10;
  else if (VAR_14->cur_80_prime_sc == VAR_5)
   VAR_15 = VAR_11;
  else
   FUNC_0("SCMapping: Not Correct Primary40MHz Setting\n");

  if ((VAR_14->cur_40_prime_sc == VAR_4) &&
   (VAR_14->cur_80_prime_sc == VAR_0))
   VAR_16 = VAR_7;
  else if ((VAR_14->cur_40_prime_sc == VAR_5) &&
   (VAR_14->cur_80_prime_sc == VAR_0))
   VAR_16 = VAR_6;
  else if ((VAR_14->cur_40_prime_sc == VAR_4) &&
   (VAR_14->cur_80_prime_sc == VAR_1))
   VAR_16 = VAR_9;
  else if ((VAR_14->cur_40_prime_sc == VAR_5) &&
   (VAR_14->cur_80_prime_sc == VAR_1))
   VAR_16 = VAR_8;
  else
   FUNC_0("SCMapping: Not Correct Primary40MHz Setting\n");
 } else if (VAR_13->current_chan_bw == VAR_2) {
  if (VAR_14->cur_40_prime_sc == VAR_5)
   VAR_16 = VAR_9;
  else if (VAR_14->cur_40_prime_sc == VAR_4)
   VAR_16 = VAR_6;
  else
   FUNC_0("SCMapping: Not Correct Primary40MHz Setting\n");
 }
 return (VAR_15 << 4) | VAR_16;
}
