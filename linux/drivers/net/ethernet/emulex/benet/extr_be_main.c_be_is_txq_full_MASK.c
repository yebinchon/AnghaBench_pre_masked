
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; int used; } ;
struct be_tx_obj {TYPE_1__ q; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct be_tx_obj *VAR_1)
{
 return FUNC_0(&VAR_1->q.used) + VAR_0 >= VAR_1->q.len;
}
