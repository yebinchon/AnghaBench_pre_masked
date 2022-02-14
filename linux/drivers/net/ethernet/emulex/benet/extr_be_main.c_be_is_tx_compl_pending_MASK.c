
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used; } ;
struct be_tx_obj {scalar_t__ pend_wrb_cnt; TYPE_1__ q; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct be_tx_obj *VAR_0)
{
 return FUNC_0(&VAR_0->q.used) > VAR_0->pend_wrb_cnt;
}
