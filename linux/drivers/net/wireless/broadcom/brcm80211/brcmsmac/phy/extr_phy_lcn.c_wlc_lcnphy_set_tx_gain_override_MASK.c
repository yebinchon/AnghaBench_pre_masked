
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_0, bool VAR_1)
{
 u16 VAR_2 = VAR_1 ? 1 : 0;

 FUNC_0(VAR_0, 0x4b0, (0x1 << 7), VAR_2 << 7);

 FUNC_0(VAR_0, 0x4b0, (0x1 << 14), VAR_2 << 14);

 FUNC_0(VAR_0, 0x43b, (0x1 << 6), VAR_2 << 6);
}
