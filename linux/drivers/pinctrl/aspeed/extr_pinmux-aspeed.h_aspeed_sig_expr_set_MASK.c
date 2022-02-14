
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aspeed_sig_expr {int dummy; } ;
struct aspeed_pinmux_data {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set ) (struct aspeed_pinmux_data*,struct aspeed_sig_expr const*,int) ;} ;


 int FUNC_0 (struct aspeed_pinmux_data*,struct aspeed_sig_expr const*,int) ;

__attribute__((used)) static inline int FUNC_1(struct aspeed_pinmux_data *VAR_0,
          const struct aspeed_sig_expr *VAR_1,
          bool VAR_2)
{
 return VAR_0->ops->set(VAR_0, VAR_1, VAR_2);
}
