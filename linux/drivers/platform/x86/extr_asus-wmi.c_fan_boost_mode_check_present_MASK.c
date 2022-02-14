
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asus_wmi {int fan_boost_mode_available; int fan_boost_mode_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asus_wmi*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct asus_wmi *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_4->fan_boost_mode_available = 0;

 VAR_6 = FUNC_0(VAR_4, VAR_1,
        &VAR_5);
 if (VAR_6) {
  if (VAR_6 == -VAR_3)
   return 0;
  else
   return VAR_6;
 }

 if ((VAR_5 & VAR_2) &&
   (VAR_5 & VAR_0)) {
  VAR_4->fan_boost_mode_available = 1;
  VAR_4->fan_boost_mode_mask = VAR_5 & VAR_0;
 }

 return 0;
}
