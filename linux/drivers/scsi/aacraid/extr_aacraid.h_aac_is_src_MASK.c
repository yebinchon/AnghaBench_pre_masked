
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct aac_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct aac_dev *VAR_3)
{
 u16 VAR_4 = VAR_3->pdev->device;

 if (VAR_4 == VAR_0 ||
  VAR_4 == VAR_1 ||
  VAR_4 == VAR_2)
  return 1;
 return 0;
}
