
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_thermal_priv {scalar_t__ tmon_base; int dev; } ;
struct avs_tmon_trip {scalar_t__ enable_offs; int enable_mask; } ;
typedef enum avs_tmon_trip_type { ____Placeholder_avs_tmon_trip_type } avs_tmon_trip_type ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct avs_tmon_trip* VAR_0 ;
 int FUNC_2 (int ,char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct brcmstb_thermal_priv *VAR_1,
     enum avs_tmon_trip_type VAR_2, int VAR_3)
{
 struct avs_tmon_trip *VAR_4 = &VAR_0[VAR_2];
 u32 VAR_5 = FUNC_0(VAR_1->tmon_base + VAR_4->enable_offs);

 FUNC_2(VAR_1->dev, "%sable trip, type %d\n", VAR_3 ? "en" : "dis", VAR_2);

 if (VAR_3)
  VAR_5 |= VAR_4->enable_mask;
 else
  VAR_5 &= ~VAR_4->enable_mask;

 FUNC_1(VAR_5, VAR_1->tmon_base + VAR_4->enable_offs);
}
