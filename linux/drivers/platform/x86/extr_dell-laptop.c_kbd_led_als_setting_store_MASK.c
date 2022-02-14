
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kbd_state {int als_setting; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct kbd_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct kbd_state*,struct kbd_state*) ;
 int FUNC_2 (char const*,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct kbd_state VAR_5;
 struct kbd_state VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_0);

 VAR_8 = FUNC_0(&VAR_5);
 if (VAR_8)
  goto out;

 VAR_6 = VAR_5;
 VAR_6.als_setting = VAR_7;

 VAR_8 = FUNC_1(&VAR_6, &VAR_5);
 if (VAR_8)
  goto out;

 VAR_8 = VAR_4;
out:
 FUNC_4(&VAR_0);
 return VAR_8;
}
