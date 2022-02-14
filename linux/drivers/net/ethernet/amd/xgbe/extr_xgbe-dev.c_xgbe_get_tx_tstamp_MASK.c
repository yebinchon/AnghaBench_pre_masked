
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct xgbe_prv_data {TYPE_1__* vdata; } ;
struct TYPE_2__ {scalar_t__ tx_tstamp_workaround; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static u64 FUNC_2(struct xgbe_prv_data *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u64 VAR_7;

 if (VAR_4->vdata->tx_tstamp_workaround) {
  VAR_5 = FUNC_1(VAR_4, VAR_0);
  VAR_6 = FUNC_1(VAR_4, VAR_1);
 } else {
  VAR_6 = FUNC_1(VAR_4, VAR_1);
  VAR_5 = FUNC_1(VAR_4, VAR_0);
 }

 if (FUNC_0(VAR_5, VAR_0, VAR_3))
  return 0;

 VAR_7 = VAR_6;
 VAR_7 *= VAR_2;
 VAR_7 += VAR_5;

 return VAR_7;
}
