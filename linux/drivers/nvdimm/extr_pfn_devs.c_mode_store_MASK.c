
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_pfn {int mode; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int,char const*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (char const*,char*,size_t) ;
 struct nd_pfn* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct nd_pfn *VAR_9 = FUNC_6(VAR_5);
 ssize_t VAR_10 = 0;

 FUNC_1(VAR_5);
 FUNC_3(VAR_5);
 if (VAR_5->driver)
  VAR_10 = -VAR_0;
 else {
  size_t VAR_11 = VAR_8 - 1;

  if (FUNC_5(VAR_7, "pmem\n", VAR_11) == 0
    || FUNC_5(VAR_7, "pmem", VAR_11) == 0) {
   VAR_9->mode = VAR_3;
  } else if (FUNC_5(VAR_7, "ram\n", VAR_11) == 0
    || FUNC_5(VAR_7, "ram", VAR_11) == 0)
   VAR_9->mode = VAR_4;
  else if (FUNC_5(VAR_7, "none\n", VAR_11) == 0
    || FUNC_5(VAR_7, "none", VAR_11) == 0)
   VAR_9->mode = VAR_2;
  else
   VAR_10 = -VAR_1;
 }
 FUNC_0(VAR_5, "result: %zd wrote: %s%s", VAR_10, VAR_7,
   VAR_7[VAR_8 - 1] == '\n' ? "" : "\n");
 FUNC_4(VAR_5);
 FUNC_2(VAR_5);

 return VAR_10 ? VAR_10 : VAR_8;
}
