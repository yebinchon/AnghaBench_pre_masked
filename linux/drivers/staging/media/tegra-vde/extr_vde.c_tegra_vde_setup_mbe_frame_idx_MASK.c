
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tegra_vde {int mbe; } ;


 int FUNC_0 (struct tegra_vde*) ;
 int FUNC_1 (struct tegra_vde*,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tegra_vde *VAR_0,
      unsigned int VAR_1,
      bool VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_1(VAR_0, 0xD0000000 | (0 << 23), VAR_0->mbe, 0x80);
 FUNC_1(VAR_0, 0xD0200000 | (0 << 23), VAR_0->mbe, 0x80);

 VAR_7 = FUNC_0(VAR_0);
 if (VAR_7)
  return VAR_7;

 if (!VAR_2)
  return 0;

 for (VAR_6 = 0, VAR_5 = 1; VAR_6 < VAR_1; VAR_6++, VAR_5++) {
  FUNC_1(VAR_0, 0xD0000000 | (VAR_5 << 23),
     VAR_0->mbe, 0x80);
  FUNC_1(VAR_0, 0xD0200000 | (VAR_5 << 23),
     VAR_0->mbe, 0x80);

  VAR_3 |= VAR_5 << (6 * (VAR_6 % 4));

  if (VAR_6 % 4 == 3 || VAR_6 == VAR_1 - 1) {
   VAR_4 = 0xC0000000;
   VAR_4 |= (VAR_6 >> 2) << 24;
   VAR_4 |= VAR_3;

   FUNC_1(VAR_0, VAR_4, VAR_0->mbe, 0x80);

   VAR_7 = FUNC_0(VAR_0);
   if (VAR_7)
    return VAR_7;

   VAR_3 = 0;
  }
 }

 return 0;
}
