
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_suspend_mode ) (int) ;} ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
      struct device_attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 int VAR_9, VAR_10 = -VAR_0;

 if (!VAR_2->set_suspend_mode)
  return VAR_10;

 for (VAR_9 = VAR_1; VAR_9 < FUNC_0(VAR_4); VAR_9++)
  if (VAR_4[VAR_9] &&
      FUNC_3(VAR_4[VAR_9], VAR_7)) {
   VAR_10 = 0;
   break;
  }

 if (!VAR_10 && VAR_9 != VAR_3) {
  VAR_10 = VAR_2->set_suspend_mode(VAR_9);
  if (FUNC_1(!VAR_10))
   VAR_3 = VAR_9;
 }

 return VAR_10 ? VAR_10 : VAR_8;
}
