
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_btt {int lbasize; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,size_t,char const*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 size_t FUNC_3 (struct device*,char const*,int *,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 struct nd_btt* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct nd_btt *VAR_5 = FUNC_6(VAR_1);
 ssize_t VAR_6;

 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 VAR_6 = FUNC_3(VAR_1, VAR_3, &VAR_5->lbasize,
   VAR_0);
 FUNC_0(VAR_1, "result: %zd wrote: %s%s", VAR_6, VAR_3,
   VAR_3[VAR_4 - 1] == '\n' ? "" : "\n");
 FUNC_5(VAR_1);
 FUNC_2(VAR_1);

 return VAR_6 ? VAR_6 : VAR_4;
}
