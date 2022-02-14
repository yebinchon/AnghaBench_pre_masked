
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aspeed_sig_expr {int ndescs; struct aspeed_sig_desc* descs; } ;
struct aspeed_sig_desc {size_t ip; } ;
struct aspeed_pinmux_data {int * maps; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* eval ) (struct aspeed_pinmux_data*,struct aspeed_sig_expr const*,int) ;} ;


 int FUNC_0 (struct aspeed_sig_desc const*,int,int ) ;
 int FUNC_1 (struct aspeed_pinmux_data*,struct aspeed_sig_expr const*,int) ;

int FUNC_2(struct aspeed_pinmux_data *VAR_0,
    const struct aspeed_sig_expr *VAR_1, bool VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (VAR_0->ops->eval)
  return VAR_0->ops->eval(VAR_0, VAR_1, VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_1->ndescs; VAR_4++) {
  const struct aspeed_sig_desc *VAR_5 = &VAR_1->descs[VAR_4];

  VAR_3 = FUNC_0(VAR_5, VAR_2, VAR_0->maps[VAR_5->ip]);
  if (VAR_3 <= 0)
   return VAR_3;
 }

 return 1;
}
