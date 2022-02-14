
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int drv_tx_rings; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_adapter *VAR_3)
{
 return FUNC_0(VAR_2) +
        FUNC_0(VAR_1) +
        VAR_0 * VAR_3->drv_tx_rings;
}
