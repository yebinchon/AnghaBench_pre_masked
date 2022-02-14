
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ef4_nic {int wanted_fc; int link_advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct ef4_nic *VAR_4, u8 VAR_5)
{
 VAR_4->wanted_fc = VAR_5;
 if (VAR_4->link_advertising) {
  if (VAR_5 & VAR_2)
   VAR_4->link_advertising |= (VAR_1 |
        VAR_0);
  else
   VAR_4->link_advertising &= ~(VAR_1 |
         VAR_0);
  if (VAR_5 & VAR_3)
   VAR_4->link_advertising ^= VAR_0;
 }
}
