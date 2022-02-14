
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_phy {int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mii_phy*) ;
 int FUNC_1 (struct mii_phy*,int ) ;
 int FUNC_2 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mii_phy* VAR_7)
{
 u32 VAR_8;
 int VAR_9;


 FUNC_2(VAR_7, VAR_5, 0x7c00);
 VAR_8 = FUNC_1(VAR_7, VAR_5);

 VAR_9 = (VAR_8 & VAR_1 ) >> 1;

 if ( VAR_9 == VAR_2) {
  return FUNC_0(VAR_7);
 }

 VAR_7->speed = VAR_6;


 FUNC_2(VAR_7, VAR_5, 0x7000);
 VAR_8 = FUNC_1(VAR_7, VAR_5);

 if (VAR_8 & VAR_0)
  VAR_7->duplex |= VAR_3;
 else
  VAR_7->duplex |= VAR_4;

 return 0;
}
