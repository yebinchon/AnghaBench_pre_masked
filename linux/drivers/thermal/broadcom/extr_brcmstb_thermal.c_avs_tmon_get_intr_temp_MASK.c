
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_thermal_priv {int thermal; scalar_t__ tmon_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct brcmstb_thermal_priv *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1->tmon_base + VAR_0);
 return FUNC_1(VAR_1->thermal, VAR_2);
}
