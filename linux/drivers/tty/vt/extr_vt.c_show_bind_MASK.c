
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct con_driver {int con; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct con_driver* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct con_driver *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_4->con);
 FUNC_2();

 return FUNC_4(VAR_3, VAR_0, "%i\n", VAR_5);
}
