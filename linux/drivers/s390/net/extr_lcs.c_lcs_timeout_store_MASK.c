
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {unsigned int lancmd_timeout; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct lcs_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned int*) ;

__attribute__((used)) static ssize_t
FUNC_2 (struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
        struct lcs_card *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_1);

        if (!VAR_5)
                return 0;

 VAR_7 = FUNC_1(VAR_3, 0, &VAR_6);
 if (VAR_7)
  return -VAR_0;

        VAR_5->lancmd_timeout = VAR_6;

        return VAR_4;

}
