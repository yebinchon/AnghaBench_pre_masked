
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {short profiles; } ;


 scalar_t__ VAR_0 ;
 short VAR_1 ;
 char** VAR_2 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,...) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_4,
  struct device_attribute *VAR_5, char *VAR_6)
{
 short VAR_7;
 size_t VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!VAR_7 || (VAR_3->profiles & VAR_7))
   VAR_8 += FUNC_0(VAR_6 + VAR_8, VAR_0 - VAR_8, "%s ",
     VAR_2[VAR_7]);
 }
 VAR_8 += FUNC_0(VAR_6 + VAR_8, VAR_0 - VAR_8, "\n");

 return VAR_8;
}
