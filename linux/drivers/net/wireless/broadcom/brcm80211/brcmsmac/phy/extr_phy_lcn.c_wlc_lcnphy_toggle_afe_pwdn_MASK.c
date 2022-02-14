
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_0)
{
 u16 VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0, 0x43c);
 VAR_2 = FUNC_0(VAR_0, 0x43b);

 FUNC_1(VAR_0, 0x43c, VAR_1 | 0x1);
 FUNC_1(VAR_0, 0x43b, VAR_2 | 0x1);

 FUNC_1(VAR_0, 0x43c, VAR_1 & 0xfffe);
 FUNC_1(VAR_0, 0x43b, VAR_2 & 0xfffe);

 FUNC_1(VAR_0, 0x43c, VAR_1);
 FUNC_1(VAR_0, 0x43b, VAR_2);
}
