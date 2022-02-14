
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {unsigned short device; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;

__attribute__((used)) static inline bool FUNC_0(struct qlcnic_adapter *VAR_6)
{
 unsigned short VAR_7 = VAR_6->pdev->device;
 bool VAR_8;

 VAR_8 = ((VAR_7 == VAR_0) ||
    (VAR_7 == VAR_2) ||
    (VAR_7 == VAR_1) ||
    (VAR_7 == VAR_4) ||
    (VAR_7 == VAR_3) ||
    (VAR_7 == VAR_5)) ? 1 : 0;

 return VAR_8;
}
