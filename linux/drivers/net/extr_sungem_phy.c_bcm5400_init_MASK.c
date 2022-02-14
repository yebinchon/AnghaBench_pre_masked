
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
 int FUNC_0 (struct mii_phy*,int,int ) ;
 int FUNC_1 (struct mii_phy*,int,int ,int ) ;
 int FUNC_2 (struct mii_phy*,int) ;
 int FUNC_3 (struct mii_phy*,int ) ;
 int FUNC_4 (struct mii_phy*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mii_phy* VAR_6)
{
 u16 VAR_7;


 VAR_7 = FUNC_3(VAR_6, VAR_2);
 VAR_7 |= VAR_3;
 FUNC_4(VAR_6, VAR_2, VAR_7);

 VAR_7 = FUNC_3(VAR_6, VAR_4);
 VAR_7 |= VAR_5;
 FUNC_4(VAR_6, VAR_4, VAR_7);

 FUNC_5(100);


 (void)FUNC_2(VAR_6, 0x1f);

 VAR_7 = FUNC_0(VAR_6, 0x1f, VAR_0);
 VAR_7 |= VAR_1;
 FUNC_1(VAR_6, 0x1f, VAR_0, VAR_7);

 VAR_7 = FUNC_3(VAR_6, VAR_2);
 VAR_7 &= ~VAR_3;
 FUNC_4(VAR_6, VAR_2, VAR_7);

 return 0;
}
