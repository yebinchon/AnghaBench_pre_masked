
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
 int FUNC_0 (struct mii_phy*,int) ;
 int FUNC_1 (struct mii_phy*,int) ;
 int FUNC_2 (struct mii_phy*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mii_phy* VAR_4)
{
 u16 VAR_5;




 FUNC_2(VAR_4, 0x1c, 0x8c23);
 FUNC_2(VAR_4, 0x1c, 0x8ca3);
 FUNC_2(VAR_4, 0x1c, 0x8c23);




 FUNC_2(VAR_4, VAR_3, VAR_0);
 FUNC_2(VAR_4, VAR_3, 0x1340);

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 VAR_5 |= VAR_2;
 FUNC_2(VAR_4, VAR_1, VAR_5);

 FUNC_3(10);


 (void)FUNC_0(VAR_4, 0x1f);

 return 0;
}
