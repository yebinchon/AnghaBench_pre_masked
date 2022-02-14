
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mii_phy*) ;
 int FUNC_1 (struct mii_phy*,int ) ;
 int FUNC_2 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mii_phy* VAR_3)
{
 u32 VAR_4;
 int VAR_5;


 FUNC_2(VAR_3, VAR_2, 0x1000);
 VAR_4 = FUNC_1(VAR_3, VAR_2);

 VAR_5 = (VAR_4 & VAR_0) >> 5;

 if ( VAR_5 == VAR_1)
  return FUNC_0(VAR_3);


 FUNC_2(VAR_3, VAR_2, 0x2000);
 VAR_4 = FUNC_1(VAR_3, VAR_2);

 if (VAR_4 & 0x0020)
  return 0;
 else
  return 1;
}
