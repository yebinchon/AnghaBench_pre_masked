
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_thermal_priv {int thermal; scalar_t__ tmon_base; } ;
struct avs_tmon_trip {int reg_msk; int reg_shift; scalar_t__ reg_offs; } ;
typedef enum avs_tmon_trip_type { ____Placeholder_avs_tmon_trip_type } avs_tmon_trip_type ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 struct avs_tmon_trip* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct brcmstb_thermal_priv *VAR_1,
      enum avs_tmon_trip_type VAR_2)
{
 struct avs_tmon_trip *VAR_3 = &VAR_0[VAR_2];
 u32 VAR_4 = FUNC_0(VAR_1->tmon_base + VAR_3->reg_offs);

 VAR_4 &= VAR_3->reg_msk;
 VAR_4 >>= VAR_3->reg_shift;

 return FUNC_1(VAR_1->thermal, VAR_4);
}
