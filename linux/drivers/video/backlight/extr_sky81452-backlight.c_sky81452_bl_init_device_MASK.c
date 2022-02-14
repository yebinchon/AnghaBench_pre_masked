
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky81452_bl_platform_data {int boost_current_limit; int short_detection_threshold; scalar_t__ phase_shift; scalar_t__ dpwm_mode; scalar_t__ ignore_pwm; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct regmap*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_7,
  struct sky81452_bl_platform_data *VAR_8)
{
 unsigned int VAR_9;

 VAR_9 = VAR_8->ignore_pwm ? VAR_1 : 0;
 VAR_9 |= VAR_8->dpwm_mode ? VAR_4 : 0;
 VAR_9 |= VAR_8->phase_shift ? 0 : VAR_3;

 if (VAR_8->boost_current_limit == 2300)
  VAR_9 |= VAR_2;
 else if (VAR_8->boost_current_limit != 2750)
  return -VAR_0;

 if (VAR_8->short_detection_threshold < 4 ||
    VAR_8->short_detection_threshold > 7)
  return -VAR_0;
 VAR_9 |= (7 - VAR_8->short_detection_threshold) << FUNC_0(VAR_6);

 return FUNC_1(VAR_7, VAR_5, VAR_9);
}
