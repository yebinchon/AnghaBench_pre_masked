
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
 int FUNC_0 (struct mii_phy*,int,int ) ;
 int FUNC_1 (struct mii_phy*,int,int ,int) ;
 int FUNC_2 (struct mii_phy*,int) ;
 int FUNC_3 (struct mii_phy*,int) ;
 int FUNC_4 (struct mii_phy*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mii_phy* VAR_5)
{
 u16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5, VAR_4) & 0x000f;
 if (VAR_7 == 0 || VAR_7 == 3) {
  FUNC_4(VAR_5, 0x18, 0x0c20);
  FUNC_4(VAR_5, 0x17, 0x0012);
  FUNC_4(VAR_5, 0x15, 0x1804);
  FUNC_4(VAR_5, 0x17, 0x0013);
  FUNC_4(VAR_5, 0x15, 0x1204);
  FUNC_4(VAR_5, 0x17, 0x8006);
  FUNC_4(VAR_5, 0x15, 0x0132);
  FUNC_4(VAR_5, 0x17, 0x8006);
  FUNC_4(VAR_5, 0x15, 0x0232);
  FUNC_4(VAR_5, 0x17, 0x201f);
  FUNC_4(VAR_5, 0x15, 0x0a20);
 }


 VAR_6 = FUNC_3(VAR_5, VAR_2);
 VAR_6 |= VAR_3;
 FUNC_4(VAR_5, VAR_2, VAR_6);

 FUNC_5(10);


 (void)FUNC_2(VAR_5, 0x1f);

 VAR_6 = FUNC_0(VAR_5, 0x1f, VAR_0);
 VAR_6 |= VAR_1;
 FUNC_1(VAR_5, 0x1f, VAR_0, VAR_6);

 return 0;
}
