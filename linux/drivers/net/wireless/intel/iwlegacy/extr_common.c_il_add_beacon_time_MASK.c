
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int beacon_time_tsf_bits; } ;
struct il_priv {TYPE_1__ hw_params; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct il_priv*,int) ;
 scalar_t__ FUNC_2 (struct il_priv*,int) ;

__le32
FUNC_3(struct il_priv *VAR_1, u32 VAR_2, u32 VAR_3,
     u32 VAR_4)
{
 u32 VAR_5 = VAR_2 & FUNC_2(VAR_1,
            VAR_1->hw_params.
            beacon_time_tsf_bits);
 u32 VAR_6 = VAR_3 & FUNC_2(VAR_1,
       VAR_1->hw_params.
       beacon_time_tsf_bits);
 u32 VAR_7 = VAR_4 * VAR_0;
 u32 VAR_8 = (VAR_2 & FUNC_1(VAR_1,
         VAR_1->hw_params.
         beacon_time_tsf_bits)) +
     (VAR_3 & FUNC_1(VAR_1,
           VAR_1->hw_params.
           beacon_time_tsf_bits));

 if (VAR_5 > VAR_6)
  VAR_8 += VAR_5 - VAR_6;
 else if (VAR_5 < VAR_6) {
  VAR_8 += VAR_7 + VAR_5 - VAR_6;
  VAR_8 += (1 << VAR_1->hw_params.beacon_time_tsf_bits);
 } else
  VAR_8 += (1 << VAR_1->hw_params.beacon_time_tsf_bits);

 return FUNC_0(VAR_8);
}
