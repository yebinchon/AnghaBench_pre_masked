
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_phy*,int,int) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct brcms_phy *VAR_1,
         u16 VAR_2,
         u16 VAR_3, u16 VAR_4, bool VAR_5)
{

 FUNC_2(VAR_1, 0x6da, 0x8080);

 FUNC_1(VAR_1, 0x642, (0x7f << 0), (VAR_2 - 1) << 0);
 if (VAR_3 != 0xffff)
  VAR_3--;
 FUNC_1(VAR_1, 0x640, (0xffff << 0), VAR_3 << 0);

 FUNC_1(VAR_1, 0x641, (0xffff << 0), VAR_4 << 0);

 if (VAR_5) {

  FUNC_0(VAR_1, 0x453, (u16) ~(0x1 << 15));
  FUNC_2(VAR_1, 0x453, (0x1 << 15));
 } else {
  FUNC_5(VAR_1, 0x63f, 1);
  FUNC_4(VAR_1, 1);
 }

 FUNC_3(VAR_1, VAR_0, 0x6);
}
