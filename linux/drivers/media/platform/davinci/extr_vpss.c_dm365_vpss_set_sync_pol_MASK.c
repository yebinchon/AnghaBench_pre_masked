
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpss_sync_pol {int ccdpg_hdpol; int ccdpg_vdpol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct vpss_sync_pol VAR_3)
{
 int VAR_4 = 0;
 VAR_4 = FUNC_0(VAR_2);

 VAR_4 |= (VAR_3.ccdpg_hdpol << VAR_0);
 VAR_4 |= (VAR_3.ccdpg_vdpol << VAR_1);

 FUNC_1(VAR_4, VAR_2);
}
