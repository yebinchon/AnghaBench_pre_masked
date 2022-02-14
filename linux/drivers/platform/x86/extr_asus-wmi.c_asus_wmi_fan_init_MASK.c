
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_wmi {scalar_t__ fan_type; int agfn_pwm; int fan_pwm_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct asus_wmi*) ;
 scalar_t__ FUNC_1 (struct asus_wmi*,int ) ;
 scalar_t__ FUNC_2 (struct asus_wmi*) ;

__attribute__((used)) static int FUNC_3(struct asus_wmi *VAR_6)
{
 VAR_6->fan_type = VAR_4;
 VAR_6->agfn_pwm = -1;

 if (FUNC_1(VAR_6, VAR_1))
  VAR_6->fan_type = VAR_5;
 else if (FUNC_2(VAR_6))
  VAR_6->fan_type = VAR_3;

 if (VAR_6->fan_type == VAR_4)
  return -VAR_2;

 FUNC_0(VAR_6);
 VAR_6->fan_pwm_mode = VAR_0;
 return 0;
}
