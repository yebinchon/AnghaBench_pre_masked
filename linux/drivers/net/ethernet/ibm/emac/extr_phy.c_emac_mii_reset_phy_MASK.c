
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct mii_phy *VAR_4)
{
 int VAR_5;
 int VAR_6 = 10000;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 VAR_5 &= ~(VAR_1 | VAR_0);
 VAR_5 |= VAR_2;
 FUNC_1(VAR_4, VAR_3, VAR_5);

 FUNC_2(300);

 while (--VAR_6) {
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  if (VAR_5 >= 0 && (VAR_5 & VAR_2) == 0)
   break;
  FUNC_2(10);
 }
 if ((VAR_5 & VAR_1) && VAR_6 > 0)
  FUNC_1(VAR_4, VAR_3, VAR_5 & ~VAR_1);

 return VAR_6 <= 0;
}
