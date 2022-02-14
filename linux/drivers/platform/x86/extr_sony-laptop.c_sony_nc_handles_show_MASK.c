
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int* cap; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 ssize_t VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1->cap); VAR_6++) {
  VAR_5 += FUNC_1(VAR_4 + VAR_5, VAR_0 - VAR_5, "0x%.4x ",
    VAR_1->cap[VAR_6]);
 }
 VAR_5 += FUNC_1(VAR_4 + VAR_5, VAR_0 - VAR_5, "\n");

 return VAR_5;
}
