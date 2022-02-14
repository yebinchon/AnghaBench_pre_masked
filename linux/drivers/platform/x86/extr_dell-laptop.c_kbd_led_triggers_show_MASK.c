
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kbd_state {int triggers; int mode_bit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int triggers; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kbd_state*) ;
 int FUNC_3 (struct kbd_state*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int ) ;
 char** VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 struct kbd_state VAR_6;
 bool VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_3(&VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_11 = 0;

 if (VAR_2) {
  VAR_7 = FUNC_4(VAR_6.mode_bit);
  VAR_8 = FUNC_2(&VAR_6);
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); ++VAR_9) {
   if (!(VAR_0.triggers & FUNC_1(VAR_9)))
    continue;
   if (!VAR_1[VAR_9])
    continue;
   if ((VAR_7 || VAR_8 <= 0) &&
       (VAR_6.triggers & FUNC_1(VAR_9)))
    VAR_5[VAR_11++] = '+';
   else
    VAR_5[VAR_11++] = '-';
   VAR_11 += FUNC_5(VAR_5+VAR_11, "%s ", VAR_1[VAR_9]);
  }
 }

 if (VAR_11)
  VAR_5[VAR_11 - 1] = '\n';

 return VAR_11;
}
