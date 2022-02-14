
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tegra_tcu {int dummy; } ;


 unsigned int FUNC_0 (int ,char const) ;
 int FUNC_1 (struct tegra_tcu*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct tegra_tcu *VAR_0, const char *VAR_1,
       unsigned int VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4 = 0;
 bool VAR_5 = 0;
 u32 VAR_6 = 0;

 while (VAR_4 < VAR_2) {
  if (VAR_5) {
   VAR_6 |= FUNC_0(VAR_3++, '\n');
   VAR_5 = 0;
   VAR_4++;
  } else if (VAR_1[VAR_4] == '\n') {
   VAR_6 |= FUNC_0(VAR_3++, '\r');
   VAR_5 = 1;
  } else {
   VAR_6 |= FUNC_0(VAR_3++, VAR_1[VAR_4++]);
  }

  if (VAR_3 == 3) {
   FUNC_1(VAR_0, VAR_6, 3);
   VAR_6 = VAR_3 = 0;
  }
 }

 if (VAR_3)
  FUNC_1(VAR_0, VAR_6, VAR_3);
}
