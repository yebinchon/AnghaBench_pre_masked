
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asus_wmi {int fan_boost_mode_mask; scalar_t__ fan_boost_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct asus_wmi*) ;

__attribute__((used)) static int FUNC_1(struct asus_wmi *VAR_5)
{
 u8 VAR_6 = VAR_5->fan_boost_mode_mask;

 if (VAR_5->fan_boost_mode == VAR_0) {
  if (VAR_6 & VAR_2)
   VAR_5->fan_boost_mode = VAR_1;
  else if (VAR_6 & VAR_4)
   VAR_5->fan_boost_mode = VAR_3;
 } else if (VAR_5->fan_boost_mode == VAR_1) {
  if (VAR_6 & VAR_4)
   VAR_5->fan_boost_mode = VAR_3;
  else
   VAR_5->fan_boost_mode = VAR_0;
 } else {
  VAR_5->fan_boost_mode = VAR_0;
 }

 return FUNC_0(VAR_5);
}
