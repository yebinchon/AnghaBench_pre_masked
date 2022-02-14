
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tegra_soctherm {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;




 int FUNC_3 (int) ;
 int FUNC_4 (struct tegra_soctherm*,int ) ;
 int FUNC_5 (struct tegra_soctherm*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct tegra_soctherm *VAR_5, int VAR_6)
{
 u8 VAR_7, VAR_8;
 u32 VAR_9;

 switch (VAR_6) {
 case 130:
  VAR_7 = 50;
  break;
 case 129:
  VAR_7 = 75;
  break;
 case 131:
  VAR_7 = 80;
  break;
 case 128:
  return;
 default:
  return;
 }

 VAR_8 = FUNC_3(VAR_7);


 VAR_9 = FUNC_4(VAR_5, FUNC_1(VAR_6));
 VAR_9 = FUNC_2(VAR_9, VAR_3, 0xff);
 VAR_9 = FUNC_2(VAR_9, VAR_4, 0xf);
 FUNC_5(VAR_5, VAR_9, FUNC_1(VAR_6));

 VAR_9 = FUNC_4(VAR_5, FUNC_0(VAR_6));
 VAR_9 = FUNC_2(VAR_9, VAR_2, 1);
 VAR_9 = FUNC_2(VAR_9, VAR_0, VAR_8);
 VAR_9 = FUNC_2(VAR_9, VAR_1, 0xff);
 FUNC_5(VAR_5, VAR_9, FUNC_0(VAR_6));
}
