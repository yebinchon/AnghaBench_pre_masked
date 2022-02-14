
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcms_phy*,int) ;
 int FUNC_1 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_3, s32 VAR_4)
{
 bool VAR_5 = 0;
 u16 VAR_6;

 if (VAR_4 == VAR_0)
  VAR_5 = 1;

 VAR_6 = FUNC_0(VAR_3, 0xed);

 VAR_6 |= VAR_1;
 VAR_6 &= ~VAR_2;
 if (VAR_5)
  VAR_6 |= VAR_2;

 FUNC_1(VAR_3, 0xed, VAR_6);
}
