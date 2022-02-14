
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*,int,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(struct phy_device *VAR_0, int VAR_1)
{
 u16 VAR_2 = FUNC_0(1);

 if (VAR_1)
  FUNC_2(VAR_0, 0x1c0,
        FUNC_1(VAR_0, 0x1c0) | VAR_2);
 else
  FUNC_2(VAR_0, 0x1c0,
        FUNC_1(VAR_0, 0x1c0) & ~VAR_2);

 FUNC_3("10BASE-T HDX loopback %s\n",
   (FUNC_1(VAR_0, 0x1c0) & VAR_2) ? "off" : "on");
}
