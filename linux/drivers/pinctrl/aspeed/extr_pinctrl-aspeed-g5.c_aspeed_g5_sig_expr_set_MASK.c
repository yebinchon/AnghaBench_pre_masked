
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct aspeed_sig_expr {int ndescs; struct aspeed_sig_desc* descs; } ;
struct aspeed_sig_desc {int enable; int disable; int mask; size_t ip; scalar_t__ reg; } ;
struct aspeed_pinmux_data {int * maps; int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (int) ;
 struct regmap* FUNC_4 (struct aspeed_pinmux_data*,size_t) ;
 int FUNC_5 (struct aspeed_pinmux_data*,struct aspeed_sig_expr const*,int) ;
 int FUNC_6 (int ,char*,size_t) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct aspeed_pinmux_data *VAR_5,
      const struct aspeed_sig_expr *VAR_6,
      bool VAR_7)
{
 int VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6->ndescs; VAR_9++) {
  const struct aspeed_sig_desc *VAR_10 = &VAR_6->descs[VAR_9];
  u32 VAR_11 = VAR_7 ? VAR_10->enable : VAR_10->disable;
  u32 VAR_12 = (VAR_11 << FUNC_3(VAR_10->mask));
  struct regmap *VAR_13;

  VAR_13 = FUNC_4(VAR_5, VAR_10->ip);
  if (FUNC_1(VAR_13)) {
   FUNC_6(VAR_5->dev,
    "Failed to acquire regmap for IP block %d\n",
    VAR_10->ip);
   return FUNC_2(VAR_13);
  }
  if (VAR_10->ip == VAR_0 && VAR_10->reg == VAR_3 &&
      !(VAR_10->mask & (FUNC_0(21) | FUNC_0(22))))
   continue;

  if (VAR_10->ip == VAR_0 && VAR_10->reg == VAR_4)
   continue;


  if (VAR_10->ip == VAR_0 && VAR_10->reg == VAR_3) {
   u32 VAR_14 = ~VAR_12 & VAR_10->mask;

   if (VAR_14) {
    VAR_8 = FUNC_8(VAR_5->maps[VAR_10->ip],
         VAR_2, VAR_14);
    if (VAR_8 < 0)
     return VAR_8;
   }
  }

  VAR_8 = FUNC_7(VAR_5->maps[VAR_10->ip], VAR_10->reg,
      VAR_10->mask, VAR_12);

  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_8)
  return -VAR_1;

 return 0;
}
