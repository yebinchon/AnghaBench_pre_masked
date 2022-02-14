
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int beacon_time_tsf_bits; } ;
struct il_priv {TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct il_priv*,int) ;
 int FUNC_1 (struct il_priv*,int) ;

u32
FUNC_2(struct il_priv *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6 = VAR_3 * VAR_0;

 if (!VAR_6 || !VAR_2)
  return 0;

 VAR_4 =
     (VAR_2 /
      VAR_6) & (FUNC_0(VAR_1,
         VAR_1->hw_params.
         beacon_time_tsf_bits) >> VAR_1->
     hw_params.beacon_time_tsf_bits);
 VAR_5 =
     (VAR_2 % VAR_6) & FUNC_1(VAR_1,
       VAR_1->hw_params.
       beacon_time_tsf_bits);

 return (VAR_4 << VAR_1->hw_params.beacon_time_tsf_bits) + VAR_5;
}
