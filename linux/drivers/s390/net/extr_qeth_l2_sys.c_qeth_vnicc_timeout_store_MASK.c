
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qeth_card {int conf_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qeth_card*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_0(VAR_1);
 u32 VAR_6;
 int VAR_7;

 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_5->conf_mutex);
 VAR_7 = FUNC_4(VAR_5, VAR_6);
 FUNC_3(&VAR_5->conf_mutex);
 return VAR_7 ? VAR_7 : VAR_4;
}
