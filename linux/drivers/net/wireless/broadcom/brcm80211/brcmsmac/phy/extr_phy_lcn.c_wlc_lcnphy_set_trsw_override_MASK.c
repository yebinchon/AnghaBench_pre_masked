
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int,int,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_0, bool VAR_1, bool VAR_2)
{

 FUNC_0(VAR_0, 0x44d,
      (0x1 << 1) |
      (0x1 << 0), (VAR_1 ? (0x1 << 1) : 0) | (VAR_2 ? (0x1 << 0) : 0));

 FUNC_1(VAR_0, 0x44c, (0x1 << 1) | (0x1 << 0));
}
