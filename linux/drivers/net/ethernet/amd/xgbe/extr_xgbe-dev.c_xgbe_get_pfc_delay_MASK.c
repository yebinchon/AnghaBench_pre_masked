
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {TYPE_1__* pfc; } ;
struct TYPE_2__ {int delay; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static unsigned int FUNC_1(struct xgbe_prv_data *VAR_5)
{
 unsigned int VAR_6;


 if (VAR_5->pfc->delay)
  return VAR_5->pfc->delay / 8;


 VAR_6 = FUNC_0(VAR_5);
 VAR_6 += VAR_2;
 VAR_6 *= 2;


 VAR_6 += VAR_3;
 VAR_6 += VAR_1 + VAR_0;
 VAR_6 += VAR_2;


 VAR_6 += VAR_4;

 return VAR_6;
}
