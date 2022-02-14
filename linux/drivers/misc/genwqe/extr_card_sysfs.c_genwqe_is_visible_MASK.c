
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int dummy; } ;
struct genwqe_dev {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;


 struct genwqe_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct genwqe_dev*) ;
 struct attribute** VAR_0 ;
 struct device* FUNC_2 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_3(struct kobject *VAR_1,
     struct attribute *VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 struct device *VAR_5 = FUNC_2(VAR_1);
 struct genwqe_dev *VAR_6 = FUNC_0(VAR_5);
 umode_t VAR_7 = VAR_2->mode;

 if (FUNC_1(VAR_6))
  return VAR_7;

 for (VAR_4 = 0; VAR_0[VAR_4] != ((void*)0); VAR_4++)
  if (VAR_0[VAR_4] == VAR_2)
   return VAR_7;

 return 0;
}
