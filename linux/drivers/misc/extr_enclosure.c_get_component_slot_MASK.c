
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_component {int slot; int number; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,int) ;
 struct enclosure_component* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct enclosure_component *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;


 if (VAR_3->slot >= 0)
  VAR_4 = VAR_3->slot;
 else
  VAR_4 = VAR_3->number;

 return FUNC_0(VAR_2, 40, "%d\n", VAR_4);
}
