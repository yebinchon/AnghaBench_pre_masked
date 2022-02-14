
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtsx_chip {scalar_t__ ic_version; scalar_t__ driver_first_load; scalar_t__ phy_debug_mode; int asic_code; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtsx_chip*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int*) ;
 int FUNC_5 (struct rtsx_chip*,int,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct rtsx_chip *VAR_5)
{
 int VAR_6;

 if (!VAR_5->asic_code || !FUNC_0(VAR_5, 0x5208)) {
  FUNC_3(VAR_5);
  return VAR_4;
 }

 if (VAR_5->phy_debug_mode) {
  VAR_6 = FUNC_6(VAR_5, VAR_0, 0x77, 0);
  if (VAR_6)
   return VAR_6;
  FUNC_2(VAR_5);
 } else {
  FUNC_3(VAR_5);
 }

 if (VAR_5->ic_version >= VAR_2) {
  u16 VAR_7;

  VAR_6 = FUNC_4(VAR_5, 0x00, &VAR_7);
  if (VAR_6 != VAR_4)
   return VAR_3;

  VAR_7 &= 0xFE7F;
  VAR_7 |= 0x80;
  VAR_6 = FUNC_5(VAR_5, 0x00, VAR_7);
  if (VAR_6 != VAR_4)
   return VAR_3;

  VAR_6 = FUNC_4(VAR_5, 0x1C, &VAR_7);
  if (VAR_6 != VAR_4)
   return VAR_3;

  VAR_7 &= 0xFFF7;
  VAR_6 = FUNC_5(VAR_5, 0x1C, VAR_7);
  if (VAR_6 != VAR_4)
   return VAR_3;
 }

 if (VAR_5->driver_first_load && (VAR_5->ic_version < VAR_1))
  FUNC_1(VAR_5);

 return VAR_4;
}
