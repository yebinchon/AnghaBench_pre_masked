
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kbd_state {int mode_bit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int modes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct kbd_state*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct kbd_state*,int ) ;
 int FUNC_5 (struct kbd_state*,struct kbd_state*) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (char const*,int ,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_10,
      struct device_attribute *VAR_11,
      const char *VAR_12, size_t VAR_13)
{
 struct kbd_state VAR_14;
 struct kbd_state VAR_15;
 bool VAR_16 = 0;
 int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_6(VAR_12, 0, &VAR_17);
 if (VAR_18)
  return VAR_18;

 FUNC_7(&VAR_6);

 VAR_18 = FUNC_1(&VAR_15);
 if (VAR_18)
  goto out;

 if (VAR_17 == FUNC_2(VAR_15.mode_bit)) {
  VAR_18 = VAR_13;
  goto out;
 }

 VAR_14 = VAR_15;

 if (VAR_9)
  VAR_16 = FUNC_3(VAR_15.mode_bit);

 if (VAR_17) {
  if (VAR_16)
   VAR_14.mode_bit = VAR_4;
  else
   VAR_14.mode_bit = VAR_1;
 } else {
  if (VAR_16) {
   VAR_14.mode_bit = VAR_3;
   FUNC_4(&VAR_14, VAR_7);
  } else {
   VAR_14.mode_bit = VAR_2;
  }
 }
 if (!(VAR_5.modes & FUNC_0(VAR_14.mode_bit))) {
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_18 = FUNC_5(&VAR_14, &VAR_15);
 if (VAR_18)
  goto out;
 VAR_8 = VAR_14.mode_bit;

 VAR_18 = VAR_13;
out:
 FUNC_8(&VAR_6);
 return VAR_18;
}
