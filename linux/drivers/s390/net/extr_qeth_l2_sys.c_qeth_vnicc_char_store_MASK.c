
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qeth_card {int conf_mutex; } ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qeth_card*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_0(VAR_1);
 bool VAR_6;
 u32 VAR_7;
 int VAR_8;

 if (!VAR_5)
  return -VAR_0;

 if (FUNC_1(VAR_3, &VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_2->attr.name);
 FUNC_2(&VAR_5->conf_mutex);
 VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_6);
 FUNC_3(&VAR_5->conf_mutex);

 return VAR_8 ? VAR_8 : VAR_4;
}
