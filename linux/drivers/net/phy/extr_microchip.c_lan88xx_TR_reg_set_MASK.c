
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int,int) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*,char*,...) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_4, u16 VAR_5,
         u32 VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 u16 VAR_10;


 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8 < 0) {
  FUNC_5(VAR_4, "Failed to get current page\n");
  goto err;
 }


 FUNC_2(VAR_4, VAR_0);

 VAR_9 = FUNC_1(VAR_4, VAR_3,
     (VAR_6 & 0xFFFF));
 if (VAR_9 < 0) {
  FUNC_5(VAR_4, "Failed to write TR low data\n");
  goto err;
 }

 VAR_9 = FUNC_1(VAR_4, VAR_2,
     (VAR_6 & 0x00FF0000) >> 16);
 if (VAR_9 < 0) {
  FUNC_5(VAR_4, "Failed to write TR high data\n");
  goto err;
 }


 VAR_10 = (VAR_5 & ~(0x3 << 13));
 VAR_10 |= 0x8000;

 VAR_9 = FUNC_1(VAR_4, VAR_1, VAR_10);
 if (VAR_9 < 0) {
  FUNC_5(VAR_4, "Failed to write data in reg\n");
  goto err;
 }

 FUNC_6(1000, 2000);
 VAR_7 = FUNC_0(VAR_4, VAR_1);
 if (!(VAR_7 & 0x8000))
  FUNC_5(VAR_4, "TR Register[0x%X] configuration failed\n",
       VAR_5);
err:
 return FUNC_3(VAR_4, VAR_8, VAR_9);
}
