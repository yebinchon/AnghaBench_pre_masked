
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ old_ec_model; } ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{

 int VAR_5, VAR_6 = 0;

 if (VAR_0->old_ec_model) {
  VAR_5 = FUNC_0(&VAR_6, ((void*)0));
 } else {
  VAR_5 = FUNC_1();
  VAR_6 = VAR_1;
 }
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_2(VAR_4, "%i\n", VAR_6);
}
