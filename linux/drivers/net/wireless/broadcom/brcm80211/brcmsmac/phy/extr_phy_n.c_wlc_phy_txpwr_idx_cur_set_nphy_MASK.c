
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,int,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_0, u8 VAR_1, u8 VAR_2)
{
 FUNC_1(VAR_0, 0x1e7, (0x7f << 0), VAR_1);

 if (FUNC_0(VAR_0->pubpi.phy_rev, 1))
  FUNC_1(VAR_0, 0x222, (0xff << 0), VAR_2);
}
