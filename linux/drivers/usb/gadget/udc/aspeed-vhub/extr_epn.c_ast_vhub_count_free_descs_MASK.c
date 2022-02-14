
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_last; int d_next; } ;
struct ast_vhub_ep {TYPE_1__ epn; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct ast_vhub_ep *VAR_1)
{





 return (VAR_1->epn.d_last + VAR_0 - VAR_1->epn.d_next - 1) &
  (VAR_0 - 1);
}
