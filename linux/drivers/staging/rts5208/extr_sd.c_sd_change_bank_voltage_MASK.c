
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_chip {int phy_voltage; scalar_t__ asic_code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,int,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rtsx_chip *VAR_6, u8 VAR_7)
{
 int VAR_8;

 if (VAR_7 == VAR_1) {
  if (VAR_6->asic_code) {
   VAR_8 = FUNC_0(VAR_6, 0x08,
        0x4FC0 |
        VAR_6->phy_voltage);
   if (VAR_8 != VAR_5)
    return VAR_4;
  } else {
   VAR_8 = FUNC_1(VAR_6, VAR_3,
           VAR_2, 0);
   if (VAR_8)
    return VAR_8;
  }
 } else if (VAR_7 == VAR_0) {
  if (VAR_6->asic_code) {
   VAR_8 = FUNC_0(VAR_6, 0x08,
        0x4C40 |
        VAR_6->phy_voltage);
   if (VAR_8 != VAR_5)
    return VAR_4;
  } else {
   VAR_8 = FUNC_1(VAR_6, VAR_3,
           VAR_2,
           VAR_2);
   if (VAR_8)
    return VAR_8;
  }
 } else {
  return VAR_4;
 }

 return VAR_5;
}
