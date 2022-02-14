
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  VAR_5 += FUNC_1(VAR_3 + VAR_5, "%d ", VAR_0[VAR_4]);
 FUNC_1(VAR_3 + VAR_5 - 1, "\n");
 return VAR_5;
}
