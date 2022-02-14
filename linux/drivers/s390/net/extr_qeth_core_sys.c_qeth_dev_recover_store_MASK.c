
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct qeth_card *VAR_6 = FUNC_0(VAR_2);
 char *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return -VAR_0;

 if (!FUNC_1(VAR_6))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_4, &VAR_7, 16);
 if (VAR_8 == 1)
  FUNC_2(VAR_6);

 return VAR_5;
}
