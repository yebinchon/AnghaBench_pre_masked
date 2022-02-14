
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phylink_link_state {int dummy; } ;
struct phylink {int config; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* validate ) (int ,unsigned long*,struct phylink_link_state*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long*) ;
 int FUNC_1 (int ,unsigned long*,struct phylink_link_state*) ;

__attribute__((used)) static int FUNC_2(struct phylink *VAR_1, unsigned long *VAR_2,
       struct phylink_link_state *VAR_3)
{
 VAR_1->ops->validate(VAR_1->config, VAR_2, VAR_3);

 return FUNC_0(VAR_2) ? -VAR_0 : 0;
}
