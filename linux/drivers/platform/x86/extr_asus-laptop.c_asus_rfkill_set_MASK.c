
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_rfkill {scalar_t__ control_id; struct asus_laptop* asus; } ;
struct asus_laptop {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct asus_laptop*,int) ;
 int FUNC_1 (struct asus_laptop*,int) ;
 int FUNC_2 (struct asus_laptop*,int) ;
 int FUNC_3 (struct asus_laptop*,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, bool VAR_6)
{
 struct asus_rfkill *VAR_7 = VAR_5;
 struct asus_laptop *VAR_8 = VAR_7->asus;

 if (VAR_7->control_id == VAR_2)
  return FUNC_2(VAR_8, !VAR_6);
 else if (VAR_7->control_id == VAR_0)
  return FUNC_0(VAR_8, !VAR_6);
 else if (VAR_7->control_id == VAR_3)
  return FUNC_1(VAR_8, !VAR_6);
 else if (VAR_7->control_id == VAR_4)
  return FUNC_3(VAR_8, !VAR_6);

 return -VAR_1;
}
