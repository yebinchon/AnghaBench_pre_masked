
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int* extra_capability; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;

__attribute__((used)) static bool FUNC_2(struct qlcnic_adapter *VAR_1)
{
 bool VAR_2 = 0;

 if (FUNC_1(VAR_1)) {
  VAR_2 = 1;
 } else if (FUNC_0(VAR_1)) {
  if (VAR_1->ahw->extra_capability[0] &
      VAR_0)
   VAR_2 = 1;
  else
   VAR_2 = 0;
 }

 return VAR_2;
}
