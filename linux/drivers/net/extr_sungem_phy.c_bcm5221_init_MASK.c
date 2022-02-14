
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy* VAR_6)
{
 u16 VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 FUNC_1(VAR_6, VAR_4,
  VAR_7 | VAR_5);

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 FUNC_1(VAR_6, VAR_2,
  VAR_7 | VAR_3);

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 FUNC_1(VAR_6, VAR_0,
  VAR_7 | VAR_1);

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 FUNC_1(VAR_6, VAR_4,
  VAR_7 & ~VAR_5);

 return 0;
}
