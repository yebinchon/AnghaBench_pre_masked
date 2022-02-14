
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_plat_data {int sup_pclk; } ;
struct sh_mmcif_host {int clkdiv_map; int clk; } ;
struct device {struct sh_mmcif_plat_data* platform_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct device*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct sh_mmcif_host*,int ,unsigned int) ;
 int FUNC_7 (struct sh_mmcif_host*,int ,unsigned int) ;
 struct device* FUNC_8 (struct sh_mmcif_host*) ;

__attribute__((used)) static void FUNC_9(struct sh_mmcif_host *VAR_4, unsigned int VAR_5)
{
 struct device *VAR_6 = FUNC_8(VAR_4);
 struct sh_mmcif_plat_data *VAR_7 = VAR_6->platform_data;
 bool VAR_8 = VAR_7 ? VAR_7->sup_pclk : 0;
 unsigned int VAR_9 = FUNC_1(VAR_4->clk);
 unsigned int VAR_10;

 FUNC_6(VAR_4, VAR_3, VAR_1);
 FUNC_6(VAR_4, VAR_3, VAR_0);

 if (!VAR_5)
  return;

 if (VAR_4->clkdiv_map) {
  unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
  int VAR_17;

  VAR_10 = 0;
  VAR_15 = ~0;
  VAR_12 = 0;
  for (VAR_17 = 31; VAR_17 >= 0; VAR_17--) {
   if (!((1 << VAR_17) & VAR_4->clkdiv_map))
    continue;






   VAR_14 = 1 << (VAR_17 + 1);
   VAR_11 = FUNC_2(VAR_4->clk, VAR_5 * VAR_14);
   VAR_13 = VAR_11 / VAR_14;
   VAR_16 = (VAR_13 > VAR_5) ? VAR_13 - VAR_5 : VAR_5 - VAR_13;

   if (VAR_16 <= VAR_15) {
    VAR_12 = VAR_11;
    VAR_10 = VAR_17;
    VAR_15 = VAR_16;
   }
  }

  FUNC_4(VAR_6, "clk %u/%u (%u, 0x%x)\n",
   (VAR_12 / (1 << (VAR_10 + 1))), VAR_5,
   VAR_12, VAR_10);

  FUNC_3(VAR_4->clk, VAR_12);
  VAR_10 = VAR_10 << 16;
 } else if (VAR_8 && VAR_5 == VAR_9) {
  VAR_10 = VAR_2;
 } else {
  VAR_10 = (FUNC_5(FUNC_0(VAR_9, VAR_5) - 1) - 1) << 16;
 }

 FUNC_7(VAR_4, VAR_3, VAR_0 & VAR_10);
 FUNC_7(VAR_4, VAR_3, VAR_1);
}
