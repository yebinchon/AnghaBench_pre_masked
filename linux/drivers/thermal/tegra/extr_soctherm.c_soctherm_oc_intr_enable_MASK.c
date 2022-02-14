
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_soctherm {scalar_t__ regs; } ;
typedef enum soctherm_throttle_id { ____Placeholder_soctherm_throttle_id } soctherm_throttle_id ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;




 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tegra_soctherm *VAR_5,
        enum soctherm_throttle_id VAR_6,
        bool VAR_7)
{
 u32 VAR_8;

 if (!VAR_7)
  return;

 VAR_8 = FUNC_1(VAR_5->regs + VAR_0);
 switch (VAR_6) {
 case 131:
  VAR_8 = FUNC_0(VAR_8, VAR_1, 1);
  break;
 case 130:
  VAR_8 = FUNC_0(VAR_8, VAR_2, 1);
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_8, VAR_3, 1);
  break;
 case 128:
  VAR_8 = FUNC_0(VAR_8, VAR_4, 1);
  break;
 default:
  VAR_8 = 0;
  break;
 }
 FUNC_2(VAR_8, VAR_5->regs + VAR_0);
}
