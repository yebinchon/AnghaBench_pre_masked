
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_0)
{
 u8 VAR_1;
 u16 VAR_2;

 VAR_1 = 7;
 if (FUNC_0(VAR_0->pubpi.phy_rev, 1))
  VAR_1 = 11;
 VAR_2 =
  (VAR_1 << 10) | (VAR_1 << 5) |
  (VAR_1);
 FUNC_1(VAR_0, 0x933, VAR_2);
 FUNC_1(VAR_0, 0x934, VAR_2);
 FUNC_1(VAR_0, 0x935, VAR_2);
 FUNC_1(VAR_0, 0x936, VAR_2);
 FUNC_1(VAR_0, 0x937, (VAR_2 & 0x1FF));

 return;
}
