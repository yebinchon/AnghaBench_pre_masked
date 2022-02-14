
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int used; } ;
struct be_tx_obj {TYPE_1__ q; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct be_tx_obj *VAR_0)
{
 return FUNC_0(&VAR_0->q.used) < VAR_0->q.len / 2;
}
