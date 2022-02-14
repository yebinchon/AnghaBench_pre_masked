
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_sig_expr {int ndescs; struct aspeed_sig_desc* descs; } ;
struct aspeed_sig_desc {int enable; int disable; int mask; size_t ip; scalar_t__ reg; } ;
struct aspeed_pinmux_data {int * maps; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct aspeed_pinmux_data*,struct aspeed_sig_expr const*,int) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct aspeed_pinmux_data *VAR_5,
      const struct aspeed_sig_expr *VAR_6,
      bool VAR_7)
{
 int VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6->ndescs; VAR_9++) {
  const struct aspeed_sig_desc *VAR_10 = &VAR_6->descs[VAR_9];
  u32 VAR_11 = VAR_7 ? VAR_10->enable : VAR_10->disable;
  u32 VAR_12 = (VAR_11 << FUNC_1(VAR_10->mask));
  bool VAR_13;

  if (!VAR_5->maps[VAR_10->ip])
   return -VAR_1;

  FUNC_0(VAR_10->ip != VAR_0);
  VAR_13 = VAR_10->reg == VAR_3 || VAR_10->reg == VAR_4;

  if (VAR_13) {
   u32 VAR_14 = ~VAR_12 & VAR_10->mask;
   u32 VAR_15 = VAR_10->reg + 4;

   if (VAR_14)
    VAR_8 = FUNC_3(VAR_5->maps[VAR_10->ip],
        VAR_15, VAR_10->mask,
        VAR_14);
  }

  VAR_8 = FUNC_3(VAR_5->maps[VAR_10->ip], VAR_10->reg,
      VAR_10->mask, VAR_12);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_8)
  return -VAR_2;
 return 0;
}
