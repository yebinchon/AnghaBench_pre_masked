
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum cmb_index { ____Placeholder_cmb_index } cmb_index ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*,unsigned long long) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, char *VAR_1, enum cmb_index VAR_2)
{
 return FUNC_1(VAR_1, "%lld\n",
  (unsigned long long) FUNC_0(FUNC_2(VAR_0), VAR_2));
}
