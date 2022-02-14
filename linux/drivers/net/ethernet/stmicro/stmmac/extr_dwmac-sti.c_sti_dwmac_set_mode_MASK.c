
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_dwmac {int interface; int speed; int (* fix_retime_src ) (struct sti_dwmac*,int ) ;scalar_t__ gmac_en; int ctrl_reg; struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (struct regmap*,int ,int ,int ) ;
 int FUNC_1 (struct sti_dwmac*,int ) ;

__attribute__((used)) static int FUNC_2(struct sti_dwmac *VAR_7)
{
 struct regmap *VAR_8 = VAR_7->regmap;
 int VAR_9 = VAR_7->interface;
 u32 VAR_10 = VAR_7->ctrl_reg;
 u32 VAR_11;

 if (VAR_7->gmac_en)
  FUNC_0(VAR_8, VAR_10, VAR_3, VAR_0);

 FUNC_0(VAR_8, VAR_10, VAR_4, VAR_6[VAR_9]);

 VAR_11 = (VAR_9 == VAR_5) ? 0 : VAR_1;
 FUNC_0(VAR_8, VAR_10, VAR_2, VAR_11);

 VAR_7->fix_retime_src(VAR_7, VAR_7->speed);

 return 0;
}
