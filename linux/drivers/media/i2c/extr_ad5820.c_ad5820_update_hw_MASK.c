
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ad5820_device {int focus_absolute; scalar_t__ standby; scalar_t__ focus_ramp_mode; int focus_ramp_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ad5820_device*,int) ;

__attribute__((used)) static int FUNC_2(struct ad5820_device *VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_0(VAR_4->focus_ramp_time);
 VAR_5 |= VAR_4->focus_ramp_mode
  ? VAR_2 : VAR_3;
 VAR_5 |= VAR_4->focus_absolute << VAR_0;

 if (VAR_4->standby)
  VAR_5 |= VAR_1;

 return FUNC_1(VAR_4, VAR_5);
}
