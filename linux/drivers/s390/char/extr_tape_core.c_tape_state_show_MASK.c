
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {scalar_t__ first_minor; size_t tape_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct tape_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 char** VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct tape_device *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 return FUNC_1(VAR_4, VAR_0, "%s\n", (VAR_5->first_minor < 0) ?
  "OFFLINE" : VAR_1[VAR_5->tape_state]);
}
