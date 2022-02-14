
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {scalar_t__ setband; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool FUNC_0(struct adapter *VAR_3, const u32 VAR_4)
{
 if (VAR_3->setband == VAR_0
  || (VAR_3->setband == VAR_1 && VAR_4 < 35)
  || (VAR_3->setband == VAR_2 && VAR_4 > 35)
 ) {
  return 1;
 }
 return 0;
}
