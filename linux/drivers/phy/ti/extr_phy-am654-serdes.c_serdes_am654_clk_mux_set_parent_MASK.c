
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct serdes_am654_clk_mux {unsigned int reg; int clk_id; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,char*,char const*) ;
 char* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct regmap*,unsigned int,size_t*) ;
 int FUNC_3 (struct regmap*,unsigned int,size_t,size_t) ;
 int** VAR_5 ;
 struct serdes_am654_clk_mux* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_6, u8 VAR_7)
{
 struct serdes_am654_clk_mux *VAR_8 = FUNC_4(VAR_6);
 struct regmap *VAR_9 = VAR_8->regmap;
 const char *VAR_10 = FUNC_1(VAR_6);
 unsigned int VAR_11 = VAR_8->reg;
 int VAR_12 = VAR_8->clk_id;
 int VAR_13[VAR_3];
 const int *VAR_14;
 u32 VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;


 FUNC_2(VAR_9, VAR_11, &VAR_15);
 VAR_15 &= VAR_0;
 VAR_15 >>= VAR_1;

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
  VAR_13[VAR_17] = VAR_5[VAR_15][VAR_17];


 VAR_13[VAR_12] = VAR_7;


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = VAR_5[VAR_15];
  VAR_16 = 1;
  for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
   if (VAR_13[VAR_17] != VAR_14[VAR_17]) {
    VAR_16 = 0;
    break;
   }
  }

  if (VAR_16)
   break;
 }

 if (!VAR_16) {




  FUNC_0(1, "Failed to find the parent of %s clock\n", VAR_10);
  return -VAR_2;
 }

 VAR_15 <<= VAR_1;
 VAR_18 = FUNC_3(VAR_9, VAR_11, VAR_0,
     VAR_15);

 return VAR_18;
}
