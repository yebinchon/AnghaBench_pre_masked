
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* adapter_reset ) (struct cxl*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (struct cxl*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (struct cxl*) ;
 int FUNC_4 (struct cxl*) ;
 struct cxl* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct cxl *VAR_6 = FUNC_5(VAR_2);
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_4, "%i", &VAR_8);
 if ((VAR_7 != 1) || (VAR_8 != 1 && VAR_8 != -1))
  return -VAR_0;






 if (VAR_8 == 1) {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7)
   goto out;

  VAR_7 = VAR_1->adapter_reset(VAR_6);

  if (VAR_7)
   FUNC_1(VAR_6);

 } else if (VAR_8 == -1) {

  VAR_7 = VAR_1->adapter_reset(VAR_6);
 }

out:
 return VAR_7 ? VAR_7 : VAR_5;
}
