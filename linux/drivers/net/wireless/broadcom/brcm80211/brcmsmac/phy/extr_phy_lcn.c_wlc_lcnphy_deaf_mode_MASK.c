
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct brcms_phy {int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;

void FUNC_3(struct brcms_phy *VAR_0, bool VAR_1)
{

 u8 VAR_2;
 VAR_2 = FUNC_1(VAR_0->radio_chanspec);

 FUNC_2(VAR_0, 0x4b0, (0x1 << 5), (VAR_1) << 5);
 FUNC_2(VAR_0, 0x4b1, (0x1 << 9), 0 << 9);

 if (VAR_2 == 0) {
  FUNC_2((VAR_0), 0x410,
       (0x1 << 6) |
       (0x1 << 5),
       ((FUNC_0(
          VAR_0->radio_chanspec)) ? (!VAR_1) : 0) <<
       6 | (!VAR_1) << 5);
  FUNC_2(VAR_0, 0x410, (0x1 << 7), (VAR_1) << 7);
 }
}
