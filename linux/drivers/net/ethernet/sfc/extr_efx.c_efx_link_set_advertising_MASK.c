
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int wanted_fc; int * link_advertising; } ;


 unsigned long const VAR_0 ;
 int VAR_1 ;
 unsigned long const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long const*,int) ;

void FUNC_1(struct efx_nic *VAR_5,
         const unsigned long *VAR_6)
{
 FUNC_0(VAR_5->link_advertising, VAR_6,
        sizeof(FUNC_0()));

 VAR_5->link_advertising[0] |= VAR_1;
 if (VAR_6[0] & VAR_2)
  VAR_5->wanted_fc |= (VAR_4 | VAR_3);
 else
  VAR_5->wanted_fc &= ~(VAR_4 | VAR_3);
 if (VAR_6[0] & VAR_0)
  VAR_5->wanted_fc ^= VAR_4;
}
