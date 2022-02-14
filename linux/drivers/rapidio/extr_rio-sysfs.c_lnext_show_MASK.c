
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_dev {int pef; TYPE_1__* rswitch; int swpinfo; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__* nextdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,...) ;
 struct rio_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct rio_dev *VAR_4 = FUNC_3(VAR_1);
 char *VAR_5 = VAR_3;
 int VAR_6;

 if (VAR_4->pef & VAR_0) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->swpinfo); VAR_6++) {
   if (VAR_4->rswitch->nextdev[VAR_6])
    VAR_5 += FUNC_2(VAR_5, "%s\n",
     FUNC_1(VAR_4->rswitch->nextdev[VAR_6]));
   else
    VAR_5 += FUNC_2(VAR_5, "null\n");
  }
 }

 return VAR_5 - VAR_3;
}
