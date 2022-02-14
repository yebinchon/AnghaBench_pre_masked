
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct brcms_phy {int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct brcms_phy*,int ,int,int ,int,int*) ;

__attribute__((used)) static u16 FUNC_2(struct brcms_phy *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = 0;
 u16 VAR_4 = 0;

 if (VAR_2 == 0) {
  if (FUNC_0(VAR_1->radio_chanspec))
   VAR_4 = 0x159;
  else
   VAR_4 = 0x154;
 } else {
  VAR_4 = VAR_2;
 }
 FUNC_1(VAR_1, VAR_0, 1,
    (u32) VAR_4, 16,
    &VAR_3);

 VAR_3 = VAR_3 & 0x7;

 return VAR_3;
}
