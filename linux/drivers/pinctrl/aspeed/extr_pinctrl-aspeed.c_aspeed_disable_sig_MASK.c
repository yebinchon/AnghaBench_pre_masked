
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_sig_expr {int dummy; } ;
struct aspeed_pinmux_data {int dummy; } ;


 int FUNC_0 (struct aspeed_pinmux_data*,struct aspeed_sig_expr const*) ;

__attribute__((used)) static int FUNC_1(struct aspeed_pinmux_data *VAR_0,
         const struct aspeed_sig_expr **VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  return 1;

 while (*VAR_1 && !VAR_2) {
  VAR_2 = FUNC_0(VAR_0, *VAR_1);
  VAR_1++;
 }

 return VAR_2;
}
