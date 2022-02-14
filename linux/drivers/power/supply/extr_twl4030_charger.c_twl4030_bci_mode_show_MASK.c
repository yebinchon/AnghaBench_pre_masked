
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_bci {int usb_mode; int ac_mode; TYPE_1__* ac; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (char**) ;
 scalar_t__ VAR_0 ;
 struct twl4030_bci* FUNC_1 (int ) ;
 char** VAR_1 ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct twl4030_bci *VAR_5 = FUNC_1(VAR_2->parent);
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8 = VAR_5->usb_mode;

 if (VAR_2 == &VAR_5->ac->dev)
  VAR_8 = VAR_5->ac_mode;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  if (VAR_8 == VAR_7)
   VAR_6 += FUNC_2(VAR_4+VAR_6, VAR_0-VAR_6,
     "[%s] ", VAR_1[VAR_7]);
  else
   VAR_6 += FUNC_2(VAR_4+VAR_6, VAR_0-VAR_6,
     "%s ", VAR_1[VAR_7]);
 VAR_4[VAR_6-1] = '\n';
 return VAR_6;
}
