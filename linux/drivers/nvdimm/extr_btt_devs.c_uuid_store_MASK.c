
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_btt {int uuid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct device*,char*,size_t,char const*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 size_t FUNC_3 (struct device*,int *,char const*,size_t) ;
 struct nd_btt* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct nd_btt *VAR_4 = FUNC_4(VAR_0);
 ssize_t VAR_5;

 FUNC_1(VAR_0);
 VAR_5 = FUNC_3(VAR_0, &VAR_4->uuid, VAR_2, VAR_3);
 FUNC_0(VAR_0, "result: %zd wrote: %s%s", VAR_5, VAR_2,
   VAR_2[VAR_3 - 1] == '\n' ? "" : "\n");
 FUNC_2(VAR_0);

 return VAR_5 ? VAR_5 : VAR_3;
}
