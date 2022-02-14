
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int drv_tx_rings; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_2)
{
 FUNC_0(VAR_1, &VAR_2->state);
 VAR_2->drv_tx_rings = VAR_0;
}
