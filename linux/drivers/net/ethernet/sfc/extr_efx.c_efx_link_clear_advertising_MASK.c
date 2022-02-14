
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int wanted_fc; int link_advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct efx_nic *VAR_3)
{
 FUNC_0(VAR_3->link_advertising, VAR_2);
 VAR_3->wanted_fc &= ~(VAR_1 | VAR_0);
}
