
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_thermal_priv {int thermal; int dev; scalar_t__ tmon_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 long FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, int *VAR_6)
{
 struct brcmstb_thermal_priv *VAR_7 = VAR_5;
 u32 VAR_8;
 long VAR_9;

 VAR_8 = FUNC_0(VAR_7->tmon_base + VAR_0);

 if (!(VAR_8 & VAR_3)) {
  FUNC_2(VAR_7->dev, "reading not valid\n");
  return -VAR_4;
 }

 VAR_8 = (VAR_8 & VAR_1) >> VAR_2;

 VAR_9 = FUNC_1(VAR_7->thermal, VAR_8);
 if (VAR_9 < 0)
  *VAR_6 = 0;
 else
  *VAR_6 = VAR_9;

 return 0;
}
