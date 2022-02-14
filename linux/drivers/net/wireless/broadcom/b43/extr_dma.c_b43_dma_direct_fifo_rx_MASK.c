
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;
typedef enum b43_dmatype { ____Placeholder_b43_dmatype } b43_dmatype ;


 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int,int ,int) ;

void FUNC_3(struct b43_wldev *VAR_0,
       unsigned int VAR_1, bool VAR_2)
{
 enum b43_dmatype VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_1(VAR_0);

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 FUNC_2(VAR_0, VAR_3, VAR_4, VAR_2);
}
