
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int* extra_capability; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct qlcnic_adapter *VAR_1)
{
 return VAR_1->ahw->extra_capability[0] &
        VAR_0;
}
