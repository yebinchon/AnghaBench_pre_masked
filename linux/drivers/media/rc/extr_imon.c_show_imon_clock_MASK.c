
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {int lock; scalar_t__ display_isopen; int display_supported; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct imon_context* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 struct imon_context *VAR_5 = FUNC_0(VAR_2);
 size_t VAR_6;

 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->lock);

 if (!VAR_5->display_supported) {
  VAR_6 = FUNC_3(VAR_4, VAR_1, "Not supported.");
 } else {
  VAR_6 = FUNC_3(VAR_4, VAR_1,
   "To set the clock on your iMON display:\n"
   "# date \"+%%y %%m %%d %%w %%H %%M %%S\" > imon_clock\n"
   "%s", VAR_5->display_isopen ?
   "\nNOTE: imon device must be closed\n" : "");
 }

 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
