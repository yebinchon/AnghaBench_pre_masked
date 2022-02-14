
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mii_phy*,int,int ) ;
 int FUNC_1 (struct mii_phy*,int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mii_phy* VAR_4, int VAR_5)
{
 u16 VAR_6;
 int VAR_7 = 10000;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_3);
 VAR_6 &= ~(VAR_0 | VAR_1);
 VAR_6 |= VAR_2;
 FUNC_1(VAR_4, VAR_5, VAR_3, VAR_6);

 FUNC_2(100);

 while (--VAR_7) {
  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_3);
  if ((VAR_6 & VAR_2) == 0)
   break;
  FUNC_2(10);
 }
 if ((VAR_6 & VAR_0) && VAR_7 > 0)
  FUNC_1(VAR_4, VAR_5, VAR_3, VAR_6 & ~VAR_0);

 return VAR_7 <= 0;
}
