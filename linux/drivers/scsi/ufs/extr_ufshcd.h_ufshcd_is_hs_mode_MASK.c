
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_pa_layer_attr {scalar_t__ pwr_rx; scalar_t__ pwr_tx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct ufs_pa_layer_attr *VAR_2)
{
 return (VAR_2->pwr_rx == VAR_1 ||
  VAR_2->pwr_rx == VAR_0) &&
  (VAR_2->pwr_tx == VAR_1 ||
  VAR_2->pwr_tx == VAR_0);
}
