
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_thermal_priv {scalar_t__ tmon_base; int thermal; int dev; } ;
struct avs_tmon_trip {scalar_t__ reg_offs; int reg_msk; int reg_shift; } ;
typedef enum avs_tmon_trip_type { ____Placeholder_avs_tmon_trip_type } avs_tmon_trip_type ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int,int) ;
 struct avs_tmon_trip* VAR_1 ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct brcmstb_thermal_priv *VAR_2,
       enum avs_tmon_trip_type VAR_3,
       int VAR_4)
{
 struct avs_tmon_trip *VAR_5 = &VAR_1[VAR_3];
 u32 VAR_6, VAR_7;

 FUNC_3(VAR_2->dev, "set temp %d to %d\n", VAR_3, VAR_4);


 VAR_6 = FUNC_2(VAR_2->thermal, VAR_4,
        VAR_3 == VAR_0);

 VAR_6 <<= VAR_5->reg_shift;
 VAR_6 &= VAR_5->reg_msk;

 VAR_7 = FUNC_0(VAR_2->tmon_base + VAR_5->reg_offs);
 VAR_7 &= ~VAR_5->reg_msk;
 VAR_7 |= VAR_6;
 FUNC_1(VAR_7, VAR_2->tmon_base + VAR_5->reg_offs);
}
