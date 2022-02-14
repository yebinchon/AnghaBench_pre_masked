
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct aspeed_sig_expr {int ndescs; struct aspeed_sig_desc* descs; } ;
struct aspeed_sig_desc {size_t ip; } ;
struct aspeed_pinmux_data {int * maps; int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct aspeed_pinmux_data*,size_t) ;
 int FUNC_3 (struct aspeed_sig_desc const*,int,int ) ;
 int FUNC_4 (int ,char*,size_t) ;

__attribute__((used)) static int FUNC_5(struct aspeed_pinmux_data *VAR_0,
       const struct aspeed_sig_expr *VAR_1,
       bool VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->ndescs; VAR_4++) {
  const struct aspeed_sig_desc *VAR_5 = &VAR_1->descs[VAR_4];
  struct regmap *VAR_6;

  VAR_6 = FUNC_2(VAR_0, VAR_5->ip);
  if (FUNC_0(VAR_6)) {
   FUNC_4(VAR_0->dev,
    "Failed to acquire regmap for IP block %d\n",
    VAR_5->ip);
   return FUNC_1(VAR_6);
  }

  VAR_3 = FUNC_3(VAR_5, VAR_2, VAR_0->maps[VAR_5->ip]);
  if (VAR_3 <= 0)
   return VAR_3;
 }

 return 1;
}
