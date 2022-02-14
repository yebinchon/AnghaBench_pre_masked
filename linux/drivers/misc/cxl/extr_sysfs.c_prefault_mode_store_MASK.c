
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl_afu {int prefault_mode; } ;
typedef size_t ssize_t ;
typedef enum prefault_modes { ____Placeholder_prefault_modes } prefault_modes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,char*,int) ;
 struct cxl_afu* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
     struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct cxl_afu *VAR_8 = FUNC_3(VAR_4);
 enum prefault_modes VAR_9 = -1;

 if (!FUNC_2(VAR_6, "none", 4))
  VAR_9 = VAR_1;
 else {
  if (!FUNC_1()) {


   if (!FUNC_2(VAR_6, "work_element_descriptor", 23))
    VAR_9 = VAR_2;
   if (!FUNC_2(VAR_6, "all", 3))
    VAR_9 = VAR_0;
  } else {
   FUNC_0(VAR_4, "Cannot prefault with radix enabled\n");
  }
 }

 if (VAR_9 == -1)
  return -VAR_3;

 VAR_8->prefault_mode = VAR_9;
 return VAR_7;
}
