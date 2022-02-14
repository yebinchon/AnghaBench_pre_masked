
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct kbd_state {int timeout_value_ac; int timeout_unit_ac; int timeout_value; int timeout_unit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int seconds; int minutes; int hours; int days; } ;
struct TYPE_3__ {int* kbd_timeouts; scalar_t__ needs_kbd_timeouts; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct kbd_state*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kbd_state*,struct kbd_state*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (char const*,char*,int*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
         struct device_attribute *VAR_7,
         const char *VAR_8, size_t VAR_9)
{
 struct kbd_state VAR_10;
 struct kbd_state VAR_11;
 bool VAR_12;
 int VAR_13;
 int VAR_14;
 char VAR_15;
 u8 VAR_16;
 int VAR_17;

 VAR_14 = FUNC_5(VAR_8, "%d %c", &VAR_13, &VAR_15);
 if (VAR_14 < 1)
  return -VAR_0;
 else if (VAR_14 == 1)
  VAR_15 = 's';

 if (VAR_13 < 0)
  return -VAR_0;

 VAR_12 = 0;

 switch (VAR_15) {
 case 's':
  if (VAR_13 > VAR_2.seconds)
   VAR_12 = 1;
  VAR_16 = VAR_1;
  break;
 case 'm':
  if (VAR_13 > VAR_2.minutes)
   VAR_12 = 1;
  VAR_16 = 128;
  break;
 case 'h':
  if (VAR_13 > VAR_2.hours)
   VAR_12 = 1;
  VAR_16 = 129;
  break;
 case 'd':
  if (VAR_13 > VAR_2.days)
   VAR_12 = 1;
  VAR_16 = 130;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_5 && VAR_5->needs_kbd_timeouts)
  VAR_12 = 1;

 if (VAR_12) {

  switch (VAR_16) {
  case 130:
   VAR_13 *= 24;

  case 129:
   VAR_13 *= 60;

  case 128:
   VAR_13 *= 60;
   VAR_16 = VAR_1;
  }

  if (VAR_5 && VAR_5->needs_kbd_timeouts) {
   for (VAR_17 = 0; VAR_5->kbd_timeouts[VAR_17] != -1; VAR_17++) {
    if (VAR_13 <= VAR_5->kbd_timeouts[VAR_17]) {
     VAR_13 = VAR_5->kbd_timeouts[VAR_17];
     break;
    }
   }
  }

  if (VAR_13 <= VAR_2.seconds && VAR_2.seconds) {
   VAR_16 = VAR_1;
  } else if (VAR_13 / 60 <= VAR_2.minutes && VAR_2.minutes) {
   VAR_13 /= 60;
   VAR_16 = 128;
  } else if (VAR_13 / (60 * 60) <= VAR_2.hours && VAR_2.hours) {
   VAR_13 /= (60 * 60);
   VAR_16 = 129;
  } else if (VAR_13 / (60 * 60 * 24) <= VAR_2.days && VAR_2.days) {
   VAR_13 /= (60 * 60 * 24);
   VAR_16 = 130;
  } else {
   return -VAR_0;
  }
 }

 FUNC_2(&VAR_3);

 VAR_14 = FUNC_0(&VAR_11);
 if (VAR_14)
  goto out;

 VAR_10 = VAR_11;

 if (VAR_4 && FUNC_4() > 0) {
  VAR_10.timeout_value_ac = VAR_13;
  VAR_10.timeout_unit_ac = VAR_16;
 } else {
  VAR_10.timeout_value = VAR_13;
  VAR_10.timeout_unit = VAR_16;
 }

 VAR_14 = FUNC_1(&VAR_10, &VAR_11);
 if (VAR_14)
  goto out;

 VAR_14 = VAR_9;
out:
 FUNC_3(&VAR_3);
 return VAR_14;
}
