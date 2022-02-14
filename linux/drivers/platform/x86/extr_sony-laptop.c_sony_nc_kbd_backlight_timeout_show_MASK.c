
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int timeout; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 ssize_t VAR_5 = 0;
 VAR_5 = FUNC_0(VAR_4, VAR_0, "%d\n", VAR_1->timeout);
 return VAR_5;
}
